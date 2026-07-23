/*
 * XREFs of CmpSplitLeaf @ 0x14060B068
 * Callers:
 *     CmpSelectLeaf @ 0x14060ADA0 (CmpSelectLeaf.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  _WORD *v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r13
  unsigned int Cell; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  _WORD *v19; // rdx
  int v20; // ecx
  unsigned __int16 v21; // [rsp+30h] [rbp-30h]
  int v22; // [rsp+30h] [rbp-30h]
  unsigned int BugCheckParameter3a; // [rsp+34h] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v28; // [rsp+A0h] [rbp+40h]

  BugCheckParameter3_4 = 0xFFFFFFFFLL;
  v4 = BugCheckParameter3;
  v26[0] = -1;
  v25[0] = -1;
  v5 = 0LL;
  v26[1] = 0;
  v25[1] = 0;
  v27[0] = 0LL;
  v7 = a3;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)BugCheckParameter3,
         &BugCheckParameter3_4);
  if ( !v8 )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(v8 + 2) == 0xFFFF
    || (BugCheckParameter3a = *(_DWORD *)(v8 + 4 * v7 + 4),
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               BugCheckParameter3a,
               v26),
        (v10 = (_WORD *)v9) == 0LL) )
  {
LABEL_14:
    if ( v8 )
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
        BugCheckParameter2,
        &BugCheckParameter3_4);
    return 0xFFFFFFFFLL;
  }
  v11 = *(_WORD *)(v9 + 2);
  v12 = v11 >> 1;
  v28 = v11 - (v11 >> 1);
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    v21 = 4;
  else
    v21 = 8;
  if ( !HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0)
    || (v22 = v28 * v21,
        Cell = HvAllocateCell(BugCheckParameter2, v22 + 5, a4, (__int64)v27, (__int64)v25),
        v5 = v27[0],
        BugCheckParameter3a = Cell,
        Cell == -1) )
  {
LABEL_12:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
    goto LABEL_14;
  }
  *(_WORD *)v27[0] = *v10;
  v14 = *(_DWORD *)(v8 - 4);
  if ( ((-8 - 4 * *(unsigned __int16 *)(v8 + 2) - v14) & 0xFFFFFFFC) < 4 )
  {
    v15 = -4 - v14;
    (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
      BugCheckParameter2,
      &BugCheckParameter3_4);
    v27[0] = 0LL;
    v16 = HvReallocateCell(BugCheckParameter2, v4, v15 + 4, 0, v27, (__int64 *)&BugCheckParameter3_4);
    v17 = v16;
    if ( v16 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
      v5 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3a);
      v8 = v27[0];
      goto LABEL_12;
    }
    if ( v4 != v16 )
    {
      HvFreeCell(BugCheckParameter2, v4);
      v4 = v17;
    }
    v8 = v27[0];
  }
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    v19 = &v10[2 * v12 + 2];
  else
    v19 = &v10[4 * v12 + 2];
  memmove((void *)(v5 + 4), v19, v22);
  v10[1] = v12;
  *(_WORD *)(v5 + 2) = v28;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v25);
  v20 = *(unsigned __int16 *)(v8 + 2);
  if ( (unsigned int)v7 < v20 - 1 )
    memmove(
      (void *)(v8 + 4 * ((unsigned int)(v7 + 2) + 1LL)),
      (const void *)(v8 + 4 * ((unsigned int)(v7 + 1) + 1LL)),
      4LL * (unsigned int)(v20 - v7 - 1));
  ++*(_WORD *)(v8 + 2);
  *(_DWORD *)(v8 + 4LL * (unsigned int)(v7 + 1) + 4) = BugCheckParameter3a;
  (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(BugCheckParameter2, &BugCheckParameter3_4);
  return v4;
}
