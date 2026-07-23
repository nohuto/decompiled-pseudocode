/*
 * XREFs of MiAllocateImportList @ 0x1404CD8D0
 * Callers:
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateImportList(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi

  *a2 = 0LL;
  v2 = 0;
  if ( !a1[3] )
    goto LABEL_10;
  do
  {
    if ( !*a1 )
      break;
    a1 += 5;
    ++v2;
  }
  while ( a1[3] );
  if ( !v2 )
  {
LABEL_10:
    v5 = 0LL;
    goto LABEL_8;
  }
  if ( v2 <= 0x1FFFFFFE )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v2 + 8, 0x54446D4Du);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v2 + 8);
      *v5 = v2;
LABEL_8:
      *a2 = v5;
      return 0LL;
    }
  }
  return 3221225626LL;
}
