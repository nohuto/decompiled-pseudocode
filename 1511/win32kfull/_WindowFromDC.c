/*
 * XREFs of _WindowFromDC @ 0x1C00E5F40
 * Callers:
 *     _ServerFixupMenuDC @ 0x1C00ED968 (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C00F9150 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0210460 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C0211110 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226E94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C00E5F84 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

struct tagWND *__fastcall WindowFromDC(HDC a1)
{
  struct tagWND *v2; // rbx

  GreLockVisRgnShared(*gpDispInfo);
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*gpDispInfo);
  return v2;
}
