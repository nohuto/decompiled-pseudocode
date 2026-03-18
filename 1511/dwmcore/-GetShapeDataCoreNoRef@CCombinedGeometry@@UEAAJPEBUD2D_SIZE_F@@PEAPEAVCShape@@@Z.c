/*
 * XREFs of ?GetShapeDataCoreNoRef@CCombinedGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800B3120
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x180064A74 (-GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCombinedGeometry::GetShapeDataCoreNoRef(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  unsigned int v3; // edi
  unsigned int v7; // eax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  const struct D2DMatrix **v9; // rdx
  int GeometryCurrentValue; // eax
  int v11; // eax
  int v12; // eax
  struct CShape *v13; // r14
  struct CShape *v14; // rax
  struct CShape *v16; // [rsp+60h] [rbp+8h] BYREF
  struct CShape *v17; // [rsp+70h] [rbp+18h] BYREF
  struct CShape *v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  *a3 = 0LL;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 15);
    if ( v8 )
      (**v8)(*((_QWORD *)this + 15), 1LL);
    v9 = (const struct D2DMatrix **)*((_QWORD *)this + 17);
    *((_QWORD *)this + 15) = 0LL;
    GeometryCurrentValue = GetGeometryCurrentValue(a2, v9, &v18);
    v3 = GeometryCurrentValue;
    if ( GeometryCurrentValue >= 0 )
    {
      v11 = GetGeometryCurrentValue(a2, *((const struct D2DMatrix ***)this + 18), &v17);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v12 = CShape::Combine((__int64)v18, 0LL, (__int64)v17, 0LL, *((_DWORD *)this + 32), &v16);
        v3 = v12;
        if ( v12 >= 0 )
        {
          v14 = v16;
          v13 = 0LL;
          *((_QWORD *)this + 15) = v16;
          *a3 = v14;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5Au);
          v13 = v16;
        }
        if ( v13 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v13)(v13, 1LL);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, GeometryCurrentValue, 0x49u);
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v3;
}
