/*
 * XREFs of ?xxxPlayAsync@CUserPlaySound@@AEAAJK@Z @ 0x140176AC0
 * Callers:
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400FC84C (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall CUserPlaySound::xxxPlayAsync(RPC_BINDING_HANDLE *this, __int64 a2)
{
  char v3; // bl
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi

  v3 = 0;
  UserSessionState = W32GetUserSessionState(this, a2);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v3 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v5);
  v6 = CUserPlaySound::PlaySync(this);
  EnterCrit(1LL, 0LL);
  if ( v3 )
    EnterMitRitHazardCrit();
  return v6;
}
