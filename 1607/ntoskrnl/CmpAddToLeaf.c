/*
 * XREFs of CmpAddToLeaf @ 0x14049B1D0
 * Callers:
 *     CmpAddSubKeyToList @ 0x14049B06C (CmpAddSubKeyToList.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpCompareInIndex @ 0x1404F5A90 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404F5E50 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        unsigned __int16 *a4)
{
  int v4; // r14d
  _WORD *v5; // rdi
  unsigned int v6; // r12d
  unsigned int v7; // r13d
  __int64 v9; // rax
  _WORD *v10; // rbx
  unsigned __int16 v11; // ax
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // r15
  int v15; // eax
  unsigned int v16; // ebx
  __int64 result; // rax
  __int64 v18; // r14
  int v19; // eax
  int v20; // eax
  size_t v21; // r8
  _WORD *v22; // rdx
  _WORD *v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+40h] [rbp-10h] BYREF

  v27[0] = 0xFFFFFFFFLL;
  v4 = (int)a4;
  v5 = 0LL;
  v6 = 0;
  v7 = BugCheckParameter3;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3) )
    return 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v7, v27);
  v10 = (_WORD *)v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v11 = *(_WORD *)(v9 + 2);
  if ( v11 == 0xFFFF )
  {
LABEL_36:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
    if ( v6 != v7 )
      HvFreeCell(BugCheckParameter2, v6);
    return 0xFFFFFFFFLL;
  }
  v12 = -4 - *((_DWORD *)v10 - 1);
  v13 = 8;
  LODWORD(v14) = 4;
  if ( *v10 == 26988 )
  {
    v13 = 4;
    v15 = 4 * v11;
  }
  else
  {
    v5 = v10;
    v15 = 8 * v11;
  }
  v6 = v7;
  if ( -4 - *((_DWORD *)v10 - 1) - v15 - 4 >= v13 )
  {
LABEL_13:
    CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v10, v4, 0, (__int64)&v25, (__int64)&v26);
    v18 = (unsigned int)v26;
    if ( (int)v26 >= 0 && v25 == -1 )
    {
      if ( (_DWORD)v26 == (unsigned __int16)v10[1] )
      {
LABEL_24:
        if ( v5 )
        {
          *(_DWORD *)&v5[4 * v18 + 2] = a3;
          if ( *v5 == 26732 )
          {
            *(_DWORD *)&v5[4 * v18 + 4] = CmpHashUnicodeComponent(a4);
          }
          else
          {
            *(_DWORD *)&v5[4 * v18 + 4] = 0;
            if ( (*a4 & 0xFFFEu) < 8 )
              LODWORD(v14) = *a4 >> 1;
            do
            {
              v24 = *((_QWORD *)a4 + 1);
              v14 = (unsigned int)(v14 - 1);
              if ( *(_WORD *)(v24 + 2 * v14) > 0xFFu )
                break;
              *((_BYTE *)&v5[4 * v18 + 4] + v14) = *(_BYTE *)(v24 + 2 * v14);
            }
            while ( (_DWORD)v14 );
          }
        }
        else
        {
          *(_DWORD *)&v10[2 * v18 + 2] = a3;
        }
        ++v10[1];
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
        if ( v6 != v7 )
          HvFreeCell(BugCheckParameter2, v7);
        return v6;
      }
      v19 = CmpCompareInIndex(BugCheckParameter2, a4, 0LL, (unsigned int)v26, v10, &v25);
      if ( v19 != 2 )
      {
        if ( v19 > 0 )
          v18 = (unsigned int)(v18 + 1);
        v20 = (unsigned __int16)v10[1];
        if ( (_DWORD)v18 != v20 )
        {
          if ( v5 )
          {
            v21 = 8LL * ((unsigned __int16)v5[1] - (unsigned int)v18);
            v22 = &v5[4 * v18 + 2];
            v23 = &v5[4 * (unsigned int)(v18 + 1) + 2];
          }
          else
          {
            v21 = 4LL * (unsigned int)(v20 - v18);
            v22 = &v10[2 * (unsigned int)v18 + 2];
            v23 = &v10[2 * (unsigned int)(v18 + 1) + 2];
          }
          memmove(v23, v22, v21);
        }
        goto LABEL_24;
      }
    }
    goto LABEL_36;
  }
  v16 = v12 + (v12 >> 1);
  if ( v16 < v13 + v12 )
    v16 = v13 + v12;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  v26 = 0LL;
  v6 = HvReallocateCell(BugCheckParameter2, v7, v16, 0, (__int64 *)&v26, v27);
  result = 0xFFFFFFFFLL;
  if ( v6 != -1 )
  {
    v10 = v26;
    if ( v5 )
      v5 = v26;
    goto LABEL_13;
  }
  return result;
}
