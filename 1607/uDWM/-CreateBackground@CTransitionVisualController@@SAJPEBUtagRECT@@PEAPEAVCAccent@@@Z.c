/*
 * XREFs of ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800096F8
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180004B54 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003828C (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBackground(const struct tagRECT *a1, struct CAccent **a2)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  CBaseObject *v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = CAccent::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v10);
  v5 = (volatile signed __int32 *)v10;
  v6 = v4;
  if ( v4 >= 0 )
  {
    LODWORD(v9) = CAccent::s_clrCurrentAccentBackground;
    LODWORD(v8) = 1;
    CAccent::UpdateAccentPolicy(v10, a1, (const struct ACCENT_POLICY *)&v8, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v4, 0x1D5u);
  }
  if ( v6 >= 0 )
  {
    *a2 = (struct CAccent *)v5;
    if ( !v5 )
      return (unsigned int)v6;
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)v10;
  }
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  return (unsigned int)v6;
}
