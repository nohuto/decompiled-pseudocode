/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244
 * Callers:
 *     PostIAMShellHookMessageEx @ 0x140010AC0 (PostIAMShellHookMessageEx.c)
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 *     Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x1402061AC (Feature_MTestAbSh1__private_ReportDeviceUsage.c)
 *     Feature_DesktopDisplayBroker__private_IsEnabledPreCheck @ 0x140243C0C (Feature_DesktopDisplayBroker__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck @ 0x140243C80 (Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x140243CF0 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x14025720C (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x140297348 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 *     InitRotationManager @ 0x14029A320 (InitRotationManager.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402FB748 (--0InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v5; // edx
  unsigned int v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v3 = *(volatile signed __int32 **)a3;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return;
    v6 = 32;
  }
  else
  {
    v6 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v6);
  }
  else
  {
    v7 = *v3;
    do
    {
      if ( (v7 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v7) & 1) != 0 )
        break;
      v8 = v7;
      v7 = _InterlockedCompareExchange(v3, v7 | v6, v7);
    }
    while ( v8 != v7 );
  }
}
