/*
 * XREFs of ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x18002DEE0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076CCC (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangle(
        CDrawingContext *this,
        const __m128i *a2,
        struct CBrush *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __m128i v9; // xmm0
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __m128i v14; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-48h] BYREF

  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v8, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2LL, *(unsigned int *)(v8 + 5752));
  v9 = _mm_loadu_si128(a2);
  if ( a4 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL))(a4, 45LL) )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x37Au);
      return v10;
    }
    v9 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  }
  v10 = 0;
  v14 = v9;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v14) )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)v15, 0.0, 0.0, 0.0, 0.0);
    CRectangleShape::Set((CRectangleShape *)v15, (const struct MilRectF *)&v14);
    v11 = CDrawingContext::DrawShape(this, (struct CShape *)v15, a3);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x387u);
      CRectangleShape::~CRectangleShape((CRectangleShape *)v15);
      return v10;
    }
    CRectangleShape::~CRectangleShape((CRectangleShape *)v15);
  }
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2LL, *((unsigned int *)this + 1438));
  return v10;
}
