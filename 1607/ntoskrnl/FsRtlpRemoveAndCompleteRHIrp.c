/*
 * XREFs of FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9B20
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400785F4 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A2450 (FsRtlpCancelOplockRHIrp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     FsRtlpOplockEnqueueRH @ 0x140078320 (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x140078440 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078498 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x14007B688 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B6C8 (FsRtlpModifyThreadPriorities.c)
 *     IoReleaseCancelSpinLock @ 0x14009A538 (IoReleaseCancelSpinLock.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AC754 (FsRtlpOplockSendModernAppTermination.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall FsRtlpRemoveAndCompleteRHIrp(
        _QWORD *P,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int16 a7)
{
  __int64 v7; // rsi
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8

  v7 = P[2];
  P[2] = 0LL;
  v12 = 1;
  IoAcquireCancelSpinLock((PKIRQL)(v7 + 69));
  _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
  IoReleaseCancelSpinLock(*(_BYTE *)(v7 + 69));
  FsRtlpOplockDequeueRH((__int64)P, v13, v14);
  if ( *(_BYTE *)(v7 + 68) )
  {
    a3 = -1073741536;
    v12 = 0;
    ObfDereferenceObject((PVOID)P[3]);
    if ( P[5] )
      FsRtlpClearOwner(a2, (__int64)P);
    ExFreePoolWithTag(P, 0);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_DWORD *)v15 = 1572865;
    *(_DWORD *)(v15 + 4) = 3;
    *(_DWORD *)(v15 + 8) = (a4 >> 12) & 7;
    *(_DWORD *)(v15 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v15 + 16) = a6;
      *(_WORD *)(v15 + 20) = a7;
    }
    if ( (a5 & 1) != 0 )
    {
      *((_DWORD *)P + 12) &= 0xFF0FFFFF;
      *((_DWORD *)P + 12) |= a4 != 0 ? 0x100000 : 0x800000;
      FsRtlpOplockEnqueueRH((__int64 *)(a2 + 72), P);
      FsRtlpModifyThreadPriorities(a2, (__int64)P, 1);
      FsRtlpOplockSendModernAppTermination(a2, (__int64)P);
    }
    else
    {
      ObfDereferenceObject((PVOID)P[3]);
      if ( P[5] )
        FsRtlpClearOwner(a2, (__int64)P);
      ExFreePoolWithTag(P, 0);
    }
    *(_QWORD *)(v7 + 56) = 24LL;
  }
  *(_DWORD *)(v7 + 48) = a3;
  pIofCompleteRequest((PIRP)v7, 1);
  return v12;
}
