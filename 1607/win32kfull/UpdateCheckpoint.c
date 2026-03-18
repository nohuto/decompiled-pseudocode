/*
 * XREFs of UpdateCheckpoint @ 0x1C00AFD1C
 * Callers:
 *     _GetWindowPlacement @ 0x1C00AF118 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00B2E28 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C0130DD8 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01FB91C (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
