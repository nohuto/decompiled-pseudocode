/*
 * XREFs of ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x180170A4C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800A5C6C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x180154AB4 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 */

__int64 __fastcall CHitTestContext::BspHitTest(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct CPolygon *a3)
{
  struct D2D_POINT_2F v3; // rsi
  unsigned int v4; // ebx
  const enum MilBackfaceVisibility::Enum *TopByReference; // rax
  const struct CMILMatrix *v9; // r8
  int v10; // eax
  bool v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct D2D_POINT_2F)*((_QWORD *)a3 + 27);
  v4 = 0;
  if ( !*(_QWORD *)&this[14]
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v3 + 184LL))(*((_QWORD *)a3 + 27)) )
  {
    v12 = 0;
    TopByReference = (const enum MilBackfaceVisibility::Enum *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)&this[15]);
    v10 = CPolygon::HitTestWithTransformation(a3, this + 12, v9, a2, TopByReference, &v12);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x119u);
    }
    else if ( v12 )
    {
      this[14] = v3;
    }
  }
  return v4;
}
