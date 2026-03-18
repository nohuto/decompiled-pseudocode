/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1404CA7D0
 * Callers:
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     CmpFindSubKeyInLeaf @ 0x14065B170 (CmpFindSubKeyInLeaf.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1404CAF30 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(int a1, __int64 a2, int a3, int a4, _DWORD *a5, unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // edi
  int v14; // eax
  __int64 result; // rax
  int v16; // eax
  int v17; // ecx
  unsigned int *v18; // rax
  int v19; // [rsp+60h] [rbp+8h]

  v19 = a1;
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = 0;
  v11 = 0;
  v12 = v6 - 1;
  v13 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v14 = CmpCompareInIndex(a1, a3, a4, v13, a2, (__int64)a5);
    if ( v14 == 2 )
      goto LABEL_18;
    if ( !v14 )
    {
      *a6 = v13;
      return 0LL;
    }
    if ( v14 < 0 )
      v12 = v13;
    else
      v11 = v13;
    if ( v12 - v11 <= 1 )
      break;
    a1 = v19;
    v13 = v11 + ((v12 - v11) >> 1);
  }
  v16 = CmpCompareInIndex(v19, a3, a4, v11, a2, (__int64)a5);
  if ( v16 != 2 )
  {
    if ( v16 )
    {
      if ( v16 >= 0 )
      {
        v17 = CmpCompareInIndex(v19, a3, a4, v12, a2, (__int64)a5);
        v18 = a6;
        if ( v17 != 2 )
        {
          *a6 = v12;
          return v17 != 0 ? 0xC0000034 : 0;
        }
        goto LABEL_19;
      }
      v7 = -1073741772;
    }
    result = v7;
    *a6 = v11;
    return result;
  }
LABEL_18:
  v18 = a6;
LABEL_19:
  *a5 = -1;
  *v18 = 0x80000000;
  return 3221225626LL;
}
