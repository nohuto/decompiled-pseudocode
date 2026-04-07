/*
 * XREFs of ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800944D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x180002460 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B8E4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAppArrangementImmediate::OnEndTransitionRequest(struct CImmersiveState **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  struct CAnimationComponent *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = CImmersiveState::Create(
         this + 23,
         *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) + 96LL));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CGroupingStoryboard::OnEndTransitionRequest((CGroupingStoryboard *)this);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)this, 0LL, 3, &v7);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xE2Cu);
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0xE2Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xE28u);
  }
  return v3;
}
