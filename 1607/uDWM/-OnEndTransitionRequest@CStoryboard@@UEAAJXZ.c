/*
 * XREFs of ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000F3D0
 * Callers:
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x180001F10 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800038F0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180003F40 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x18000F9F0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180092B20 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x180092BB0 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x180092BF0 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x180092C60 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x180092D00 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F0E0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000F6B0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::OnEndTransitionRequest(struct _GUID *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CStoryboard *v4; // rcx

  v2 = CStoryboard::_EnumerateWindows(this, 1u);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v2, 0x13FDu);
  }
  else
  {
    v4 = *(CStoryboard **)&this[5].Data1;
    if ( v4 )
    {
      CStoryboard::Release(v4);
      *(_QWORD *)&this[5].Data1 = 0LL;
    }
  }
  return v3;
}
