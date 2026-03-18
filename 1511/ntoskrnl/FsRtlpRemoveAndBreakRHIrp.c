/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400C90E0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlUninitializeOplock @ 0x1400E3B68 (FsRtlUninitializeOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400CAEBC (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC430 (FsRtlpOplockSendModernAppTermination.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRemoveAndBreakRHIrp(
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
  __int64 v13; // rdx

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
      FsRtlpModifyThreadPriorities(a2, P, 1);
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
  LOBYTE(v13) = 1;
  if ( *(_BYTE *)(v8 + 68) )
    a4 = -1073741536;
  *(_DWORD *)(v8 + 48) = a4;
  return pIofCompleteRequest(v8, v13);
}
