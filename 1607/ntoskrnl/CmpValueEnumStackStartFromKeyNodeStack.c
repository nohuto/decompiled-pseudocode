/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5B60
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B7CC (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14060B698 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14060BD20 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // edi
  __int16 v5; // bx
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int16 v10; // bx
  __int64 EntryAtLayerHeight; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9

  v2 = 0;
  if ( *a2 >= 2 )
  {
    v5 = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v5 > 0 )
    {
      v7 = 0LL;
      v8 = (unsigned __int16)v5;
      do
      {
        v9 = v7 + *(_QWORD *)(a1 + 80);
        memset((void *)v9, 0, 0x20uLL);
        v7 += 32LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)(v9 + 16) = -1;
        *(_WORD *)(v9 + 20) = 0;
        --v8;
      }
      while ( v8 );
    }
  }
  v10 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v10 >= 0; --v10 )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v10);
    v15 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v12, v13, v14);
    v16 = v15;
    if ( v15[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v15) == 1 )
        break;
      if ( (*(_BYTE *)(v17 + 2) & 0x40) == 0 && *(_DWORD *)(v17 + 36) )
      {
        *(_QWORD *)EntryAtLayerHeight = v19;
        *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v17 + 36);
        *(_QWORD *)(EntryAtLayerHeight + 8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v19 + 8))(
                                                v18,
                                                *(unsigned int *)(v17 + 40),
                                                EntryAtLayerHeight + 16);
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v16) )
        break;
    }
  }
  return v2;
}
