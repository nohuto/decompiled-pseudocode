/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A114 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A77C (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14060A5A0 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackEntryStart @ 0x14060A5F8 (CmpKeyEnumStackEntryStart.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14060A700 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14060BD20 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStack @ 0x14060C020 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int64 v4; // rbx
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  _QWORD *v9; // r9
  __int16 i; // bx
  __int16 v11; // dx
  int EffectiveKeyNodeSemantics; // esi
  unsigned int *v13; // r9
  __int64 *v14; // r10

  if ( *a2 >= 2 )
  {
    LOWORD(v4) = *a2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, (__int64)(__int16)v4 << 7, 0x38364D43u);
    *(_QWORD *)(a1 + 344) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v4 > 0 )
    {
      v7 = 0LL;
      v4 = (unsigned __int16)v4;
      do
      {
        CmpKeyEnumStackEntryInitialize((void *)(v7 + *(_QWORD *)(a1 + 344)));
        v7 += 128LL;
        --v4;
      }
      while ( v4 );
    }
  }
  *(_WORD *)a1 = *a2;
  result = CmpStartKeyNodeStack(a1 + 8);
  if ( (int)result >= 0 )
  {
    for ( i = *(_WORD *)a1; i >= 0; --i )
    {
      CmpKeyNodeStackGetEntryAtLayerHeight(a2, (unsigned __int16)i, v8, v9);
      CmpKeyEnumStackGetEntryAtLayerHeight(a1, v11);
      if ( v9[2] )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*v9);
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        CmpKeyEnumStackEntryStart(v14, v13);
        if ( (EffectiveKeyNodeSemantics & 0xFFFFFFFD) != 0 )
          break;
      }
    }
    return 0LL;
  }
  return result;
}
