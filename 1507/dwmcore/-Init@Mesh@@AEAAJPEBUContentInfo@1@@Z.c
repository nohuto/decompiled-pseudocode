/*
 * XREFs of ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800094C4
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180009D74 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18007416C (-Clear@Mesh@@AEAAXXZ.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800759D8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::Init(Mesh *this, const struct Mesh::ContentInfo *a2)
{
  unsigned int v3; // edi
  int v5; // eax

  if ( (*((_BYTE *)this + 104) & 4) != 0 )
  {
    v5 = Mesh::GrowPreallocatedGraphObjects(this);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x35u);
      return v3;
    }
    *((_DWORD *)this + 26) &= ~4u;
  }
  Mesh::Clear(this);
  return 0;
}
