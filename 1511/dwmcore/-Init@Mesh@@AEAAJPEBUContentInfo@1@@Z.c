/*
 * XREFs of ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800179FC
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180018310 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18001E020 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x18001FB98 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
