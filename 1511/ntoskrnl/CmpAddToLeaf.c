/*
 * XREFs of CmpAddToLeaf @ 0x1403D97A4
 * Callers:
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1403D9A84 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCompareInIndex @ 0x1403D9DB0 (CmpCompareInIndex.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpAddToLeaf(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3, _WORD *a4)
{
  int v4; // r14d
  unsigned int v5; // r12d
  __int64 v7; // rax
  _WORD *v8; // rbx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // r15
  _WORD *v12; // rdi
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r13d
  __int64 v16; // r14
  int v17; // eax
  int v18; // eax
  _WORD *v19; // rcx
  __int64 v20; // rdx
  __int64 result; // rax
  size_t v22; // r8
  _WORD *v23; // rdx
  _WORD *v24; // rcx
  unsigned int v25; // ebx
  int v26; // [rsp+30h] [rbp-10h] BYREF
  int v27; // [rsp+34h] [rbp-Ch] BYREF
  _WORD *v28; // [rsp+38h] [rbp-8h] BYREF

  v4 = (int)a4;
  v26 = -1;
  v5 = BugCheckParameter3;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3) )
    return 0xFFFFFFFFLL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v5, &v26);
  v8 = (_WORD *)v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = -4 - *(_DWORD *)(v7 - 4);
  v10 = *(unsigned __int16 *)(v7 + 2);
  LODWORD(v11) = 4;
  if ( *v8 == 26988 )
  {
    v12 = 0LL;
    v14 = 4;
    v13 = 4 * v10;
  }
  else
  {
    v12 = v8;
    v13 = 8 * v10;
    v14 = 8;
  }
  v15 = v5;
  if ( v9 - v13 - 4 < v14 )
  {
    v25 = v9 + (v9 >> 1);
    if ( v25 < v14 + v9 )
      v25 = v14 + v9;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
    v28 = 0LL;
    v15 = HvReallocateCell(BugCheckParameter2, v5, v25, 0, (__int64 *)&v28, &v26);
    result = 0xFFFFFFFFLL;
    if ( v15 == -1 )
      return result;
    v8 = v28;
    if ( v12 )
      v12 = v28;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v8, v4, (unsigned int)&v27, (__int64)&v28);
  v16 = (unsigned int)v28;
  if ( (int)v28 >= 0 && v27 == -1 )
  {
    if ( (_DWORD)v28 == (unsigned __int16)v8[1] )
    {
LABEL_13:
      if ( v12 )
      {
        *(_DWORD *)&v12[4 * v16 + 2] = a3;
        if ( *v12 == 26732 )
        {
          *(_DWORD *)&v12[4 * v16 + 4] = CmpComputeHashKey(0LL, a4);
        }
        else
        {
          v19 = a4;
          *(_DWORD *)&v12[4 * v16 + 4] = 0;
          if ( (*a4 & 0xFFFEu) < 8 )
            LODWORD(v11) = (unsigned __int16)*a4 >> 1;
          do
          {
            v20 = *((_QWORD *)v19 + 1);
            v11 = (unsigned int)(v11 - 1);
            if ( *(_WORD *)(v20 + 2 * v11) > 0xFFu )
              break;
            *((_BYTE *)&v12[4 * v16 + 4] + v11) = *(_BYTE *)(v20 + 2 * v11);
            v19 = a4;
          }
          while ( (_DWORD)v11 );
        }
      }
      else
      {
        *(_DWORD *)&v8[2 * v16 + 2] = a3;
      }
      ++v8[1];
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      if ( v15 != v5 )
        HvFreeCell(BugCheckParameter2, v5);
      return v15;
    }
    v17 = CmpCompareInIndex(BugCheckParameter2, a4, (unsigned int)v28, v8, &v27);
    if ( v17 != 2 )
    {
      if ( v17 > 0 )
        v16 = (unsigned int)(v16 + 1);
      v18 = (unsigned __int16)v8[1];
      if ( (_DWORD)v16 != v18 )
      {
        if ( v12 )
        {
          v22 = 8LL * ((unsigned __int16)v12[1] - (unsigned int)v16);
          v23 = &v12[4 * v16 + 2];
          v24 = &v12[4 * (unsigned int)(v16 + 1) + 2];
        }
        else
        {
          v22 = 4LL * (unsigned int)(v18 - v16);
          v23 = &v8[2 * (unsigned int)v16 + 2];
          v24 = &v8[2 * (unsigned int)(v16 + 1) + 2];
        }
        memmove(v24, v23, v22);
      }
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
  if ( v15 != v5 )
    HvFreeCell(BugCheckParameter2, v15);
  return 0xFFFFFFFFLL;
}
