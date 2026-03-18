/*
 * XREFs of FsRtlpRemoveAndBreakRHIrp @ 0x1400777A4
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400785F4 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A2450 (FsRtlpCancelOplockRHIrp.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockEnqueueRH @ 0x140078320 (FsRtlpOplockEnqueueRH.c)
 *     IoAcquireCancelSpinLock @ 0x140078440 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078498 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x14007B688 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B6C8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AC754 (FsRtlpOplockSendModernAppTermination.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndBreakRHIrp(
        PVOID P,
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

  v8 = *((_QWORD *)P + 2);
  *((_QWORD *)P + 2) = 0LL;
  if ( a3 )
  {
    IoAcquireCancelSpinLock((PKIRQL)(v8 + 69));
    _InterlockedExchange64((volatile __int64 *)(v8 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v8 + 69));
  }
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v8 + 68) )
  {
    ObfDereferenceObjectWithTag(*((PVOID *)P + 3), 0x746C6644u);
    if ( *((_QWORD *)P + 5) )
      FsRtlpClearOwner(a2, P);
    ExFreePoolWithTag(P, 0);
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
      *((_DWORD *)P + 12) &= 0xFF0FFFFF;
      *((_DWORD *)P + 12) |= a5 != 0 ? 0x100000 : 0x800000;
      FsRtlpOplockEnqueueRH(a2 + 72, P, v12, -a5);
      LOBYTE(v13) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v13);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag(*((PVOID *)P + 3), 0x746C6644u);
      if ( *((_QWORD *)P + 5) )
        FsRtlpClearOwner(a2, P);
      ExFreePoolWithTag(P, 0);
    }
    *(_QWORD *)(v8 + 56) = 24LL;
  }
  if ( *(_BYTE *)(v8 + 68) )
    a4 = -1073741536;
  *(_DWORD *)(v8 + 48) = a4;
  pIofCompleteRequest((PIRP)v8, 1);
}
