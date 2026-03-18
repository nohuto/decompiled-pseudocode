/*
 * XREFs of MiPushBadPool @ 0x1401DBA1C
 * Callers:
 *     MiScrubNonPagedPool @ 0x1406250D4 (MiScrubNonPagedPool.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
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
  *(_QWORD *)a2 = qword_1402FE1A0;
  qword_1402FE1A0 = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
