/*
 * XREFs of MiPushBadPool @ 0x140220578
 * Callers:
 *     MiScrubNonPagedPool @ 0x1406A49A4 (MiScrubNonPagedPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall MiPushBadPool(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(__int64 *)(a2 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 312), &LockHandle);
  *(_QWORD *)a2 = qword_14034E660;
  qword_14034E660 = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
