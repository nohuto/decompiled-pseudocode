/*
 * XREFs of BgConsoleDestroyInterface @ 0x1406DC6E8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1406DC654 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140788F20 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1406DC728 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface && qword_1402C9888 )
  {
    BgpDisplayCharacterDestroyContext();
    qword_1402C9888 = 0LL;
  }
  BgpFwReleaseLock();
}
