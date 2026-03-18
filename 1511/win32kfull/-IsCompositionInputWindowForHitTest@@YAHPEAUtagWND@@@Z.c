/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0053EAC
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _FindProp @ 0x1C0054934 (_FindProp.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  _QWORD *Prop; // rax
  __int64 v2; // r10
  unsigned int v3; // r11d

  if ( !*((_QWORD *)a1 + 21) )
    return 0;
  Prop = (_QWORD *)FindProp(a1, CInputQueueProp::s_atom, 1LL);
  if ( !Prop
    || !*Prop
    || (*(_BYTE *)(v2 + 291) & 2) != 0 && !(unsigned int)CoreWindowProp::IsComponent((struct tagWND *)v2) )
  {
    return 0;
  }
  return v3;
}
