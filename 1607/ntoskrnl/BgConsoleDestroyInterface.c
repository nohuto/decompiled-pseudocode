/*
 * XREFs of BgConsoleDestroyInterface @ 0x1407287B8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1401273D8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140728724 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1407D5260 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140728810 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140329998;
    if ( qword_140329998 )
    {
      if ( *(_QWORD *)(qword_140329998 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140329998 + 40));
        v2 = qword_140329998;
      }
      BgpFwFreeMemory(v2);
      qword_140329998 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
