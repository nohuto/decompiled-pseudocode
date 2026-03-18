/*
 * XREFs of CmpSplitLeaf @ 0x1405E4300
 * Callers:
 *     CmpSelectLeaf @ 0x1404C6074 (CmpSelectLeaf.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int16 *v4; // rsi
  unsigned int v5; // r12d
  __int64 v7; // r15
  __int64 v8; // rax
  _WORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r14
  int Cell; // eax
  __int16 v15; // ax
  int v16; // edx
  int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+34h] [rbp-1Ch] BYREF
  int v25; // [rsp+38h] [rbp-18h] BYREF
  int v26; // [rsp+3Ch] [rbp-14h]
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-10h]
  __int16 *v28; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int16 v29; // [rsp+90h] [rbp+40h]

  v23 = -1;
  v4 = 0LL;
  v25 = -1;
  v5 = BugCheckParameter3;
  v24 = -1;
  v7 = a3;
  v28 = 0LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v23);
  v9 = (_WORD *)v8;
  if ( !v8 )
    return 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter3a) = *(_DWORD *)(v8 + 4 * v7 + 4);
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)BugCheckParameter3a,
          &v25);
  v11 = v10;
  if ( !v10 )
  {
LABEL_15:
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
    return 0xFFFFFFFFLL;
  }
  v12 = *(_WORD *)(v10 + 2);
  v13 = v12 >> 1;
  v29 = v12 - (v12 >> 1);
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    LOWORD(v26) = 4;
  else
    v26 = 8;
  if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3a, 0)
    || (v26 = v29 * (unsigned __int16)v26,
        Cell = HvAllocateCell(BugCheckParameter2, v26 + 5, a4, (__int64)&v28, (__int64)&v24),
        v4 = v28,
        LODWORD(BugCheckParameter3a) = Cell,
        Cell == -1) )
  {
LABEL_13:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
    goto LABEL_15;
  }
  v15 = 26732;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    v15 = 26988;
  *v28 = v15;
  v16 = *((_DWORD *)v9 - 1);
  if ( ((-8 - 4 * (unsigned __int16)v9[1] - v16) & 0xFFFFFFFC) < 4 )
  {
    v17 = -4 - v16;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
    v28 = 0LL;
    v18 = HvReallocateCell(BugCheckParameter2, v5, v17 + 4, 0, (__int64 *)&v28, &v23);
    v19 = v18;
    if ( v18 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, (unsigned int)BugCheckParameter3a);
      v9 = v28;
      goto LABEL_13;
    }
    if ( v5 != v18 )
    {
      HvFreeCell(BugCheckParameter2, v5);
      v5 = v19;
    }
    v9 = v28;
  }
  v21 = 8LL * v13 + 4;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
    v21 = 4LL * v13 + 4;
  memmove(v4 + 2, (const void *)(v11 + v21), v26);
  *(_WORD *)(v11 + 2) = v13;
  v4[1] = v29;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
  v22 = (unsigned __int16)v9[1];
  if ( (unsigned int)v7 < v22 - 1 )
    memmove(
      &v9[2 * (unsigned int)(v7 + 2) + 2],
      &v9[2 * (unsigned int)(v7 + 1) + 2],
      4LL * (unsigned int)(v22 - v7 - 1));
  ++v9[1];
  *(_DWORD *)&v9[2 * (unsigned int)(v7 + 1) + 2] = BugCheckParameter3a;
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
  return v5;
}
