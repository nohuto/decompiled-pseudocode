/*
 * XREFs of RawMountVolume @ 0x1403EFCEC
 * Callers:
 *     RawFileSystemControl @ 0x1404D0F18 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoCreateStreamFileObjectLite @ 0x1403EE138 (IoCreateStreamFileObjectLite.c)
 *     RawCleanupVcb @ 0x1403EFAA4 (RawCleanupVcb.c)
 *     FsRtlNotifyVolumeEventEx @ 0x1403F00F8 (FsRtlNotifyVolumeEventEx.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     RawInitializeVcb @ 0x1404AD3AC (RawInitializeVcb.c)
 *     RawScanDeletedList @ 0x1404D14A0 (RawScanDeletedList.c)
 */

NTSTATUS __fastcall RawMountVolume(_QWORD *a1)
{
  __int64 v2; // r14
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  ULONG v5; // eax
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r14
  KDEVICE_QUEUE *p_DeviceQueue; // rbx
  __int64 v9; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v11; // [rsp+48h] [rbp-70h]
  _BYTE Event[62]; // [rsp+50h] [rbp-68h] BYREF

  RawScanDeletedList();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8LL), 0x150u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = DeviceObject;
    v5 = *(_DWORD *)(v2 + 152);
    if ( v5 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v5;
    v4->SectorSize = *(_WORD *)(v2 + 304);
    v4->Flags |= 0x10u;
    v6 = RawInitializeVcb(&v4[1], a1[2], a1[1]);
    if ( v6 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v4[1]);
      IoDeleteDevice(v4);
    }
    else
    {
      *(_QWORD *)(v4[1].DeviceQueue.Lock + 8) = v4;
      *(_DWORD *)(v4[1].DeviceQueue.Lock + 24) = -1;
      *(_WORD *)(v4[1].DeviceQueue.Lock + 6) = 0;
      v4->Flags &= ~0x80u;
      v4->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v11 = 0LL;
      memset(Event, 0, sizeof(Event));
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v4);
      v11 = StreamFileObjectLite;
      HIDWORD(v4[1].Queue.Wcb.DeviceRoutine) += 2;
      LODWORD(v4[1].Queue.Wcb.DeviceContext) += 2;
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
      HIDWORD(v4[1].Queue.Wcb.DeviceRoutine) -= 2;
      LODWORD(v4[1].Queue.Wcb.DeviceContext) -= 2;
      ExAcquireFastMutex(&RawGlobalLock);
      p_DeviceQueue = &v4[1].DeviceQueue;
      v9 = RawMountedQueue;
      if ( *(__int64 **)(RawMountedQueue + 8) != &RawMountedQueue )
        __fastfail(3u);
      *(_QWORD *)&p_DeviceQueue->Type = RawMountedQueue;
      p_DeviceQueue->DeviceListHead.Flink = (struct _LIST_ENTRY *)&RawMountedQueue;
      *(_QWORD *)(v9 + 8) = p_DeviceQueue;
      RawMountedQueue = (__int64)p_DeviceQueue;
      KeReleaseGuardedMutex(&RawGlobalLock);
    }
    return v6;
  }
  return result;
}
