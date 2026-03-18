/*
 * XREFs of GetWindowCloakState @ 0x1C009E3B4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 *     zzzImeSetOwnerWindow @ 0x1C00A8C1C (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C00A8D44 (zzzImeSetFutureOwner.c)
 *     FBadWindow @ 0x1C00AB590 (FBadWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00D5530 (ShouldProcessHungWindow.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     NextTopWindow @ 0x1C0105548 (NextTopWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C014B020 (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01DB850 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01F7620 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     _RealChildWindowFromPoint @ 0x1C0233B2C (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0078DDC (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
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
