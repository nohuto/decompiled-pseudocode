/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C
 * Callers:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1400726F0 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140133958 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E2F5C (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E340C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14066D2C4 (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 */

void __fastcall FsRtlpRemoveAndCompleteWaitingIrp(_QWORD *a1)
{
  _QWORD **v2; // rcx
  void **v3; // rax
  __int64 v4; // rsi

  v2 = (_QWORD **)*a1;
  v3 = (void **)a1[1];
  if ( v2[1] != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = a1[2];
  if ( v4 )
  {
    IoAcquireCancelSpinLock((PKIRQL)(v4 + 69));
    _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v4 + 69));
    *(_QWORD *)(v4 + 56) = *((unsigned int *)a1 + 12);
    *(_DWORD *)(v4 + 48) = *(_BYTE *)(v4 + 68) != 0 ? 0xC0000120 : 0;
  }
  ((void (__fastcall *)(_QWORD, __int64))a1[3])(a1[4], v4);
  ExFreePoolWithTag(a1, 0);
}
