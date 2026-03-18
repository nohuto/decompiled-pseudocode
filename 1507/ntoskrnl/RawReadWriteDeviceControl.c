/*
 * XREFs of RawReadWriteDeviceControl @ 0x14040BAF0
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

NTSTATUS __fastcall RawReadWriteDeviceControl(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  NTSTATUS v4; // ebx
  void *ReservedContext; // rax
  __int64 v8; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 Blink; // bl
  signed __int32 v16; // eax
  void *v17; // rax

  v4 = 0;
  ReservedContext = AdvancedHeader[1].ReservedContext;
  if ( ReservedContext && *(void **)(a3 + 48) == ReservedContext
    || ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)AdvancedHeader[2].Resource, 1u) )
  {
    if ( (unsigned __int8)(*(_BYTE *)a3 - 3) > 1u || *(_DWORD *)(a3 + 8) )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a3;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)&CurrentStackLocation[-1].FileObject = *(_OWORD *)(a3 + 48);
      CurrentStackLocation[-1].Context = *(PVOID *)(a3 + 64);
      CurrentStackLocation[-1].Flags |= 2u;
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)RawCompletionRoutine;
      v10[-1].Context = AdvancedHeader;
      v10[-1].Control = -32;
      return IofCallDriver((PDEVICE_OBJECT)AdvancedHeader[1].PushLock.Value, Irp);
    }
    v17 = AdvancedHeader[1].ReservedContext;
    if ( !v17 || *(void **)(a3 + 48) != v17 )
      ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)AdvancedHeader[2].Resource, 1u);
  }
  else
  {
    if ( *(_BYTE *)a3 == 27 )
    {
      v12 = KeAbPreAcquire((ULONG_PTR)&AdvancedHeader[2].PagingIoResource, 0LL, 0LL, v8);
      v13 = v12;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&AdvancedHeader[2].PagingIoResource, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&AdvancedHeader[2].PagingIoResource, v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      AdvancedHeader[2].AllocationSize.QuadPart = (LONGLONG)KeGetCurrentThread();
      LODWORD(AdvancedHeader[2].FilterContexts.Blink) = CurrentIrql;
      --LODWORD(AdvancedHeader[1].Resource);
      if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
      {
        AdvancedHeader[2].AllocationSize.QuadPart = 0LL;
        Blink = (unsigned __int8)AdvancedHeader[2].FilterContexts.Blink;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)&AdvancedHeader[2].PagingIoResource, 1, 0);
        if ( v16 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&AdvancedHeader[2].PagingIoResource, v16);
        __writecr8(Blink);
        KeAbPostRelease((ULONG_PTR)&AdvancedHeader[2].PagingIoResource);
      }
    }
    v4 = -1073741202;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 1);
  return v4;
}
