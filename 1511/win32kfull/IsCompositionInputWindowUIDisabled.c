/*
 * XREFs of IsCompositionInputWindowUIDisabled @ 0x1C009686C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00962A0 (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall IsCompositionInputWindowUIDisabled(struct tagWND *a1)
{
  struct tagWND *v1; // r11
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *v4; // rbx
  __int64 TopLevelWindow; // rax

  if ( !(unsigned int)IsCompositionInputWindow(a1) )
    return 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v1);
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
