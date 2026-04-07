/*
 * XREFs of ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800945A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800064C8 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180007340 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  CAnimationScheduler *v3; // rcx
  int v4; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CStoryboard::OnEndTransitionRequest(this);
  if ( v2 >= 0 )
  {
    v3 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    if ( *((_BYTE *)this + 120) )
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Bu, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2930;
    }
    else
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Au, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2934;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1800AD120, 1LL, v4, v6);
    return 0LL;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xB69u);
  return 0LL;
}
