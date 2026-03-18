/*
 * XREFs of NtUserDeferredDesktopRotation @ 0x1402B0FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14015B4C0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 */

unsigned __int64 NtUserDeferredDesktopRotation()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = xxxDeferredDesktopRotation(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
