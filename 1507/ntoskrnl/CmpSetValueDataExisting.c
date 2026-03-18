/*
 * XREFs of CmpSetValueDataExisting @ 0x1405583F0
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  unsigned int v14; // ebx
  unsigned __int16 v15; // r15
  char *v16; // r12
  void *v17; // rax
  size_t v18; // r8
  unsigned int v19; // ebx
  ULONG_PTR v21; // rdx
  int v22; // eax
  unsigned __int16 v23; // r15
  int Cell; // eax
  unsigned __int16 v25; // r15
  ULONG_PTR v26; // rdx
  int v27; // eax
  int v28; // [rsp+30h] [rbp-10h] BYREF
  int v29; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v30; // [rsp+38h] [rbp-8h] BYREF
  __int64 v31; // [rsp+80h] [rbp+40h] BYREF
  void *Src; // [rsp+88h] [rbp+48h]

  Src = a2;
  v28 = -1;
  v29 = -1;
  LODWORD(v31) = -1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a5, &v29);
  v9 = v8;
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v8 + 4),
            &v31);
    if ( !v10 )
    {
      v19 = -1073741670;
LABEL_14:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
      return v19;
    }
    v13 = *(_WORD *)(v9 + 2);
    v14 = (a3 + 16343) / 0x3FD8;
    if ( (unsigned __int16)v14 > v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
      v21 = *(unsigned int *)(v9 + 4);
      v30 = 0LL;
      v22 = HvReallocateCell(BugCheckParameter2, v21, 4 * (unsigned int)(unsigned __int16)v14, 1, &v30, &v31);
      v10 = v30;
      if ( v22 == -1 )
        goto LABEL_26;
      v23 = *(_WORD *)(v9 + 2);
      *(_DWORD *)(v9 + 4) = v22;
      while ( v23 < (unsigned __int16)v14 )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, a4, 0LL, 0LL);
        *(_DWORD *)(v10 + 4LL * v23) = Cell;
        if ( Cell == -1 )
          goto LABEL_26;
        ++v23;
      }
    }
    else if ( (unsigned __int16)v14 < v13 )
    {
      v25 = (a3 + 16343) / 0x3FD8;
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v10 + 4LL * v25++), v11, v12);
      while ( v25 < *(_WORD *)(v9 + 2) );
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
      v26 = *(unsigned int *)(v9 + 4);
      v30 = 0LL;
      v27 = HvReallocateCell(BugCheckParameter2, v26, 4 * (unsigned int)(unsigned __int16)v14, 1, &v30, &v31);
      v10 = v30;
      if ( v27 == -1 )
        goto LABEL_26;
      *(_DWORD *)(v9 + 4) = v27;
    }
    v15 = 0;
    if ( !(_WORD)v14 )
    {
LABEL_11:
      *(_WORD *)(v9 + 2) = v14;
      v19 = 0;
      goto LABEL_12;
    }
    v16 = (char *)Src;
    while ( 1 )
    {
      v17 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *(unsigned int *)(v10 + 4LL * v15),
                      &v28);
      if ( !v17 )
        break;
      v18 = a3;
      if ( a3 > 0x3FD8 )
        v18 = 16344LL;
      memmove(v17, v16, v18);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
      a3 -= 16344;
      v16 += 16344;
      if ( ++v15 >= (unsigned __int16)v14 )
        goto LABEL_11;
    }
LABEL_26:
    v19 = -1073741670;
LABEL_12:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v31);
    goto LABEL_14;
  }
  return 3221225626LL;
}
