/*
 * XREFs of PostPlaySoundMessage @ 0x14021B590
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400FC84C (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70536));
}
