/*
 * XREFs of BgConsoleGetInterface @ 0x140725A90
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1407D5260 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401271F4 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140127230 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_1402FA028 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
