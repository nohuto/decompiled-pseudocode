/*
 * XREFs of UpdateCheckpoint @ 0x1C0077304
 * Callers:
 *     _GetWindowPlacement @ 0x1C0076EB4 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C00F82A4 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C02045CC (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
