/*
 * XREFs of CmpSetValueDataExisting @ 0x1404CEBA0
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
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
  unsigned __int16 v11; // ax
  unsigned int v12; // ebx
  unsigned __int16 v13; // r15
  char *v14; // r12
  void *v15; // rax
  size_t v16; // r8
  unsigned int v17; // ebx
  unsigned __int16 v19; // r15
  ULONG_PTR v20; // rdx
  int v21; // eax
  ULONG_PTR v22; // rdx
  int v23; // eax
  unsigned __int16 v24; // r15
  int Cell; // eax
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v27[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  void *Src; // [rsp+98h] [rbp+48h]

  Src = a2;
  v27[0] = -1;
  v27[1] = 0;
  v28[0] = -1;
  v28[1] = 0;
  v26 = 0xFFFFFFFFLL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a5, v28);
  v9 = v8;
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v8 + 4),
            &v26);
    if ( !v10 )
    {
      v17 = -1073741670;
LABEL_14:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
      return v17;
    }
    v11 = *(_WORD *)(v9 + 2);
    v12 = (a3 + 16343) / 0x3FD8;
    if ( (unsigned __int16)v12 < v11 )
    {
      v19 = (a3 + 16343) / 0x3FD8;
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v10 + 4LL * v19++));
      while ( v19 < *(_WORD *)(v9 + 2) );
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      v20 = *(unsigned int *)(v9 + 4);
      v29 = 0LL;
      v21 = HvReallocateCell(BugCheckParameter2, v20, 4 * (unsigned int)(unsigned __int16)v12, 1, &v29, &v26);
      v10 = v29;
      if ( v21 == -1 )
        goto LABEL_23;
      *(_DWORD *)(v9 + 4) = v21;
    }
    else if ( (unsigned __int16)v12 > v11 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      v22 = *(unsigned int *)(v9 + 4);
      v29 = 0LL;
      v23 = HvReallocateCell(BugCheckParameter2, v22, 4 * (unsigned int)(unsigned __int16)v12, 1, &v29, &v26);
      v10 = v29;
      if ( v23 == -1 )
        goto LABEL_23;
      v24 = *(_WORD *)(v9 + 2);
      *(_DWORD *)(v9 + 4) = v23;
      while ( v24 < (unsigned __int16)v12 )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, a4, 0LL, 0LL);
        *(_DWORD *)(v10 + 4LL * v24) = Cell;
        if ( Cell == -1 )
          goto LABEL_23;
        ++v24;
      }
    }
    v13 = 0;
    if ( !(_WORD)v12 )
    {
LABEL_11:
      *(_WORD *)(v9 + 2) = v12;
      v17 = 0;
      goto LABEL_12;
    }
    v14 = (char *)Src;
    while ( 1 )
    {
      v15 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *(unsigned int *)(v10 + 4LL * v13),
                      v27);
      if ( !v15 )
        break;
      v16 = a3;
      if ( a3 > 0x3FD8 )
        v16 = 16344LL;
      memmove(v15, v14, v16);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
      a3 -= 16344;
      v14 += 16344;
      if ( ++v13 >= (unsigned __int16)v12 )
        goto LABEL_11;
    }
LABEL_23:
    v17 = -1073741670;
LABEL_12:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
    goto LABEL_14;
  }
  return 3221225626LL;
}
