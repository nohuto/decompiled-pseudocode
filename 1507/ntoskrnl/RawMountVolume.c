/*
 * XREFs of RawMountVolume @ 0x14040E7F4
 * Callers:
 *     RawFileSystemControl @ 0x14040C3BC (RawFileSystemControl.c)
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RawCleanupVcb @ 0x14040E0A0 (RawCleanupVcb.c)
 *     RawScanDeletedList @ 0x14040E17C (RawScanDeletedList.c)
 *     RawInitializeVcb @ 0x14040E1C4 (RawInitializeVcb.c)
 *     IoCreateStreamFileObjectLite @ 0x14040E470 (IoCreateStreamFileObjectLite.c)
 *     FsRtlNotifyVolumeEventEx @ 0x14040F42C (FsRtlNotifyVolumeEventEx.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 */

NTSTATUS __fastcall RawMountVolume(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  NTSTATUS result; // eax
  PDEVICE_OBJECT v7; // rbx
  ULONG v8; // eax
  int v9; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // r15
  KDEVICE_QUEUE *p_DeviceQueue; // rax
  __int64 v17; // rcx
  unsigned __int8 v18; // bl
  signed __int32 v19; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v21; // [rsp+48h] [rbp-70h]
  _BYTE Event[62]; // [rsp+50h] [rbp-68h] BYREF

  RawScanDeletedList((__int64)a1, a2, a3, a4);
  v5 = a1[2];
  if ( *(_WORD *)(v5 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8), 0x150u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v7 = DeviceObject;
    v8 = *(_DWORD *)(v5 + 152);
    if ( v8 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v8;
    v7->SectorSize = *(_WORD *)(v5 + 304);
    v7->Flags |= 0x10u;
    v9 = RawInitializeVcb(&v7[1].Type, a1[2], a1[1]);
    if ( v9 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v7[1]);
      IoDeleteDevice(v7);
    }
    else
    {
      *(_QWORD *)(v7[1].DeviceQueue.Lock + 8) = v7;
      *(_DWORD *)(v7[1].DeviceQueue.Lock + 24) = -1;
      *(_WORD *)(v7[1].DeviceQueue.Lock + 6) = 0;
      v7->Flags &= ~0x80u;
      v7->StackSize = *(_BYTE *)(v5 + 76) + 1;
      v21 = 0LL;
      memset(Event, 0, sizeof(Event));
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v7);
      v21 = StreamFileObjectLite;
      HIDWORD(v7[1].Queue.Wcb.DeviceRoutine) += 2;
      LODWORD(v7[1].Queue.Wcb.DeviceContext) += 2;
      *(_DWORD *)Event = 4063233;
      *(_QWORD *)&Event[24] = 0LL;
      *(_DWORD *)&Event[32] = -1;
      *(_QWORD *)&Event[36] = 1LL;
      *(_DWORD *)&Event[44] = 6;
      *(_DWORD *)&Event[48] = 16;
      *(_DWORD *)&Event[52] = *(_DWORD *)L"RAW";
      *(_WORD *)&Event[56] = aRaw[2];
      FsRtlNotifyVolumeEventEx(StreamFileObjectLite, 6u, (PTARGET_DEVICE_CUSTOM_NOTIFICATION)Event);
      ObfDereferenceObject(StreamFileObjectLite);
      HIDWORD(v7[1].Queue.Wcb.DeviceRoutine) -= 2;
      LODWORD(v7[1].Queue.Wcb.DeviceContext) -= 2;
      v12 = KeAbPreAcquire((ULONG_PTR)&RawGlobalLock, 0LL, 0LL, v11);
      v13 = v12;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&RawGlobalLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&RawGlobalLock, v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      qword_14032C2C8 = (__int64)KeGetCurrentThread();
      dword_14032C2F0 = CurrentIrql;
      p_DeviceQueue = &DeviceObject[1].DeviceQueue;
      v17 = RawMountedQueue;
      *(_QWORD *)&DeviceObject[1].DeviceQueue.Type = RawMountedQueue;
      p_DeviceQueue->DeviceListHead.Flink = (struct _LIST_ENTRY *)&RawMountedQueue;
      if ( *(__int64 **)(v17 + 8) != &RawMountedQueue )
        __fastfail(3u);
      *(_QWORD *)(v17 + 8) = p_DeviceQueue;
      RawMountedQueue = (__int64)p_DeviceQueue;
      qword_14032C2C8 = 0LL;
      v18 = dword_14032C2F0;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)&RawGlobalLock, 1, 0);
      if ( v19 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&RawGlobalLock, v19);
      __writecr8(v18);
      KeAbPostRelease((ULONG_PTR)&RawGlobalLock);
    }
    return v9;
  }
  return result;
}
