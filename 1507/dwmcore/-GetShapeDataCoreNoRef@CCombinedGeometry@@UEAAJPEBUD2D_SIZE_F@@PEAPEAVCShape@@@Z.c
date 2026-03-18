/*
 * XREFs of ?GetShapeDataCoreNoRef@CCombinedGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18011FD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18001779C (-GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::GetShapeDataCoreNoRef(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  unsigned int v3; // edi
  unsigned int v7; // eax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  struct CGeometry *v9; // rdx
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
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 13);
    if ( v8 )
      (**v8)(*((_QWORD *)this + 13), 1LL);
    v9 = (struct CGeometry *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 13) = 0LL;
    GeometryCurrentValue = GetGeometryCurrentValue(a2, v9, &v18);
    v3 = GeometryCurrentValue;
    if ( GeometryCurrentValue >= 0 )
    {
      v11 = GetGeometryCurrentValue(a2, *((struct CGeometry **)this + 16), &v17);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v12 = CShape::Combine((__int64)v18, 0LL, (__int64)v17, 0LL, *((_DWORD *)this + 28), &v16);
        v3 = v12;
        if ( v12 >= 0 )
        {
          v14 = v16;
          v13 = 0LL;
          *((_QWORD *)this + 13) = v16;
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
