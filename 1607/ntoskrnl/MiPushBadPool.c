/*
 * XREFs of MiPushBadPool @ 0x1401EC800
 * Callers:
 *     MiScrubNonPagedPool @ 0x140659E60 (MiScrubNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 */

void __fastcall MiPushBadPool(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = MiLockPageInline(a2);
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 312), &LockHandle);
  *(_QWORD *)a2 = qword_140326460;
  qword_140326460 = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
