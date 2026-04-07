/*
 * XREFs of ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180007340
 * Callers:
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x180002460 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180003D00 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180004820 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180004A40 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800945A0 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x180094630 (-OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x180094670 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800946E0 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x180094780 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180007050 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000761C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CStoryboard *v4; // rcx

  v2 = CStoryboard::_EnumerateWindows((CStoryboard *)this, 1u);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v2, 0x1593u);
  }
  else
  {
    v4 = this[10];
    if ( v4 )
    {
      CStoryboard::Release(v4);
      this[10] = 0LL;
    }
  }
  return v3;
}
