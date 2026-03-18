/*
 * XREFs of _anonymous_namespace_::InitializeTimerGlobals @ 0x14026E7C8
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeTimerGlobals(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  memset_0((void *)(UserSessionState + 57580), 0, 0xFE0uLL);
  *(_DWORD *)(UserSessionState + 62672) = 32511;
  *(_DWORD *)(UserSessionState + 62676) = 43200000;
  *(_DWORD *)(UserSessionState + 62680) = 43200000;
  result = 0LL;
  *(_OWORD *)(UserSessionState + 62740) = xmmword_140367258;
  *(_OWORD *)(UserSessionState + 62756) = xmmword_140367268;
  return result;
}
