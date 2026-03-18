/*
 * XREFs of HvReallocateCell @ 0x1404A1290
 * Callers:
 *     CmpSplitLeaf @ 0x140409E3C (CmpSplitLeaf.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
 *     CmpRemoveValueFromList @ 0x1404F0AAC (CmpRemoveValueFromList.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 *     CmpSetValueDataExisting @ 0x1405583F0 (CmpSetValueDataExisting.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400CA874 (HvpGetCellContextReinitialize.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvpDoAllocateCell @ 0x14049ECFC (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        _DWORD *a6)
{
  void *v7; // r14
  unsigned int v9; // r12d
  __int64 v11; // rax
  const void *v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // r15d
  int *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  int v27; // [rsp+70h] [rbp+30h] BYREF

  v7 = 0LL;
  v27 = -1;
  LODWORD(v25) = -1;
  v26 = 0LL;
  v9 = BugCheckParameter3;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          BugCheckParameter3,
          &v27);
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
      if ( v18 > 0x100000
        || (v20 = HvpDoAllocateCell(BugCheckParameter2, v18, v9 >> 31, (__int64)&v26, &v25),
            v7 = v26,
            v13 = v20,
            v20 == -1) )
      {
        v13 = -1;
      }
      else
      {
        memmove(v26, v12, v15);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
        v12 = 0LL;
        if ( a4 == 1 )
          HvFreeCell(BugCheckParameter2, v9, v21, v22);
        v23 = a6;
        *a5 = (__int64)v7;
        v7 = 0LL;
        *v23 = v25;
        HvpGetCellContextReinitialize(&v25);
      }
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      if ( v7 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
    }
    else
    {
      v13 = v9;
      v16 = a6;
      *a5 = v11;
      *v16 = v27;
      HvpGetCellContextReinitialize(&v27);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v13;
}
