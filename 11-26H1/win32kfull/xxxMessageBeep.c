/*
 * XREFs of xxxMessageBeep @ 0x1401B1154
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxFlashEnabledPopup @ 0x1401B1004 (xxxFlashEnabledPopup.c)
 *     NtUserMessageBeep @ 0x1401B10B0 (NtUserMessageBeep.c)
 *     EditionMessageBeep @ 0x1402CB670 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400FC84C (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1402CB688 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  struct tagTHREADINFO *v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v1 = PtiCurrent(a1);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v1 + 130, 0, 0) & 4) != 0 )
  {
    xxxOldMessageBeep();
  }
  else
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v2, v1) + 66792) & 0x80000) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v4, v3);
      CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70536));
    }
    xxxSoundSentry();
  }
  return 1LL;
}
