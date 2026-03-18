/*
 * XREFs of CmpAddToLeaf @ 0x1405339A8
 * Callers:
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404CA7D0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCompareInIndex @ 0x1404CAF30 (CmpCompareInIndex.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        unsigned __int16 *a4)
{
  int v4; // r14d
  unsigned int v5; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int16 *v9; // rbx
  unsigned __int16 v10; // ax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  __int64 v13; // r15
  _WORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  __int64 v18; // r14
  int v19; // eax
  int v20; // eax
  size_t v21; // r8
  __int16 *v22; // rdx
  __int16 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v31; // [rsp+38h] [rbp-8h] BYREF

  v29 = -1;
  v4 = (int)a4;
  v5 = BugCheckParameter3;
  v7 = 0;
  if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3, 0, 0LL) )
    return 0xFFFFFFFFLL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v5, &v29);
  v9 = (__int16 *)v8;
  if ( !v8 )
    return 0xFFFFFFFFLL;
  v10 = *(_WORD *)(v8 + 2);
  if ( v10 == 0xFFFF )
  {
LABEL_36:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    if ( v7 != v5 )
      HvFreeCell(BugCheckParameter2, v7, v27, v28);
    return 0xFFFFFFFFLL;
  }
  v11 = -4 - *((_DWORD *)v9 - 1);
  v12 = 8;
  LODWORD(v13) = 4;
  if ( *v9 == 26988 )
  {
    v14 = 0LL;
    v12 = 4;
    v15 = 4 * v10;
  }
  else
  {
    v14 = v9;
    v15 = 8 * v10;
  }
  v7 = v5;
  if ( -4 - *((_DWORD *)v9 - 1) - v15 - 4 >= v12 )
  {
LABEL_13:
    CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)v9, v4, 0, &v30, (unsigned int *)&v31);
    v18 = (unsigned int)v31;
    if ( (int)v31 >= 0 && v30 == -1 )
    {
      if ( (_DWORD)v31 == (unsigned __int16)v9[1] )
      {
LABEL_24:
        if ( v14 )
        {
          *(_DWORD *)&v14[4 * v18 + 2] = a3;
          if ( *v14 == 26732 )
          {
            *(_DWORD *)&v14[4 * v18 + 4] = CmpComputeHashKey(0LL, a4);
          }
          else
          {
            *(_DWORD *)&v14[4 * v18 + 4] = 0;
            if ( (*a4 & 0xFFFEu) < 8 )
              LODWORD(v13) = *a4 >> 1;
            do
            {
              v24 = *((_QWORD *)a4 + 1);
              v13 = (unsigned int)(v13 - 1);
              if ( *(_WORD *)(v24 + 2 * v13) > 0xFFu )
                break;
              *((_BYTE *)&v14[4 * v18 + 4] + v13) = *(_BYTE *)(v24 + 2 * v13);
            }
            while ( (_DWORD)v13 );
          }
        }
        else
        {
          *(_DWORD *)&v9[2 * v18 + 2] = a3;
        }
        ++v9[1];
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
        if ( v7 != v5 )
          HvFreeCell(BugCheckParameter2, v5, v25, v26);
        return v7;
      }
      v19 = CmpCompareInIndex(BugCheckParameter2, a4, 0LL, v31, v9, &v30);
      if ( v19 != 2 )
      {
        if ( v19 > 0 )
          v18 = (unsigned int)(v18 + 1);
        v20 = (unsigned __int16)v9[1];
        if ( (_DWORD)v18 != v20 )
        {
          if ( v14 )
          {
            v21 = 8LL * ((unsigned __int16)v14[1] - (unsigned int)v18);
            v22 = &v14[4 * v18 + 2];
            v23 = &v14[4 * (unsigned int)(v18 + 1) + 2];
          }
          else
          {
            v21 = 4LL * (unsigned int)(v20 - v18);
            v22 = &v9[2 * (unsigned int)v18 + 2];
            v23 = &v9[2 * (unsigned int)(v18 + 1) + 2];
          }
          memmove(v23, v22, v21);
        }
        goto LABEL_24;
      }
    }
    goto LABEL_36;
  }
  v16 = v11 + (v11 >> 1);
  if ( v16 < v12 + v11 )
    v16 = v12 + v11;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
  v31 = 0LL;
  v7 = HvReallocateCell(BugCheckParameter2, v5, v16, 0, &v31, &v29);
  result = 0xFFFFFFFFLL;
  if ( v7 != -1 )
  {
    v9 = (__int16 *)v31;
    if ( v14 )
      v14 = (_WORD *)v31;
    goto LABEL_13;
  }
  return result;
}
