/*
 * XREFs of CmpAddSubKeyEx @ 0x14049AE00
 * Callers:
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpAddSubKey @ 0x14049ADF8 (CmpAddSubKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 * Callees:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpAddSubKeyToList @ 0x14049B06C (CmpAddSubKeyToList.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  int v8; // r15d
  __int64 v9; // rax
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // r13
  int v13; // eax
  int v14; // edx
  __int16 v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rbx
  int *v18; // r15
  unsigned int i; // edx
  __int64 v20; // rcx
  unsigned int Cell; // eax
  char v22; // al
  __int64 v23; // rcx
  int v24; // eax
  int v26; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-2Ch]
  _DWORD *v28; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  int v32; // [rsp+A0h] [rbp+40h]

  v30[1] = 0;
  v30[0] = -1;
  v5 = -1;
  v29[0] = -1;
  v26 = -1;
  v29[1] = 0;
  v28 = 0LL;
  v8 = 0;
  v32 = 0;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v30);
  v31 = v9;
  if ( !v9 )
    return 0;
  v11 = a3 >> 31;
  v27 = a3 >> 31;
  v12 = v11;
  if ( *(_DWORD *)(v9 + 4 * v11 + 20) )
  {
    v18 = (int *)(v9 + 4 * (v11 + 7));
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)*v18,
            v29);
    if ( v17 )
    {
      v10 = 1;
      if ( *(_WORD *)v17 == 26220 && *(_WORD *)(v17 + 2) >= 0x1FBu )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)*v18) )
          goto LABEL_15;
        for ( i = 0; i < *(unsigned __int16 *)(v17 + 2); *(_DWORD *)(v17 + 4 * v20 + 4) = *(_DWORD *)(v17 + 8 * v20 + 4) )
          v20 = i++;
        *(_WORD *)v17 = 26988;
      }
      if ( ((*(_WORD *)v17 - 26732) & 0xFEFF) != 0 || *(_WORD *)(v17 + 2) < 0x3F5u )
        goto LABEL_26;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
      v28 = 0LL;
      Cell = HvAllocateCell(BugCheckParameter2, 12, v27, (__int64)&v28, (__int64)v29);
      v17 = (__int64)v28;
      v5 = Cell;
      if ( Cell != -1 )
      {
        *v28 = 92530;
        *(_DWORD *)(v17 + 4) = *v18;
        *v18 = Cell;
        v26 = -1;
        goto LABEL_26;
      }
    }
LABEL_15:
    v10 = 0;
    goto LABEL_29;
  }
  v10 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 5u )
  {
    v14 = 12;
    v15 = 26220;
  }
  else
  {
    v13 = 1012;
    if ( !a4 )
      a4 = 1;
    if ( a4 < 0x3F4 )
      v13 = a4;
    v14 = 8 * v13 + 4;
    v15 = 26732;
  }
  v16 = HvAllocateCell(BugCheckParameter2, v14, (unsigned int)v11, (__int64)&v28, (__int64)v29);
  v17 = (__int64)v28;
  v26 = v16;
  v5 = v16;
  if ( v16 != -1 )
  {
    *(_WORD *)v28 = v15;
    v18 = &v26;
    v32 = 1;
    *(_WORD *)(v17 + 2) = 0;
LABEL_26:
    v22 = CmpAddSubKeyToList(BugCheckParameter2);
    v5 = v26;
    if ( !v22 )
    {
      v8 = v32;
      v10 = 0;
      goto LABEL_30;
    }
    v23 = v31;
    v24 = *v18;
    ++*(_DWORD *)(v31 + 4 * v12 + 20);
    *(_DWORD *)(v23 + 4 * v12 + 28) = v24;
LABEL_29:
    v8 = 0;
    goto LABEL_30;
  }
  v10 = 0;
LABEL_30:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
  if ( v17 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  if ( v8 )
    HvFreeCell(BugCheckParameter2, v5);
  return v10;
}
