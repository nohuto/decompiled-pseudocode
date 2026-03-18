/*
 * XREFs of GreGetRedirectionEvent @ 0x14025C4E8
 * Callers:
 *     NtUserSignalRedirectionStartComplete @ 0x140294DB0 (NtUserSignalRedirectionStartComplete.c)
 *     NtUserWaitForRedirectionStartComplete @ 0x1402C0FD0 (NtUserWaitForRedirectionStartComplete.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 */

__int64 __fastcall GreGetRedirectionEvent(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  Gre::Base *v2; // rcx

  v1 = Gre::Base::Globals(a1);
  if ( IsDwmActive(v2) )
    return *(_QWORD *)(*((_QWORD *)v1 + 28) + 336LL);
  else
    return 0LL;
}
