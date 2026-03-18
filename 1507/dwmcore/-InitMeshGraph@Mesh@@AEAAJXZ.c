/*
 * XREFs of ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180009D48
 * Callers:
 *     ?GetGeometryCount@Mesh@@QEAAJHHPEAH0@Z @ 0x180075D08 (-GetGeometryCount@Mesh@@QEAAJHHPEAH0@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z @ 0x180075EB4 (-GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1800FFFD4 (-RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z.c)
 */

__int64 __fastcall Mesh::InitMeshGraph(Mesh *this)
{
  unsigned int v2; // edi
  const struct Mesh::MeshGraph *v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int *v8; // rdx
  int v9; // eax

  if ( (*((_BYTE *)this + 104) & 2) != 0 )
  {
    v4 = (const struct Mesh::MeshGraph *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      v5 = Mesh::RestoreCachedGraph(this, v4);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x396u);
        return v2;
      }
    }
    else
    {
      v6 = Mesh::BuildGrid(this, 0, *((_DWORD *)this + 19), *((_DWORD *)this + 20));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x39Au);
        return v2;
      }
    }
    if ( (*((_BYTE *)this + 104) & 0x40) != 0 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
      if ( v7 )
      {
        v8 = (int *)((char *)this + 88);
        do
        {
          v9 = *v8++;
          *(_DWORD *)(v7 + 32) |= v9;
          v7 = *(_QWORD *)(v7 + 80);
        }
        while ( v7 != *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) && v7 );
      }
    }
    *((_DWORD *)this + 26) &= ~2u;
  }
  return 0;
}
