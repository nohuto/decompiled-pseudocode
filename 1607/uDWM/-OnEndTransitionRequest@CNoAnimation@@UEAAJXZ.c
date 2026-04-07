/*
 * XREFs of ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x180092C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004280 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000F3D0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNoAnimation::OnEndTransitionRequest(struct _GUID *this)
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
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x1180u);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x117Eu);
  }
  return v3;
}
