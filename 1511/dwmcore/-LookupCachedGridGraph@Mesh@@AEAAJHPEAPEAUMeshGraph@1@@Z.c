/*
 * XREFs of ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x18001EE6C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18001FD70 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18001EC64 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18001EF94 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180068ADC (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800B1A38 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 */

__int64 __fastcall Mesh::LookupCachedGridGraph(Mesh *this, int a2, struct Mesh::MeshGraph **a3)
{
  int v4; // r8d
  struct Mesh::MeshGraph *v6; // rbx
  int v7; // r9d
  struct Mesh::MeshGraph **v8; // r14
  int v9; // edi
  int v11; // eax
  int *v12; // rcx
  int v13; // eax
  int v14; // eax
  int Triangles; // eax
  __int64 v16; // rax

  v4 = *((_DWORD *)this + 19);
  v6 = 0LL;
  if ( v4 == 2 && (v7 = *((_DWORD *)this + 20), v7 == 2) )
  {
    v8 = (struct Mesh::MeshGraph **)((char *)this + 32);
  }
  else
  {
    if ( v4 != 4 )
      goto LABEL_7;
    v7 = *((_DWORD *)this + 20);
    if ( v7 != 4 )
      goto LABEL_7;
    v8 = (struct Mesh::MeshGraph **)((char *)this + 40);
  }
  if ( v8 )
  {
    v6 = *v8;
    if ( !*v8 || !*((_DWORD *)v6 + 32) )
    {
      v11 = Mesh::BuildGrid(this, a2, v4, v7);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8B0u);
        goto LABEL_8;
      }
      if ( !v6 )
      {
        v12 = (int *)*((_QWORD *)this + 2);
        v13 = Mesh::MeshGraph::Create(v12[8], v12[14], v12[22], 3 * (v12[25] + 2 * (v12[23] - v12[26])), v8);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8B9u);
          goto LABEL_8;
        }
        v6 = *v8;
      }
      v14 = Mesh::CopyGraph(*((const struct Mesh::MeshGraph **)this + 2), v6);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x8BEu);
        goto LABEL_8;
      }
      Triangles = Mesh::GenerateTriangles(this, *((unsigned __int16 **)v6 + 14), *((_DWORD *)v6 + 30), (int *)v6 + 32);
      v9 = Triangles;
      if ( Triangles < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Triangles, 0x8C1u);
        goto LABEL_8;
      }
      v16 = *((_QWORD *)this + 2);
      *(_QWORD *)(v16 + 64) = 0LL;
      *(_DWORD *)(v16 + 32) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      *(_QWORD *)(v16 + 88) = 0LL;
      *(_QWORD *)(v16 + 96) = 0LL;
      *(_DWORD *)(v16 + 104) = 0;
      *(_DWORD *)(v16 + 128) = 0;
    }
  }
LABEL_7:
  *a3 = v6;
  v9 = 0;
LABEL_8:
  if ( v9 < 0 && v6 )
  {
    *((_QWORD *)v6 + 8) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 14) = 0;
    *((_QWORD *)v6 + 11) = 0LL;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_DWORD *)v6 + 26) = 0;
    *((_DWORD *)v6 + 32) = 0;
  }
  return (unsigned int)v9;
}
