/*
 * XREFs of UpdateCheckpoint @ 0x1C0085BE8
 * Callers:
 *     _GetWindowPlacement @ 0x1C0083148 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C00F311C (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C020425C (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206950 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
