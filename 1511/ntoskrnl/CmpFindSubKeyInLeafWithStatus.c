/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1403D9A84
 * Callers:
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1403D9DB0 (CmpCompareInIndex.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // edi
  int v14; // eax
  __int64 result; // rax
  int v16; // eax
  int v17; // ecx
  unsigned int *v18; // rax

  v5 = *(unsigned __int16 *)(a2 + 2);
  v6 = 0;
  v11 = 0;
  v12 = v5 - 1;
  v13 = (unsigned int)(v5 - 1) >> 1;
  if ( !(_WORD)v5 )
  {
    *a4 = -1;
    *a5 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v14 = CmpCompareInIndex(a1, a3, v13, a2, a4);
    if ( v14 == 2 )
      goto LABEL_18;
    if ( !v14 )
    {
      *a5 = v13;
      return 0LL;
    }
    if ( v14 < 0 )
      v12 = v13;
    else
      v11 = v13;
    if ( v12 - v11 <= 1 )
      break;
    v13 = v11 + ((v12 - v11) >> 1);
  }
  v16 = CmpCompareInIndex(a1, a3, v11, a2, a4);
  if ( v16 != 2 )
  {
    if ( v16 )
    {
      if ( v16 >= 0 )
      {
        v17 = CmpCompareInIndex(a1, a3, v12, a2, a4);
        v18 = a5;
        if ( v17 != 2 )
        {
          *a5 = v12;
          return v17 != 0 ? 0xC0000034 : 0;
        }
        goto LABEL_19;
      }
      v6 = -1073741772;
    }
    result = v6;
    *a5 = v11;
    return result;
  }
LABEL_18:
  v18 = a5;
LABEL_19:
  *a4 = -1;
  *v18 = 0x80000000;
  return 3221225626LL;
}
