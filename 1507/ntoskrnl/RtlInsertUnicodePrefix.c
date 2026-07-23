/*
 * XREFs of RtlInsertUnicodePrefix @ 0x140520760
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x140105B70 (RtlSplay.c)
 *     CompareUnicodeStrings @ 0x1405209C8 (CompareUnicodeStrings.c)
 *     ComputeUnicodeNameLength @ 0x140520B4C (ComputeUnicodeNameLength.c)
 */

BOOLEAN __stdcall RtlInsertUnicodePrefix(
        PUNICODE_PREFIX_TABLE PrefixTable,
        PUNICODE_STRING Prefix,
        PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT v6; // ax
  __int64 v7; // r8
  _RTL_SPLAY_LINKS *v8; // r14
  PUNICODE_PREFIX_TABLE_ENTRY i; // rsi
  PUNICODE_STRING Parent; // rcx
  PUNICODE_PREFIX_TABLE_ENTRY v11; // rdi
  int v12; // eax
  _RTL_SPLAY_LINKS *LeftChild; // rax
  RTL_SPLAY_LINKS *p_Links; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx
  _UNICODE_PREFIX_TABLE_ENTRY *v16; // rax
  PUNICODE_PREFIX_TABLE_ENTRY v18; // rbp

  v6 = ComputeUnicodeNameLength(Prefix);
  *(_WORD *)(v7 + 2) = v6;
  v8 = (_RTL_SPLAY_LINKS *)(v7 + 24);
  *(_QWORD *)(v7 + 48) = Prefix;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 24) = v7 + 24;
  for ( i = PrefixTable->NextPrefixTree; i->NameLength > v6; i = i->NextPrefixTree )
    PrefixTable = (PUNICODE_PREFIX_TABLE)i;
  if ( i->NameLength == v6 )
  {
    Parent = i->Prefix;
    v11 = i;
    while ( 1 )
    {
      v12 = CompareUnicodeStrings(Parent, Prefix, 0LL);
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        LeftChild = v11->Links.LeftChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          p_Links = &v11->Links;
          PrefixTableEntry->NodeTypeCode = 2050;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          v11->Links.LeftChild = v8;
LABEL_10:
          v8->Parent = p_Links;
          goto LABEL_11;
        }
      }
      else
      {
        LeftChild = v11->Links.RightChild;
        if ( !LeftChild )
        {
          PrefixTableEntry->NextPrefixTree = 0LL;
          p_Links = &v11->Links;
          PrefixTableEntry->CaseMatch = PrefixTableEntry;
          PrefixTableEntry->NodeTypeCode = 2050;
          v11->Links.RightChild = v8;
          goto LABEL_10;
        }
      }
      v11 = (PUNICODE_PREFIX_TABLE_ENTRY)&LeftChild[-1];
      Parent = (PUNICODE_STRING)LeftChild[1].Parent;
    }
    v18 = v11;
    do
    {
      if ( (unsigned int)CompareUnicodeStrings(v18->Prefix, Prefix, 0xFFFFFFFFLL) == 2 )
        return 0;
      v18 = v18->CaseMatch;
    }
    while ( v18 != v11 );
    PrefixTableEntry->NextPrefixTree = 0LL;
    PrefixTableEntry->NodeTypeCode = 2051;
    PrefixTableEntry->CaseMatch = v11->CaseMatch;
    v11->CaseMatch = PrefixTableEntry;
LABEL_11:
    NextPrefixTree = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 2050;
    v16 = (_UNICODE_PREFIX_TABLE_ENTRY *)&RtlSplay(&v11->Links)[-1];
    v16->NodeTypeCode = 2049;
    PrefixTable->NextPrefixTree = v16;
    v16->NextPrefixTree = NextPrefixTree;
  }
  else
  {
    PrefixTable->NextPrefixTree = PrefixTableEntry;
    *(_WORD *)v7 = 2049;
    *(_QWORD *)(v7 + 8) = i;
    *(_QWORD *)(v7 + 16) = PrefixTableEntry;
  }
  return 1;
}
