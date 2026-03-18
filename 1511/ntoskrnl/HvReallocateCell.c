/*
 * XREFs of HvReallocateCell @ 0x1403D87A8
 * Callers:
 *     CmpRemoveValueFromList @ 0x1403D7848 (CmpRemoveValueFromList.c)
 *     CmpAddValueToListEx @ 0x1403D86A0 (CmpAddValueToListEx.c)
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpSetValueDataExisting @ 0x1404B8C18 (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x1405E4300 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x140040CE8 (HvpGetCellContextReinitialize.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        int *a6)
{
  unsigned int v6; // r15d
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v12; // rax
  const void *v13; // rsi
  unsigned int v14; // r14d
  unsigned int Cell; // edi
  size_t v16; // r8
  void *v17; // r14
  int *v18; // rcx
  void *v19; // r14
  int *v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  void *v23; // [rsp+38h] [rbp-8h]
  int v24; // [rsp+80h] [rbp+40h] BYREF

  v23 = 0LL;
  v6 = BugCheckParameter3;
  v24 = -1;
  v8 = (a3 + 11) & 0xFFFFFFF8;
  LODWORD(v22) = -1;
  v9 = 0x4000;
  v10 = 0;
  if ( v8 > 0x4000 )
  {
    do
    {
      v9 *= 2;
      ++v10;
    }
    while ( v8 > v9 );
    if ( v10 )
      v8 = v9;
  }
  if ( v8 > 0x100000 )
    return 0xFFFFFFFFLL;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v24);
  v13 = (const void *)v12;
  if ( v12 )
  {
    v14 = -4 - *(_DWORD *)(v12 - 4);
    if ( v8 <= -*(_DWORD *)(v12 - 4) )
    {
      Cell = v6;
      v21 = a6;
      *a5 = v12;
      *v21 = v24;
      HvpGetCellContextReinitialize(&v24);
    }
    else
    {
      Cell = HvpDoAllocateCell(BugCheckParameter2, (__int64)&v22);
      if ( Cell == -1 )
      {
        v19 = v23;
        Cell = -1;
      }
      else
      {
        v16 = v14;
        v17 = v23;
        memmove(v23, v13, v16);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
        v13 = 0LL;
        if ( a4 == 1 )
          HvFreeCell(BugCheckParameter2, v6);
        v18 = a6;
        *a5 = (__int64)v17;
        v19 = 0LL;
        *v18 = v22;
        HvpGetCellContextReinitialize(&v22);
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
      if ( v19 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return Cell;
}
