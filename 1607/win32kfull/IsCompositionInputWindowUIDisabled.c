/*
 * XREFs of IsCompositionInputWindowUIDisabled @ 0x1C0118264
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C000DAB8 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall IsCompositionInputWindowUIDisabled(struct tagWND *a1)
{
  struct tagWND *v1; // r11
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v4; // rbx
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rax

  if ( !(unsigned int)IsCompositionInputWindow(a1) )
    return 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v1);
  v4 = (__int64)CompositionInputWindowUIOwner;
  if ( !CompositionInputWindowUIOwner )
    return 0LL;
  if ( (*((_BYTE *)CompositionInputWindowUIOwner + 55) & 8) != 0 )
    return 1LL;
  TopLevelHost = CoreWindowProp::GetTopLevelHost(CompositionInputWindowUIOwner);
  if ( TopLevelHost )
    v4 = (__int64)TopLevelHost;
  TopLevelWindow = GetTopLevelWindow(v4);
  while ( v4 != TopLevelWindow )
  {
    if ( (*(_BYTE *)(v4 + 55) & 8) != 0 )
      return 1LL;
    v4 = *(_QWORD *)(v4 + 88);
  }
  return (*(_BYTE *)(v4 + 55) & 8) != 0;
}
