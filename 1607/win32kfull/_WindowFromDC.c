/*
 * XREFs of _WindowFromDC @ 0x1C005CB00
 * Callers:
 *     _ServerFixupMenuDC @ 0x1C01163C0 (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C01469C0 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208230 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C0209110 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C005CB44 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

struct tagWND *__fastcall WindowFromDC(HDC a1)
{
  struct tagWND *v2; // rbx

  GreLockVisRgnShared(*gpDispInfo);
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*gpDispInfo);
  return v2;
}
