/*
 * XREFs of SetDeepDelayableVisRITTimer @ 0x14002AE28
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14002A280 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 */

__int64 __fastcall SetDeepDelayableVisRITTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  unsigned int v5; // r8d

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 864000000;
  if ( (*(_DWORD *)(UserSessionState + 62696) & 1) == 0 )
    v5 = v2;
  return InternalSetTimer(
           0LL,
           a1,
           v5,
           (__int64)zzzAnimateCursor,
           (*(_DWORD *)(UserSessionState + 62696) & 1) != 0 ? 0x36EE80 : 0,
           20);
}
