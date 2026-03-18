/*
 * XREFs of ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0053EAC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     FBadWindow @ 0x1C008CA1C (FBadWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EA1D0 (-RequestModernAppClose@@YAHXZ.c)
 *     ?IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C02265D4 (-IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C022663C (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
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
