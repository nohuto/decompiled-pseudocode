/*
 * XREFs of xxxCallMouseHook @ 0x14003D5A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkFirstValid @ 0x14003954C (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 */

_BOOL8 __fastcall xxxCallMouseHook(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  struct tagTHREADINFO *v6; // rax
  __int64 Valid; // rax

  v4 = a1;
  v6 = PtiCurrent(a1);
  Valid = PhkFirstValid((__int64)v6, 7LL);
  return xxxCallHook2(Valid, a3 == 0 ? 3 : 0, v4, a2, 1u) != 0;
}
