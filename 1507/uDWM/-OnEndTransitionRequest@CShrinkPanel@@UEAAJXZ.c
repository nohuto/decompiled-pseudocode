/*
 * XREFs of ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x180091C70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18000C02C (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F670 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000F900 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 */

__int64 __fastcall CShrinkPanel::OnEndTransitionRequest(CShrinkPanel *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CStoryboard::_EnumerateWindows(this, 4u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v3 = v4;
    if ( v4 >= 0 )
      CAnimationScheduler::AbandonTransition(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
        5);
    else
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x5F3u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x5F2u);
  }
  return v3;
}
