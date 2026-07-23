/*
 * XREFs of CmpEnumerateCallback @ 0x14054C9A8
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     CmpLockCallbackListShared @ 0x14054CA28 (CmpLockCallbackListShared.c)
 *     CmpUnlockCallbackList @ 0x14054D408 (CmpUnlockCallbackList.c)
 */

__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  __int64 *v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rsi
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  CmpLockCallbackListShared();
  v2 = *a1;
  if ( *a1 )
  {
    v3 = *a1;
  }
  else
  {
    v2 = &CallbackListHead;
    v3 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v2 = (__int64 *)*v2;
    if ( v2 == &CallbackListHead )
      break;
    if ( *((int *)v2 + 4) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 4);
      v4 = v2[5];
      *a1 = v2;
      break;
    }
  }
  CmpUnlockCallbackList(v2, &CallbackListHead);
  if ( v3 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)v3 + 4) == 0x80000000 )
    {
      _InterlockedOr(v6, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  return v4;
}
