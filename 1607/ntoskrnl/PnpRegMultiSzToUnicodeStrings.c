/*
 * XREFs of PnpRegMultiSzToUnicodeStrings @ 0x1407B26B8
 * Callers:
 *     PiInitCacheGroupInformation @ 0x1407B25EC (PiInitCacheGroupInformation.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x14014584C (PnpFreeUnicodeStringList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRegMultiSzToUnicodeStrings(_DWORD *a1, PVOID **a2, unsigned int *a3)
{
  _WORD *v5; // rax
  _WORD *v6; // rdi
  unsigned int v7; // ebp
  _WORD *v8; // rcx
  PVOID *PoolWithTag; // rax
  unsigned int v10; // r14d
  _WORD *v11; // rbx
  const void *v12; // r12
  _WORD *v13; // rsi
  unsigned int v15; // r15d
  PVOID v16; // rax
  PVOID *v17; // rcx
  unsigned int v18; // ebx
  PVOID v19; // rax
  PVOID *v20; // rdi
  __int64 v21; // [rsp+60h] [rbp+8h]
  PVOID *v23; // [rsp+78h] [rbp+20h]

  if ( a1[1] != 7 )
    return 3221225485LL;
  v5 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v6 = (_WORD *)((char *)v5 + (unsigned int)a1[3]);
  v7 = 0;
  if ( v5 == v6 )
    goto LABEL_22;
  v8 = v5 + 1;
  do
  {
    if ( !*v5 )
    {
      ++v7;
      if ( v8 == v6 || !*v8 )
        break;
    }
    ++v5;
    ++v8;
  }
  while ( v5 != v6 );
  if ( v5 == v6 )
LABEL_22:
    ++v7;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16LL * v7, 0x75737050u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = 0;
  v11 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v12 = v11;
  if ( v11 == v6 )
    goto LABEL_26;
  v13 = v11 + 1;
  while ( *v11 )
  {
LABEL_14:
    ++v11;
    ++v13;
    if ( v11 == v6 )
      goto LABEL_15;
  }
  v15 = (_DWORD)v11 - (_DWORD)v12 + 2;
  v16 = ExAllocatePoolWithTag(PagedPool, v15, 0x75737050u);
  v17 = *a2;
  v21 = 2LL * v10;
  v23 = v17;
  v17[v21 + 1] = v16;
  if ( !v16 )
    goto LABEL_24;
  memmove(v16, v12, v15);
  ++v10;
  WORD1(v23[v21]) = v15;
  LOWORD(v23[v21]) = (_WORD)v11 - (_WORD)v12;
  if ( v13 != v6 && *v13 )
  {
    v12 = v13;
    goto LABEL_14;
  }
LABEL_15:
  if ( v11 != v6 )
    goto LABEL_16;
LABEL_26:
  v18 = (_DWORD)v11 - (_DWORD)v12;
  v19 = ExAllocatePoolWithTag(PagedPool, v18 + 2LL, 0x75737050u);
  v20 = *a2;
  (*a2)[2 * v10 + 1] = v19;
  if ( !v19 )
  {
    v17 = v20;
LABEL_24:
    PnpFreeUnicodeStringList(v17, v10);
    return 3221225626LL;
  }
  if ( v18 )
    memmove(v19, v12, v18);
  *((_WORD *)v20[2 * v10 + 1] + ((unsigned __int64)v18 >> 1)) = 0;
  LOWORD(v20[2 * v10]) = v18;
  WORD1(v20[2 * v10]) = v18 + 2;
LABEL_16:
  *a3 = v7;
  return 0LL;
}
