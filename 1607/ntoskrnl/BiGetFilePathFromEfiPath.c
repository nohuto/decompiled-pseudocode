/*
 * XREFs of BiGetFilePathFromEfiPath @ 0x1406D5168
 * Callers:
 *     BiCreateMergedBootEntry @ 0x1406D45D0 (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetFilePathFromEfiPath(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  int v7; // esi
  _BYTE *i; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v12; // rbp
  _WORD *v13; // r14
  _BYTE *j; // rdi
  size_t v15; // rbx

  v5 = a1;
  if ( (*(_BYTE *)a1 & 0x7F) == 0x7F )
    return 3221225530LL;
  v7 = 0;
  for ( i = (_BYTE *)(*(unsigned __int8 *)(a1 + 2) | (unsigned __int64)(*(unsigned __int8 *)(a1 + 3) << 8));
        ;
        a1 = (unsigned __int8)i[2] | (unsigned __int64)((unsigned __int8)i[3] << 8) )
  {
    i += a1;
    if ( (*i & 0x7F) == 0x7F )
      break;
    if ( *i == 4 && i[1] == 4 )
    {
      v9 = *((unsigned __int16 *)i + 1);
      if ( v9 < 4 )
        return 3221225621LL;
      v7 += v9 - 4;
    }
  }
  if ( !v7 )
    return 3221226021LL;
  v10 = v7 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = PoolWithTag;
  for ( j = (_BYTE *)(v5 + (*(unsigned __int8 *)(v5 + 2) | (unsigned __int64)(*(unsigned __int8 *)(v5 + 3) << 8)));
        (*j & 0x7F) != 0x7F;
        j += (unsigned __int8)j[2] | (unsigned __int64)((unsigned __int8)j[3] << 8) )
  {
    if ( *j == 4 && j[1] == 4 )
    {
      v15 = (unsigned int)*((unsigned __int16 *)j + 1) - 4;
      memmove(v13, j + 4, v15);
      v13 = (_WORD *)((char *)v13 + v15);
    }
  }
  result = 0LL;
  *a2 = v12;
  *v13 = 0;
  *a3 = v10;
  return result;
}
