/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOplockBreakToII @ 0x1400EAD5C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1400F4010 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140103A90 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401ACF44 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401AD27C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1405F4348 (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
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
