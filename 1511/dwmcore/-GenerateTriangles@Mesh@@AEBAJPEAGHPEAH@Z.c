/*
 * XREFs of ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18001EC64
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x18001EE6C (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z @ 0x1800201F4 (-GenerateGeometry@Mesh@@QEAAJHHPEAVCVertexXYAAColorDUV2@@PEAHGPEAG1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800AD768 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 *     ?IsCycle@PolygonPathIterator@Mesh@@CAHPEBUMeshEdge@2@0@Z @ 0x1800AD8D0 (-IsCycle@PolygonPathIterator@Mesh@@CAHPEBUMeshEdge@2@0@Z.c)
 */

__int64 __fastcall Mesh::GenerateTriangles(Mesh *this, unsigned __int16 *a2, int a3, int *a4)
{
  unsigned int v4; // ebx
  Mesh *v5; // r11
  int v6; // r12d
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  bool v15; // zf
  struct Mesh::MeshVertex *Next; // r13
  float v17; // xmm0_4
  int v18; // r15d
  __int64 v19; // rdi
  __int64 *v20; // r14
  struct Mesh::MeshVertex *i; // r12
  unsigned __int16 v22; // ax
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rcx
  int v25; // r14d
  __int64 *v26; // rdi
  __int64 v27; // rcx
  float v28; // xmm1_4
  struct Mesh::MeshVertex *v29; // rax
  int v30; // [rsp+38h] [rbp-49h]
  int v31; // [rsp+3Ch] [rbp-45h]
  Mesh::PolygonPathIterator *v32; // [rsp+40h] [rbp-41h]
  __int64 v33; // [rsp+48h] [rbp-39h]
  _DWORD v34[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v35; // [rsp+60h] [rbp-21h]
  __int64 v36; // [rsp+68h] [rbp-19h]
  __int64 v37; // [rsp+70h] [rbp-11h] BYREF
  int v38; // [rsp+78h] [rbp-9h]
  __int64 v39; // [rsp+80h] [rbp-1h]
  __int64 v40; // [rsp+88h] [rbp+7h]
  __int64 v41; // [rsp+90h] [rbp+Fh]

  v4 = 0;
  v5 = this;
  v6 = 0;
  v30 = 0;
  v7 = 0;
  v31 = 0;
  v8 = *((_QWORD *)v5 + 2);
  if ( *(int *)(v8 + 56) > 0 )
  {
    v9 = 0LL;
    v33 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + v9 + 48);
      if ( v10 )
      {
        do
        {
          if ( (*(_DWORD *)(v10 + 16) & 0x100) != 0 )
          {
            v12 = *(_QWORD *)(v10 + 64);
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(*(_QWORD *)v12 + 40LL);
            if ( (!*(_QWORD *)(v14 + 64)
               || !(unsigned int)Mesh::PolygonPathIterator::IsCycle(
                                   (const struct Mesh::MeshEdge *)v10,
                                   (const struct Mesh::MeshEdge *)v14))
              && *(_QWORD *)v12 != **(_QWORD **)(v13 + 64) )
            {
              v15 = (*((_BYTE *)v5 + 104) & 8) == 0;
              Next = 0LL;
              v34[0] = 0;
              v17 = 0.0;
              v35 = v10;
              v36 = 0LL;
              v37 = v10;
              v38 = 1;
              v39 = v13;
              v40 = 0LL;
              v41 = v13;
              if ( v15 )
              {
                v37 = v10;
                Next = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)v34);
                v17 = *(float *)(*((_QWORD *)Next + 1) + 44LL);
              }
              else
              {
                v25 = 0;
                v26 = &v37;
                do
                {
                  *v26 = *(v26 - 2);
                  if ( v25 == 1 )
                    *(v26 - 1) = v36;
                  while ( 1 )
                  {
                    v29 = Mesh::PolygonPathIterator::GetNext((Mesh::PolygonPathIterator *)&v34[8 * v25]);
                    if ( !v29 )
                      break;
                    v27 = *((_QWORD *)v29 + 1);
                    v28 = *(float *)(v27 + 44);
                    if ( !Next || v28 > v17 )
                    {
                      Next = v29;
                      v17 = *(float *)(v27 + 44);
                      if ( v28 == 1.0 )
                        goto LABEL_15;
                    }
                  }
                  if ( v17 == 1.0 )
                    break;
                  ++v25;
                  v26 += 4;
                }
                while ( v25 < 2 );
              }
LABEL_15:
              if ( v17 != 0.0 )
              {
                v18 = 0;
                v19 = v6;
                v20 = &v37;
                while ( 2 )
                {
                  *v20 = *(v20 - 2);
                  if ( v18 == 1 )
                    *(v20 - 1) = v36;
                  v32 = (Mesh::PolygonPathIterator *)&v34[8 * v18];
                  for ( i = Mesh::PolygonPathIterator::GetNext(v32); ; i = (struct Mesh::MeshVertex *)v24 )
                  {
                    v23 = (unsigned __int16 *)Mesh::PolygonPathIterator::GetNext(v32);
                    v24 = v23;
                    if ( !v23 )
                      break;
                    if ( i != Next && v23 != (unsigned __int16 *)Next )
                    {
                      if ( v19 >= a3 )
                      {
                        v4 = -2147024882;
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1029u);
                        return v4;
                      }
                      v30 += 3;
                      a2[v19] = *(_WORD *)Next;
                      if ( *((_DWORD *)v20 - 6) )
                      {
                        a2[v19 + 1] = *v23;
                        v22 = *(_WORD *)i;
                      }
                      else
                      {
                        a2[v19 + 1] = *(_WORD *)i;
                        v22 = *v23;
                      }
                      a2[v19 + 2] = v22;
                      v19 += 3LL;
                    }
                  }
                  ++v18;
                  v20 += 4;
                  if ( v18 < 2 )
                    continue;
                  break;
                }
                v6 = v30;
              }
              v5 = this;
            }
          }
          v10 = *(_QWORD *)(v10 + 64);
        }
        while ( v10 );
        v7 = v31;
        v9 = v33;
      }
      v8 = *((_QWORD *)v5 + 2);
      ++v7;
      v9 += 88LL;
      v31 = v7;
      v33 = v9;
    }
    while ( v7 < *(_DWORD *)(v8 + 56) );
  }
  *a4 = v6;
  return v4;
}
