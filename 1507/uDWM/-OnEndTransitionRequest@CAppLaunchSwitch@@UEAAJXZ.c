/*
 * XREFs of ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180091A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18000C080 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000F900 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
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
      v6 = 2890;
    }
    else
    {
      v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(v3, 0x3Au, (struct CStoryboard *)this);
      if ( v4 >= 0 )
        return 0LL;
      v6 = 2894;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1800AAE80, 1LL, v4, v6);
    return 0LL;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xB41u);
  return 0LL;
}
