/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x14060A26C
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x14060A1DC (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     CmpKeyNodeStackEntryInitialize @ 0x140581D00 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCompareKeysByName @ 0x140606994 (CmpCompareKeysByName.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x14060A420 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14060A700 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x14060BD78 (CmpKeyNodeStackEntryCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int16 v6; // bx
  __int64 v7; // r14
  __int64 EntryAtLayerHeight; // rbp
  __int64 v9; // rax
  __int16 v10; // bx
  __int64 v11; // rbp
  __int16 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v6 = 0;
    if ( *(__int16 *)a1 >= 0 )
    {
      v7 = a1 + 8;
      do
      {
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v7, v6, a3, a4);
        if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
        {
          v9 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
          CmpKeyEnumStackEntryAdvance(v9);
          CmpKeyNodeStackEntryCleanup(EntryAtLayerHeight);
          CmpKeyNodeStackEntryInitialize((_DWORD *)EntryAtLayerHeight);
        }
        ++v6;
      }
      while ( v6 <= *(_WORD *)a1 );
    }
  }
  v10 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v11 = 0LL;
  v12 = -1;
  if ( v10 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v13 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    v14 = *(_QWORD *)(v13 + 120);
    if ( v14 && (!v11 || (int)CmpCompareKeysByName(*(_QWORD *)(v13 + 120), v11) < 0) )
    {
      v11 = v14;
      v12 = v10;
    }
    --v10;
  }
  while ( v10 >= 0 );
  if ( v11 )
  {
    for ( ; v12 >= 0; --v12 )
    {
      v17 = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
      v18 = *(_QWORD *)(v17 + 120);
      if ( v18 && (v18 == v11 || !(unsigned int)CmpCompareKeysByName(v18, v11)) )
      {
        v19 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, (unsigned __int16)v12, v15, v16);
        v20 = *(unsigned int *)(v17 + 112);
        v21 = *(_QWORD *)v17;
        *(_QWORD *)v19 = *(_QWORD *)v17;
        *(_DWORD *)(v19 + 8) = v20;
        *(_QWORD *)(v19 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v21 + 8))(v21, v20, v19 + 24);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v4;
}
