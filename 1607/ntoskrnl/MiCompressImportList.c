/*
 * XREFs of MiCompressImportList @ 0x1404CDDAC
 * Callers:
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiCompressImportList(unsigned __int64 *P)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // r8

  v2 = 0LL;
  v3 = *P;
  v4 = 0LL;
  v5 = 0;
  if ( !v3 )
    goto LABEL_18;
  v6 = 0LL;
  do
  {
    v7 = P[v6 + 1];
    if ( v7 )
    {
      v2 = v7 | 1;
      v4 = (unsigned int)(v4 + 1);
    }
    v6 = ++v5;
  }
  while ( v5 < v3 );
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      v8 = (unsigned int)v4;
      if ( (unsigned int)v4 == v3 )
        return P;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v4 + 8, 0x54446D4Du);
      v2 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return P;
      v11 = 0LL;
      *PoolWithTag = v8;
      v12 = 0;
      if ( *P )
      {
        v13 = 0LL;
        do
        {
          v14 = P[v13 + 1];
          if ( v14 )
          {
            *(_QWORD *)(v2 + 8 * v11 + 8) = v14;
            v11 = (unsigned int)(v11 + 1);
          }
          v13 = ++v12;
        }
        while ( v12 < *P );
      }
    }
  }
  else
  {
LABEL_18:
    v2 = -2LL;
  }
  ExFreePoolWithTag(P, 0);
  return (unsigned __int64 *)v2;
}
