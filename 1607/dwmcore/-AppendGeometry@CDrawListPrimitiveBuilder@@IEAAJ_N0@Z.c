/*
 * XREFs of ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18009644C
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180002A00 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800927D8 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0PEAVCVertexXYAAColorDUV2@@PEAHGPEAG2@Z @ 0x1800929B0 (-GenerateGeometry@Mesh@@QEAAJ_N0PEAVCVertexXYAAColorDUV2@@PEAHGPEAG2@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendGeometry(CDrawListPrimitiveBuilder *this, char a2, char a3)
{
  Mesh *v3; // r13
  int GeometryCount; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0;
  v3 = (CDrawListPrimitiveBuilder *)((char *)this + 152);
  v13 = 0;
  GeometryCount = Mesh::GetGeometryCount((CDrawListPrimitiveBuilder *)((char *)this + 152), a2, a3, &v14, &v13);
  v8 = GeometryCount;
  if ( GeometryCount < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GeometryCount, 0x486u);
    return v8;
  }
  if ( v13 > 0 )
  {
    v9 = DynArrayImpl<0>::Grow((int)this + 360, 64, v14, 0, 0LL);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x48Au);
      return v8;
    }
    v10 = DynArrayImpl<0>::Grow((int)this + 2312, 2, v13, 0, 0LL);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x48Bu);
      return v8;
    }
    v11 = Mesh::GenerateGeometry(
            v3,
            a2,
            a3,
            (struct CVertexXYAAColorDUV2 *)(*((_QWORD *)this + 45)
                                          + ((unsigned __int64)*((unsigned int *)this + 96) << 6)),
            &v14,
            *((_DWORD *)this + 96),
            (unsigned __int16 *)(*((_QWORD *)this + 289) + 2LL * *((unsigned int *)this + 584)),
            &v13);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x49Au);
      return v8;
    }
    *((_DWORD *)this + 96) += v14;
    *((_DWORD *)this + 584) += v13;
  }
  return 0;
}
