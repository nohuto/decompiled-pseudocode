/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18013A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x180139304 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // r15d
  CShape *v5; // rdi
  float width; // xmm0_4
  int v11; // eax
  struct CShape *v12; // rsi
  float x; // xmm1_4
  float y; // xmm2_4
  __int64 v15; // rdx
  int v16; // eax
  CShape *v18; // [rsp+30h] [rbp-59h] BYREF
  struct CShape *v19; // [rsp+38h] [rbp-51h] BYREF
  float v20; // [rsp+40h] [rbp-49h]
  float v21; // [rsp+44h] [rbp-45h]
  _QWORD v22[3]; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+68h] [rbp-21h]
  int v24; // [rsp+6Ch] [rbp-1Dh]
  int v25; // [rsp+70h] [rbp-19h]
  struct D2D_RECT_F v26; // [rsp+78h] [rbp-11h] BYREF
  __int64 v27; // [rsp+88h] [rbp-1h]

  v4 = 0;
  *a4 = 0;
  v19 = 0LL;
  v5 = 0LL;
  width = a2->width;
  v18 = 0LL;
  if ( width > 0.0
    && a2->height > 0.0
    && (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    v11 = CSurfaceBrush::ComputeLayout(this, a2, 0LL, (struct CSurfaceBrush::LayoutData *)v22, &v19);
    v12 = v19;
    if ( v11 >= 0 && Contains(&v26, a3) )
    {
      if ( !v12 )
      {
        *a4 = 1;
        return v4;
      }
      x = a3->x;
      y = a3->y;
      v25 = 0;
      v27 = 0LL;
      v22[0] = &CRectanglesShape::`vftable';
      v19 = (struct CShape *)__PAIR64__(LODWORD(y), LODWORD(x));
      v22[1] = &v26;
      v22[2] = &v26;
      v20 = x + 0.00000011920929;
      v23 = 1;
      v21 = y + 0.00000011920929;
      v24 = 1;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)v22, (const struct MilRectF *)&v19);
      v16 = CShape::Combine((__int64)v12, v15, (__int64)v22, 0LL, 1, &v18);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x156u);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v22);
        v5 = v18;
      }
      else
      {
        v5 = v18;
        if ( !(unsigned __int8)CShape::IsEmpty(v18) )
          *a4 = 1;
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v22);
      }
    }
    if ( v12 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v12)(v12, 1LL);
    if ( v5 )
      (**(void (__fastcall ***)(CShape *, __int64))v5)(v5, 1LL);
  }
  return v4;
}
