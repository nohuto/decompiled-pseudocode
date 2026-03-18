/*
 * XREFs of ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800433A0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ABEA0 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangle(
        CDrawingContext *this,
        const __m128i *a2,
        struct CLegacyMilBrush *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __m128i v9; // xmm0
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rsi
  char v15; // al
  __m128i v16; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-48h] BYREF

  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v8, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, *(unsigned int *)(v8 + 5784));
  v9 = _mm_loadu_si128(a2);
  if ( a4 )
  {
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL);
    if ( v14 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType )
      v15 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType(a4, 49LL);
    else
      v15 = v14(a4, 49LL);
    if ( !v15 )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x381u);
      return v10;
    }
    v9 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  }
  v10 = 0;
  v16 = v9;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v16) )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)v17, 0.0, 0.0, 0.0, 0.0);
    CRectangleShape::Set((CRectangleShape *)v17, (const struct MilRectF *)&v16);
    v11 = CDrawingContext::DrawShape(this, (struct CShape *)v17, a3);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x38Eu);
      CRectangleShape::~CRectangleShape((CRectangleShape *)v17);
      return v10;
    }
    CRectangleShape::~CRectangleShape((CRectangleShape *)v17);
  }
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, *((unsigned int *)this + 1446));
  return v10;
}
