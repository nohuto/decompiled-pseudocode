/*
 * XREFs of ?BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z @ 0x18012F604
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AA90 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x18000BED0 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18011B75C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 */

__int64 __fastcall CHitTestContext::BspHitTest(const struct D2D_POINT_2F *this, struct CPolygon *a2)
{
  struct D2D_POINT_2F v2; // rdi
  unsigned int v3; // r14d
  const struct CBaseMatrix *TopByReference; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  const struct CBaseMatrix *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  const enum MilBackfaceVisibility::Enum *v14; // rax
  int v15; // eax
  bool v17; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v18[4]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v19[4]; // [rsp+80h] [rbp-19h] BYREF

  v2 = (struct D2D_POINT_2F)*((_QWORD *)a2 + 26);
  v3 = 0;
  if ( !*(_QWORD *)&this[14] && (*(unsigned __int8 (__fastcall **)(struct D2D_POINT_2F))(**(_QWORD **)&v2 + 176LL))(v2) )
  {
    v17 = 0;
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)&this[15]);
    v7 = *((_OWORD *)TopByReference + 1);
    v18[0] = *(_OWORD *)TopByReference;
    v8 = *((_OWORD *)TopByReference + 2);
    v18[1] = v7;
    v9 = *((_OWORD *)TopByReference + 3);
    v18[2] = v8;
    v18[3] = v9;
    v10 = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)&this[27]);
    v11 = *((_OWORD *)v10 + 1);
    v19[0] = *(_OWORD *)v10;
    v12 = *((_OWORD *)v10 + 2);
    v19[1] = v11;
    v13 = *((_OWORD *)v10 + 3);
    v19[2] = v12;
    v19[3] = v13;
    v14 = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[23]);
    v15 = CPolygon::HitTestWithTransformation(
            a2,
            this + 12,
            (const struct CMILMatrix *)v19,
            (const struct CMILMatrix *)v18,
            v14,
            &v17);
    v3 = v15;
    if ( v15 >= 0 )
    {
      if ( v17 )
        this[14] = v2;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x11Eu);
    }
  }
  return v3;
}
