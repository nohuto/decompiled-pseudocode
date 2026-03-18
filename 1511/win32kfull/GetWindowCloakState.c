/*
 * XREFs of GetWindowCloakState @ 0x1C0075918
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0075870 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     NextTopWindow @ 0x1C008B4E8 (NextTopWindow.c)
 *     FBadWindow @ 0x1C008CA1C (FBadWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C00904B8 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C00905E0 (zzzImeSetFutureOwner.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C7790 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ShouldProcessHungWindow @ 0x1C010BFEC (ShouldProcessHungWindow.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C01451D0 (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E4FB0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C02000BC (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B78C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022D268 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     _RealChildWindowFromPoint @ 0x1C023C18C (_RealChildWindowFromPoint.c)
 * Callees:
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0051374 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall GetWindowCloakState(__int64 a1)
{
  int WindowCompositionInfo; // eax
  unsigned int v2; // ecx
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  WindowCompositionInfo = GetWindowCompositionInfo(a1, (__int64)v4);
  v2 = 0;
  if ( WindowCompositionInfo )
    return (unsigned int)GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v4);
  return v2;
}
