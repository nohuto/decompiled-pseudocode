/*
 * XREFs of PfxFindPrefix @ 0x1800CE3B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180061490 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x1800CE198 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800CE320 (ComputeNameLength.c)
 */

PPREFIX_TABLE_ENTRY __cdecl PfxFindPrefix(PPREFIX_TABLE PrefixTable, PSTRING FullName)
{
  CSHORT v4; // ax
  _PREFIX_TABLE *i; // rdi
  _PREFIX_TABLE *j; // rbx
  _PREFIX_TABLE_ENTRY *p_LeftChild; // rsi
  int v8; // eax
  _PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx

  v4 = ComputeNameLength(&FullName->Length);
  for ( i = (_PREFIX_TABLE *)PrefixTable->NextPrefixTree; i->NameLength > v4; i = (_PREFIX_TABLE *)i->NextPrefixTree )
    PrefixTable = i;
LABEL_12:
  if ( i->NameLength <= 0 )
    return 0LL;
  for ( j = i + 1; ; j = *(_PREFIX_TABLE **)&j[1].NodeTypeCode )
  {
    while ( 1 )
    {
      if ( !j )
      {
        PrefixTable = i;
        i = (_PREFIX_TABLE *)i->NextPrefixTree;
        goto LABEL_12;
      }
      p_LeftChild = (_PREFIX_TABLE_ENTRY *)&j[-1];
      v8 = CompareNamesCaseSensitive((unsigned __int16 *)j[1].NextPrefixTree, &FullName->Length);
      if ( v8 != 3 )
        break;
      j = (_PREFIX_TABLE *)j->NextPrefixTree;
    }
    if ( v8 )
      break;
  }
  if ( p_LeftChild->NodeTypeCode == 514 )
  {
    NextPrefixTree = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 514;
    p_LeftChild = (_PREFIX_TABLE_ENTRY *)&RtlSplay(&p_LeftChild->Links)[-1].LeftChild;
    p_LeftChild->NodeTypeCode = 513;
    PrefixTable->NextPrefixTree = p_LeftChild;
    p_LeftChild->NextPrefixTree = NextPrefixTree;
  }
  return p_LeftChild;
}
