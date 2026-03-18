/*
 * XREFs of ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x1801591E8
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180159840 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z @ 0x1801592D8 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x1801595B4 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x1801597A0 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildRoundedRectangleShape(CRoundedRectangleShape *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // r14
  int v7; // [rsp+30h] [rbp-79h] BYREF
  bool v8[4]; // [rsp+34h] [rbp-75h] BYREF
  struct ID2D1PathGeometry *v9; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v10[160]; // [rsp+40h] [rbp-69h] BYREF

  v9 = 0LL;
  v7 = 0;
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct MilPoint2F *)v10, v8, &v7);
  if ( v7 )
  {
    v4 = CRoundedRectangleShape::CreateIntersectedD2DGeometry((const struct MilPoint2F *)v10, v8, v7, &v9);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x6Du);
      return v3;
    }
  }
  else
  {
    v2 = CRoundedRectangleShape::CreateFullRectD2DGeometry((const struct MilPoint2F *)v10, &v9);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x66u);
      return v3;
    }
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 7) = v9;
  return v3;
}
