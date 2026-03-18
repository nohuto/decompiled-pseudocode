/*
 * XREFs of CmpSplitLeaf @ 0x140409E3C
 * Callers:
 *     CmpSelectLeaf @ 0x140533CC8 (CmpSelectLeaf.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  _WORD *v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r13
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  _WORD *v17; // rdx
  int v18; // ecx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+3Ch] [rbp-14h]
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int16 v24; // [rsp+90h] [rbp+40h]

  v19 = -1LL;
  v4 = 0LL;
  v20 = -1;
  v5 = BugCheckParameter3;
  v7 = a3;
  v23 = 0LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v19);
  if ( !v8 )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(v8 + 2) == 0xFFFF
    || (LODWORD(BugCheckParameter3a) = *(_DWORD *)(v8 + 4 * v7 + 4),
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               (unsigned int)BugCheckParameter3a,
               &v20),
        (v10 = (_WORD *)v9) == 0LL) )
  {
LABEL_14:
    if ( v8 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
    return 0xFFFFFFFFLL;
  }
  v11 = *(_WORD *)(v9 + 2);
  v12 = v11 >> 1;
  v24 = v11 - (v11 >> 1);
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    LOWORD(v21) = 4;
  else
    v21 = 8;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3a)
    || (v21 = v24 * (unsigned __int16)v21,
        v13 = HvAllocateCell(BugCheckParameter2, (unsigned int)(v21 + 5), a4, &v23, (char *)&v19 + 4),
        v4 = v23,
        LODWORD(BugCheckParameter3a) = v13,
        v13 == -1) )
  {
LABEL_12:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, (char *)&v19 + 4);
    goto LABEL_14;
  }
  *(_WORD *)v23 = *v10;
  if ( ((-8 - 4 * *(unsigned __int16 *)(v8 + 2) - *(_DWORD *)(v8 - 4)) & 0xFFFFFFFC) < 4 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
    v23 = 0LL;
    v14 = HvReallocateCell(BugCheckParameter2, v5, (__int64)&v23, (__int64)&v19);
    v15 = v14;
    if ( v14 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, (char *)&v19 + 4);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3a);
      v8 = v23;
      goto LABEL_12;
    }
    if ( v5 != v14 )
    {
      HvFreeCell(BugCheckParameter2, v5);
      v5 = v15;
    }
    v8 = v23;
  }
  if ( ((*v10 - 26220) & 0xFDFF) != 0 )
    v17 = &v10[2 * v12 + 2];
  else
    v17 = &v10[4 * v12 + 2];
  memmove((void *)(v4 + 4), v17, v21);
  v10[1] = v12;
  *(_WORD *)(v4 + 2) = v24;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, (char *)&v19 + 4);
  v18 = *(unsigned __int16 *)(v8 + 2);
  if ( (unsigned int)v7 < v18 - 1 )
    memmove(
      (void *)(v8 + 4 * ((unsigned int)(v7 + 2) + 1LL)),
      (const void *)(v8 + 4 * ((unsigned int)(v7 + 1) + 1LL)),
      4LL * (unsigned int)(v18 - v7 - 1));
  ++*(_WORD *)(v8 + 2);
  *(_DWORD *)(v8 + 4LL * (unsigned int)(v7 + 1) + 4) = BugCheckParameter3a;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
  return v5;
}
