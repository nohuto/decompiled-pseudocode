/*
 * XREFs of ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180072268
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039DEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18003EAA0 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006E6E0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006EDF4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x18007124C (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeInToNormal(CLivePreview *this)
{
  float AnimationDuration; // xmm0_4
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ebx

  *((_DWORD *)this + 142) = 4;
  AnimationDuration = CLivePreview::GetAnimationDuration(1);
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 56), v3, AnimationDuration);
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v4 = CLivePreview::_HideExistingVisuals(this, 0);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x638u);
  return v5;
}
