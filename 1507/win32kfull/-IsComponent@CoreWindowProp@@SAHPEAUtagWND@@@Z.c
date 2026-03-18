/*
 * XREFs of ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C
 * Callers:
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C0004690 (-RequestModernAppClose@@YAHXZ.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009730 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009784 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     FBadWindow @ 0x1C004490C (FBadWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006501C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall CoreWindowProp::IsComponent(struct tagWND *a1)
{
  unsigned int v1; // r10d
  __int64 Prop; // rax

  v1 = 0;
  if ( (*((_BYTE *)a1 + 291) & 2) != 0 )
  {
    Prop = GetProp((__int64)a1, CoreWindowProp::s_atom, 1LL);
    if ( Prop )
      return *(unsigned int *)(Prop + 20);
  }
  return v1;
}
