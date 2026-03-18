/*
 * XREFs of ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801433C8
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800062E4 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18013234C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 */

__int64 __fastcall CHitTestContext::BspHitTest(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct CPolygon *a3)
{
  struct D2D_POINT_2F v3; // r14
  unsigned int v4; // edi
  const enum MilBackfaceVisibility::Enum *TopByReference; // rax
  const struct CMILMatrix *v9; // r8
  int v10; // eax
  bool v12; // [rsp+30h] [rbp-38h] BYREF

  v3 = (struct D2D_POINT_2F)*((_QWORD *)a3 + 26);
  v4 = 0;
  if ( !*(_QWORD *)&this[14]
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v3 + 176LL))(*((_QWORD *)a3 + 26)) )
  {
    v12 = 0;
    TopByReference = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[15]);
    v10 = CPolygon::HitTestWithTransformation(a3, this + 12, v9, a2, TopByReference, &v12);
    v4 = v10;
    if ( v10 >= 0 )
    {
      if ( v12 )
        this[14] = v3;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x118u);
    }
  }
  return v4;
}
