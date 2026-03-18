/*
 * XREFs of ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x1800917B8
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800915B0 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800918E0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800A2A24 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800B3D04 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 */

__int64 __fastcall Mesh::LookupCachedGridGraph(Mesh *this, struct Mesh::MeshGraph **a2)
{
  struct Mesh::MeshGraph *v4; // rbx
  struct Mesh::MeshGraph **v5; // r14
  int v6; // edi
  int v8; // eax
  int *v9; // rcx
  int v10; // eax
  int v11; // eax
  int Triangles; // eax
  __int64 v13; // rax

  v4 = 0LL;
  if ( *(_QWORD *)((char *)this + 164) == 0x200000002LL )
  {
    v5 = (struct Mesh::MeshGraph **)((char *)this + 32);
    if ( this != (Mesh *)-32LL )
    {
      v4 = *v5;
      if ( !*v5 || !*((_DWORD *)v4 + 32) )
      {
        v8 = Mesh::BuildGrid(this, (int)a2, 2, 2);
        v6 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x562u);
          goto LABEL_6;
        }
        if ( !v4 )
        {
          v9 = (int *)*((_QWORD *)this + 2);
          v10 = Mesh::MeshGraph::Create(v9[8], v9[14], v9[22], 3 * (v9[25] + 2 * (v9[23] - v9[26])), v5);
          v6 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x56Bu);
            goto LABEL_6;
          }
          v4 = *v5;
        }
        v11 = Mesh::CopyGraph(*((const struct Mesh::MeshGraph **)this + 2), v4);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x570u);
          goto LABEL_6;
        }
        Triangles = Mesh::GenerateTriangles(this, *((unsigned __int16 **)v4 + 14), *((_DWORD *)v4 + 30), (int *)v4 + 32);
        v6 = Triangles;
        if ( Triangles < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Triangles, 0x573u);
          goto LABEL_6;
        }
        v13 = *((_QWORD *)this + 2);
        *(_QWORD *)(v13 + 64) = 0LL;
        *(_DWORD *)(v13 + 32) = 0;
        *(_DWORD *)(v13 + 56) = 0;
        *(_QWORD *)(v13 + 88) = 0LL;
        *(_QWORD *)(v13 + 96) = 0LL;
        *(_DWORD *)(v13 + 104) = 0;
        *(_DWORD *)(v13 + 128) = 0;
      }
    }
  }
  *a2 = v4;
  v6 = 0;
LABEL_6:
  if ( v6 < 0 && v4 )
  {
    *((_QWORD *)v4 + 8) = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    *((_DWORD *)v4 + 14) = 0;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_DWORD *)v4 + 26) = 0;
    *((_DWORD *)v4 + 32) = 0;
  }
  return (unsigned int)v6;
}
