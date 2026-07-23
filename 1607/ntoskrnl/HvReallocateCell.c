/*
 * XREFs of HvReallocateCell @ 0x1403FECAC
 * Callers:
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpAddToLeaf @ 0x14049B1D0 (CmpAddToLeaf.c)
 *     CmpRemoveValueFromList @ 0x1404BFE84 (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x1404CEBA0 (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x14060B068 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v9; // r12d
  void *v10; // r15
  __int64 v11; // rax
  const void *v12; // rsi
  unsigned int Cell; // edi
  unsigned int v14; // edi
  unsigned int v15; // r14d
  __int64 *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ecx
  size_t v20; // r8
  void *v21; // r14
  __int64 *v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-10h] BYREF
  void *v25; // [rsp+38h] [rbp-8h]
  __int64 v26; // [rsp+70h] [rbp+30h] BYREF

  v26 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  v25 = 0LL;
  v9 = BugCheckParameter3;
  v10 = 0LL;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          BugCheckParameter3,
          &v26);
  v12 = (const void *)v11;
  if ( v11 )
  {
    v14 = a3 + 4;
    v15 = -4 - *(_DWORD *)(v11 - 4);
    if ( v14 > -*(_DWORD *)(v11 - 4) )
    {
      v17 = 0x4000;
      v18 = (v14 + 7) & 0xFFFFFFF8;
      v19 = 0;
      if ( v18 > 0x4000 )
      {
        do
        {
          v17 *= 2;
          ++v19;
        }
        while ( v18 > v17 );
        if ( v19 )
          v18 = v17;
      }
      if ( v18 <= 0x100000 )
      {
        Cell = HvpDoAllocateCell(BugCheckParameter2, (__int64)&v24);
        if ( Cell == -1 )
        {
          v10 = v25;
          Cell = -1;
        }
        else
        {
          v20 = v15;
          v21 = v25;
          memmove(v25, v12, v20);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
          v12 = 0LL;
          if ( a4 == 1 )
            HvFreeCell(BugCheckParameter2, v9);
          v22 = a6;
          *a5 = (__int64)v21;
          *v22 = v24;
          HvpGetCellContextReinitialize((__int64)&v24);
        }
      }
      else
      {
        Cell = -1;
      }
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      if ( v10 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
    }
    else
    {
      Cell = v9;
      v16 = a6;
      *a5 = v11;
      *v16 = v26;
      HvpGetCellContextReinitialize((__int64)&v26);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return Cell;
}
