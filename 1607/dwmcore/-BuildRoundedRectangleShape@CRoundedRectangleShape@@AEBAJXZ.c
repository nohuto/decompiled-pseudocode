/*
 * XREFs of ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJXZ @ 0x18018A548
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18018AB50 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z @ 0x18018A62C (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEA_NPEAH@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18018A908 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathGeometry@@@Z @ 0x18018AAA8 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEB_NHPEAPEAUID2D1PathG.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildRoundedRectangleShape(CRoundedRectangleShape *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-69h] BYREF
  bool v8[4]; // [rsp+34h] [rbp-65h] BYREF
  struct ID2D1PathGeometry *v9; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v10[160]; // [rsp+40h] [rbp-59h] BYREF

  v9 = 0LL;
  v7 = 0;
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct MilPoint2F *)v10, v8, &v7);
  if ( v7 )
  {
    v4 = CRoundedRectangleShape::CreateIntersectedD2DGeometry((const struct MilPoint2F *)v10, v8, v7, &v9);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x75u);
      return v3;
    }
  }
  else
  {
    v2 = CRoundedRectangleShape::CreateFullRectD2DGeometry((const struct MilPoint2F *)v10, &v9);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Eu);
      return v3;
    }
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 7) = v9;
  return v3;
}
