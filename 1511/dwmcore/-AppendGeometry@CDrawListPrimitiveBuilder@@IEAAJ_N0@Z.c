/*
 * XREFs of ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18003431C
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180017490 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 * Callees:
 *     ?GetGeometryCount@Mesh@@QEAAJHHPEAH0@Z @ 0x180020048 (-GetGeometryCount@Mesh@@QEAAJHHPEAH0@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z @ 0x1800201F4 (-GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendGeometry(
        CDrawListPrimitiveBuilder *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  int v5; // r12d
  int GeometryCount; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = 0;
  v12 = 0;
  v3 = a3;
  v5 = a2;
  GeometryCount = Mesh::GetGeometryCount(this, a2, a3, &v13, &v12);
  v7 = GeometryCount;
  if ( GeometryCount < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GeometryCount, 0x283u);
  }
  else
  {
    if ( v12 > 0 )
    {
      v8 = DynArrayImpl<0>::Grow((int)this + 112, 64, v13, 0, 0LL);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x287u);
        return v7;
      }
      v9 = DynArrayImpl<0>::Grow((int)this + 2064, 2, v12, 0, 0LL);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x288u);
        return v7;
      }
      v10 = Mesh::GenerateGeometry(
              this,
              v5,
              v3,
              (struct CVertexXYAAColorDUV2 *)(*((_QWORD *)this + 14)
                                            + ((unsigned __int64)*((unsigned int *)this + 34) << 6)),
              &v13,
              *((_DWORD *)this + 34),
              (unsigned __int16 *)(*((_QWORD *)this + 258) + 2LL * *((unsigned int *)this + 522)),
              &v12);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x297u);
        return v7;
      }
      *((_DWORD *)this + 34) += v13;
      *((_DWORD *)this + 522) += v12;
    }
    return 0;
  }
  return v7;
}
