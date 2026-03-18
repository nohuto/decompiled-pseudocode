/*
 * XREFs of BgConsoleDestroyInterface @ 0x14075F730
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x14075F69C (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1407FEAA8 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x14075F770 (BgpDisplayCharacterDestroyContext.c)
 */

__int64 __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface && qword_1403188E8 )
  {
    BgpDisplayCharacterDestroyContext();
    qword_1403188E8 = 0LL;
  }
  return BgpFwReleaseLock();
}
