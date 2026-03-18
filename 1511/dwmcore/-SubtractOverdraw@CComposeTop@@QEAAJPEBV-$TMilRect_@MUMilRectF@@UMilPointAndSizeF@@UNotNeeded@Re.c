/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ADF3C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x180130DF8 (-ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, const struct MilRectF *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  struct CShape *v6; // rdi
  bool v7; // al
  void (__fastcall ***v8)(_QWORD, __int64); // r14
  struct CShape *v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-40h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 152) )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)v11, 0.0, 0.0, 0.0, 0.0);
    CRectangleShape::Set((CRectangleShape *)v11, a2);
    v5 = CShape::Combine(*(_QWORD *)(a1 + 152), 0LL, (__int64)v11, a1 + 88, 2, &v10);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = v10;
      v7 = ShapeBoundsEmpty(v10);
      v8 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 152);
      if ( v7 )
      {
        if ( v8 )
          (**v8)(*(_QWORD *)(a1 + 152), 1LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      else
      {
        if ( v8 )
          (**v8)(*(_QWORD *)(a1 + 152), 1LL);
        *(_QWORD *)(a1 + 152) = v6;
        v6 = 0LL;
      }
      CRectangleShape::~CRectangleShape((CRectangleShape *)v11);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xEDu);
      CRectangleShape::~CRectangleShape((CRectangleShape *)v11);
      v6 = v10;
    }
    if ( v6 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v6)(v6, 1LL);
  }
  return v2;
}
