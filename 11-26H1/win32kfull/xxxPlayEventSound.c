/*
 * XREFs of xxxPlayEventSound @ 0x140176A50
 * Callers:
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     NtUserPlayEventSound @ 0x1402B90D0 (NtUserPlayEventSound.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxPlayAsync@CUserPlaySound@@AEAAJK@Z @ 0x140176AC0 (-xxxPlayAsync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1)
{
  unsigned int v1; // edi
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 UserSessionState; // rax

  v1 = a1;
  v2 = PtiCurrent(a1);
  if ( (*(_DWORD *)(W32GetUserSessionState(v4, v3) + 66792) & 0x1000000) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 4) == 0 )
  {
    UserSessionState = W32GetUserSessionState(0LL, v5);
    CUserPlaySound::xxxPlayAsync(*(CUserPlaySound **)(UserSessionState + 70536), v1);
  }
  return 1LL;
}
