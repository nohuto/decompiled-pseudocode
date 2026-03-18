/*
 * XREFs of ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800AF098
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800915B0 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 * Callees:
 *     ?IsCycle@PolygonPathIterator@Mesh@@CAHPEBUMeshEdge@2@0@Z @ 0x1800AF200 (-IsCycle@PolygonPathIterator@Mesh@@CAHPEBUMeshEdge@2@0@Z.c)
 */

struct Mesh::MeshVertex *__fastcall Mesh::PolygonPathIterator::GetNext(Mesh::PolygonPathIterator *this)
{
  __int64 v1; // r10
  __int64 v2; // rdi
  Mesh::PolygonPathIterator *v3; // r11
  __int64 v4; // r8
  const struct Mesh::MeshEdge *k; // r9
  __int64 v6; // r9
  __int64 j; // rdx
  __int64 v8; // rax
  _QWORD *v10; // rax
  __int64 i; // rdx
  _QWORD *v12; // rax

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  v3 = this;
  if ( v1 )
  {
    if ( *(_QWORD *)v1 == *((_QWORD *)this + 2) )
    {
      if ( *(_DWORD *)this )
        v2 = *(_QWORD *)(v1 + 24);
      else
        v2 = *(_QWORD *)(v1 + 40);
    }
    else if ( *(_DWORD *)this )
    {
      v2 = *(_QWORD *)(v1 + 32);
    }
    else
    {
      v2 = *(_QWORD *)(v1 + 48);
    }
    v4 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)v1 != v4 )
    {
      if ( *(_QWORD *)(v1 + 64) )
      {
        k = *(const struct Mesh::MeshEdge **)(v1 + 64);
        if ( !v4 || *(_QWORD *)k == v4 )
        {
          v6 = *((_QWORD *)this + 3);
          if ( *(_DWORD *)this )
          {
            for ( i = *(_QWORD *)(v1 + 80); i; i = *(_QWORD *)(i + 80) )
            {
              v12 = *(_QWORD **)(i + 64);
              if ( !v12 || **(_QWORD **)(v1 + 64) != *v12 )
                break;
              v6 = i;
            }
          }
          else
          {
            for ( j = *(_QWORD *)(v1 + 72); j; j = *(_QWORD *)(j + 72) )
            {
              v10 = *(_QWORD **)(j + 64);
              if ( !v10 || **(_QWORD **)(v1 + 64) != *v10 )
                break;
              v6 = j;
            }
          }
          k = *(const struct Mesh::MeshEdge **)(v6 + 64);
        }
        v8 = *(_QWORD *)k;
        if ( *(_QWORD *)k == v4 )
          goto LABEL_19;
        if ( *(_DWORD *)this )
        {
          if ( v4 || !*((_QWORD *)k + 10) )
          {
            for ( k = *(const struct Mesh::MeshEdge **)(v8 + 24);
                  k != *(const struct Mesh::MeshEdge **)(v1 + 64)
               && (unsigned int)Mesh::PolygonPathIterator::IsCycle(k, (const struct Mesh::MeshEdge *)v1);
                  k = (const struct Mesh::MeshEdge *)*((_QWORD *)k + 10) )
            {
              ;
            }
            goto LABEL_19;
          }
        }
        else if ( v4 || !*((_QWORD *)k + 9) )
        {
          for ( k = *(const struct Mesh::MeshEdge **)(v8 + 32);
                k != *(const struct Mesh::MeshEdge **)(v1 + 64)
             && (unsigned int)Mesh::PolygonPathIterator::IsCycle((const struct Mesh::MeshEdge *)v1, k);
                k = (const struct Mesh::MeshEdge *)*((_QWORD *)k + 9) )
          {
            ;
          }
          goto LABEL_19;
        }
        *((_QWORD *)this + 2) = v8;
LABEL_19:
        *((_QWORD *)v3 + 3) = k;
        return (struct Mesh::MeshVertex *)v2;
      }
      *((_QWORD *)this + 2) = *(_QWORD *)v1;
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  return (struct Mesh::MeshVertex *)v2;
}
