/*
 * XREFs of ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C000C814 (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C000DAB8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00997E8 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     FBadWindow @ 0x1C00AB590 (FBadWindow.c)
 *     ?IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C02262F0 (-IsComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0226358 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
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
