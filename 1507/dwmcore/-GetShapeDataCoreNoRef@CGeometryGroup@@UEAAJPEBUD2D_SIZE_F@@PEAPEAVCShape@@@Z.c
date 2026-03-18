/*
 * XREFs of ?GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18011FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCoreNoRef(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  unsigned int v3; // esi
  CRectangleShape *v4; // rdi
  unsigned int v7; // eax
  int v9; // eax
  CRectangleShape *v10; // rax
  int v11; // r9d
  int ShapeDataNoRef; // eax
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  void (__fastcall ***v16)(_QWORD, __int64); // r14
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct CShape *v19; // [rsp+70h] [rbp+8h] BYREF
  struct CShape *v20; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  *a3 = 0LL;
  v7 = *((_DWORD *)this + 8) & 0xFFFFFFFE;
  v19 = 0LL;
  v9 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ (v7 + 2)) & 6;
  *((_DWORD *)this + 8) = v9;
  if ( (v9 & 6) == 2 )
  {
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(**((CGeometry ***)this + 14), a2, &v20);
    v3 = ShapeDataNoRef;
    if ( ShapeDataNoRef >= 0 )
    {
      v13 = CShape::CopyShape(v20, 0LL, &v19);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x38u);
        v4 = v19;
        goto LABEL_20;
      }
      v14 = 1;
      v4 = v19;
      if ( *((_DWORD *)this + 26) <= 1u )
        goto LABEL_17;
      while ( 1 )
      {
        ShapeDataNoRef = CGeometry::GetShapeDataNoRef(*(CGeometry **)(*((_QWORD *)this + 14) + 8LL * v14), a2, &v19);
        v3 = ShapeDataNoRef;
        if ( ShapeDataNoRef < 0 )
          break;
        v15 = CShape::Combine((__int64)v4, 0LL, (__int64)v19, 0LL, 1, &v20);
        v3 = v15;
        if ( v15 < 0 )
        {
          v18 = 74;
          v11 = v15;
          goto LABEL_24;
        }
        if ( v4 )
          (**(void (__fastcall ***)(CRectangleShape *, __int64))v4)(v4, 1LL);
        v4 = v20;
        if ( ++v14 >= *((_DWORD *)this + 26) )
          goto LABEL_17;
      }
      v18 = 66;
    }
    else
    {
      v18 = 55;
    }
    v11 = ShapeDataNoRef;
    goto LABEL_24;
  }
  v10 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             32LL);
  if ( v10 )
    v4 = CRectangleShape::CRectangleShape(v10, 0.0, 0.0, 0.0, 0.0);
  else
    v4 = 0LL;
  if ( !v4 )
  {
    v3 = -2147024882;
    v18 = 43;
    v11 = -2147024882;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
    goto LABEL_20;
  }
LABEL_17:
  v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 15);
  if ( v16 )
    (**v16)(*((_QWORD *)this + 15), 1LL);
  *((_QWORD *)this + 15) = v4;
  *a3 = v4;
  v4 = 0LL;
LABEL_20:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v4 )
    (**(void (__fastcall ***)(CRectangleShape *, __int64))v4)(v4, 1LL);
  return v3;
}
