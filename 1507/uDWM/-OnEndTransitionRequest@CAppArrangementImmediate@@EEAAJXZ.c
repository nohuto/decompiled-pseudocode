/*
 * XREFs of ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x180091950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180010260 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x180091AF0 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 */

__int64 __fastcall CAppArrangementImmediate::OnEndTransitionRequest(struct CImmersiveState **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  CBaseObject *v7; // [rsp+40h] [rbp+8h] BYREF

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
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xDF0u);
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0xDEEu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0xDECu);
  }
  return v3;
}
