/*
 * XREFs of ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18008F850
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18000AA64 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EFD8 (-Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBackground(const struct tagRECT *a1, struct CAccent **a2)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  int v6; // edi
  __m128i v8; // [rsp+30h] [rbp-18h] BYREF
  CAccent *v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0uLL;
  v4 = CAccent::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v9);
  v5 = (volatile signed __int32 *)v9;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v8.m128i_i32[0] = 1;
    CAccent::UpdateAccentPolicy(v9, a1, &v8, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v4, 0x1D8u);
  }
  if ( v6 >= 0 )
  {
    *a2 = (struct CAccent *)v5;
    if ( !v5 )
      return (unsigned int)v6;
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)v9;
  }
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  return (unsigned int)v6;
}
