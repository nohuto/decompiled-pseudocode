/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180157CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        CRegionShape **a3)
{
  unsigned int v3; // edi
  struct CShape *v4; // rbx
  unsigned int v5; // eax
  int v7; // eax
  __int64 v10; // rax
  int ShapeDataNoRef; // eax
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CShape *v17; // [rsp+60h] [rbp+8h] BYREF
  CShape *v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0LL;
  v5 = (*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2;
  v17 = 0LL;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ v5) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) != 2 )
  {
    v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    v4 = (struct CShape *)v10;
    if ( v10 )
    {
      *(_QWORD *)v10 = &CRectanglesShape::`vftable';
      *(_DWORD *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 8) = v10 + 40;
      *(_QWORD *)(v10 + 16) = v10 + 40;
      *(_DWORD *)(v10 + 24) = 1;
      *(_DWORD *)(v10 + 28) = 1;
      *(_QWORD *)(v10 + 56) = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  ShapeDataNoRef = CGeometry::GetShapeDataNoRef(**((CGeometry ***)this + 26), a2, &v18);
  v3 = ShapeDataNoRef;
  if ( ShapeDataNoRef < 0 )
  {
    v16 = 51;
  }
  else
  {
    v12 = CShape::CopyShape((struct ID2D1RegionGeometry **)v18, 0LL, &v17);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x34u);
      v4 = v17;
      goto LABEL_21;
    }
    v13 = 1;
    v4 = v17;
    if ( *((_DWORD *)this + 50) <= 1u )
    {
LABEL_15:
      CShapePtr::Release(a3);
      *a3 = v4;
      v4 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_21;
    }
    while ( 1 )
    {
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(*(CGeometry **)(*((_QWORD *)this + 26) + 8LL * v13), a2, &v17);
      v3 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
        break;
      ShapeDataNoRef = CShape::Combine((__int64)v4, v14, (__int64)v17, 0LL, 1, &v18);
      v3 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        v16 = 70;
        goto LABEL_20;
      }
      if ( v4 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v4)(v4, 1LL);
      v4 = v18;
      if ( ++v13 >= *((_DWORD *)this + 50) )
        goto LABEL_15;
    }
    v16 = 62;
  }
LABEL_20:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, v16);
LABEL_21:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v4 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v4)(v4, 1LL);
  return v3;
}
