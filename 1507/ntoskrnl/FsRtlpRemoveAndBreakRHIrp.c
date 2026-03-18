/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400746BC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x140122A5C (FsRtlUninitializeOplock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14006D784 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockEnqueueRH @ 0x140073C48 (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        __int64 P,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int16 a8)
{
  __int64 v8; // rsi
  __int64 v12; // r8
  __int64 v13; // r8

  v8 = *(_QWORD *)(P + 16);
  *(_QWORD *)(P + 16) = 0LL;
  if ( a3 )
  {
    IoAcquireCancelSpinLock((PKIRQL)(v8 + 69));
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(P + 24), 0x746C6644u);
    if ( *(_QWORD *)(P + 40) )
      FsRtlpClearOwnerThread(a2, P);
    ExFreePoolWithTag((PVOID)P, 0);
    *(_QWORD *)(v8 + 56) = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)v12 = 1572865;
    *(_DWORD *)(v12 + 4) = 3;
    *(_DWORD *)(v12 + 8) = (a5 >> 12) & 7;
    *(_DWORD *)(v12 + 12) = a6;
    if ( (a6 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 16) = a7;
      *(_WORD *)(v12 + 20) = a8;
    }
    if ( (a6 & 1) != 0 )
    {
      *(_DWORD *)(P + 48) &= 0xFF0FFFFF;
      *(_DWORD *)(P + 48) |= a5 != 0 ? 0x100000 : 0x800000;
      FsRtlpOplockEnqueueRH(a2 + 72, P, v12, -a5);
      LOBYTE(v13) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v13);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(P + 24), 0x746C6644u);
      if ( *(_QWORD *)(P + 40) )
        FsRtlpClearOwnerThread(a2, P);
      ExFreePoolWithTag((PVOID)P, 0);
    }
    *(_QWORD *)(v8 + 56) = 24LL;
  }
  if ( *(_BYTE *)(v8 + 68) )
    a4 = -1073741536;
  *(_DWORD *)(v8 + 48) = a4;
  pIofCompleteRequest((PIRP)v8, 1);
}
