/*
 * XREFs of ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18006BA60
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D960 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800980B4 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangle(
        CDrawingContext *this,
        const __m128i *a2,
        struct CLegacyMilBrush *a3,
        const __m128i *a4)
{
  __int64 v8; // rcx
  __m128i v9; // xmm0
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  bool (__fastcall *v14)(__int64, int); // rax
  bool v15; // al
  __m128i v16; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[64]; // [rsp+40h] [rbp-78h] BYREF

  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v8, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, *(unsigned int *)(v8 + 6480));
  v9 = _mm_loadu_si128(a2);
  if ( a4 )
  {
    v14 = *(bool (__fastcall **)(__int64, int))(a4->m128i_i64[0] + 48);
    if ( v14 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType )
      v15 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType((__int64)a4, 50);
    else
      v15 = v14((__int64)a4, 50);
    if ( !v15 )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x392u);
      return v10;
    }
    v9 = _mm_loadu_si128(a4 + 7);
  }
  v10 = 0;
  v16 = v9;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v16) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v17, (const struct MilRectF *)&v16);
    v11 = CDrawingContext::DrawShape(this, (struct CShape *)v17, a3);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x39Eu);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
      return v10;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
  }
  if ( !CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, *((unsigned int *)this + 1620));
  return v10;
}
