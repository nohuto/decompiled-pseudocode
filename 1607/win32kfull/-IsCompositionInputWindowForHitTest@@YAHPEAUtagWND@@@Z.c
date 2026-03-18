/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00997E8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  int v2; // eax
  unsigned int v3; // r11d

  v2 = IsCompositionInputWindow(a1);
  v3 = 0;
  if ( v2 && ((*((_BYTE *)a1 + 291) & 2) == 0 || (unsigned int)CoreWindowProp::IsComponent(a1)) )
    return 1;
  return v3;
}
