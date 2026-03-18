/*
 * XREFs of ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00048A8
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidschiUnselectContext(struct _VIDSCH_CONTEXT *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 1872LL), &LockHandle);
  if ( (*((_DWORD *)a1 + 44) & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 44) &= ~0x400u;
    if ( (*((_DWORD *)a1 + 44) & 0x200) != 0 && (*((_DWORD *)a1 + 44) & 2) == 0 )
      VidSchiUpdateContextStatus((__int64)a1, (_QWORD *)0xA, (__int64 *)0x15B);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
