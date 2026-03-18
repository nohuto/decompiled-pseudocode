/*
 * XREFs of IsCompositionInputWindowUIDisabled @ 0x1C00DFA10
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00DF44C (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C4C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall IsCompositionInputWindowUIDisabled(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v4; // rbx
  __int64 TopLevelWindow; // rax

  if ( !IsCompositionInputWindow(a1) )
    return 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
  v4 = CompositionInputWindowUIOwner;
  if ( !CompositionInputWindowUIOwner )
    return 0LL;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  while ( v4 != (struct tagWND *)TopLevelWindow )
  {
    if ( (*((_BYTE *)v4 + 55) & 8) != 0 )
      return 1LL;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  return (*((_BYTE *)v4 + 55) & 8) != 0;
}
