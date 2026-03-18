/*
 * XREFs of VidSchiNodeHasOnlyPagingContext @ 0x1C0017858
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiNodeHasOnlyPagingContext(__int64 a1)
{
  char v2; // bl
  unsigned int i; // edx
  __int64 v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 1872LL), &LockHandle);
  for ( i = *(_DWORD *)(a1 + 1480); i != *(_DWORD *)(a1 + 1472); i = ((_BYTE)i + 1) & 0xF )
  {
    v4 = *(_QWORD *)(a1 + 8LL * i + 1488);
    if ( v4 && !*(_BYTE *)(v4 + 641) )
    {
      v2 = 0;
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
