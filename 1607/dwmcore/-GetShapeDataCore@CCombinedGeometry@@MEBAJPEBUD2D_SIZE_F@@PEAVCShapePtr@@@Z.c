/*
 * XREFs of ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180020280
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18000DB24 (-GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCombinedGeometry::GetShapeDataCore(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  int v7; // eax
  CGeometry *v10; // rcx
  int ShapeData; // eax
  CGeometry *v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+48h] [rbp-8h]
  void (__fastcall ***v20)(_QWORD, __int64); // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v18 = 0LL;
  v16 = 0LL;
  v5 = *((_DWORD *)this + 8) ^ ((v3 & 0xFFFFFFFE) + 2);
  v20 = 0LL;
  v7 = *((_DWORD *)this + 8) ^ v5 & 6;
  *((_DWORD *)this + 8) = v7;
  v19 = 0;
  v17 = 0;
  if ( (v7 & 6) != 2 )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = 0LL;
    goto LABEL_8;
  }
  v10 = (CGeometry *)*((_QWORD *)this + 26);
  if ( v10 )
  {
    ShapeData = CGeometry::GetShapeData(v10, a2, (struct CShapePtr *)&v18);
    v4 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0x41u);
      goto LABEL_9;
    }
  }
  v12 = (CGeometry *)*((_QWORD *)this + 27);
  if ( v12 )
  {
    v13 = CGeometry::GetShapeData(v12, a2, (struct CShapePtr *)&v16);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x46u);
      goto LABEL_9;
    }
  }
  v14 = CShape::Combine(v18, (__int64)a2, v16, 0LL, *((_DWORD *)this + 50), &v20);
  v4 = v14;
  if ( v14 >= 0 )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v20;
LABEL_8:
    *((_BYTE *)a3 + 8) = 1;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x52u);
  if ( v20 )
    (**v20)(v20, 1LL);
LABEL_9:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  CShapePtr::Release((CShapePtr *)&v16);
  CShapePtr::Release((CShapePtr *)&v18);
  return v4;
}
