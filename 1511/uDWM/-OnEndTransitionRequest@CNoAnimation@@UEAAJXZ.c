/*
 * XREFs of ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800946E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180007340 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CNoAnimation::OnEndTransitionRequest(CStoryboard **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct CAnimationComponent *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = CStoryboard::OnEndTransitionRequest(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::_CreateAndAddNullComponentWithWindow((CStoryboard *)this, 0LL, 1, &v6);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x12EEu);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x12ECu);
  }
  return v3;
}
