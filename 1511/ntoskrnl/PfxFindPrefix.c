/*
 * XREFs of PfxFindPrefix @ 0x1406487F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1400CE540 (RtlSplay.c)
 *     CompareNamesCaseSensitive @ 0x1406485F0 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x140648774 (ComputeNameLength.c)
 */

PPREFIX_TABLE_ENTRY __stdcall PfxFindPrefix(PPREFIX_TABLE PrefixTable, PSTRING FullName)
{
  CSHORT v4; // ax
  struct _PREFIX_TABLE *i; // rdi
  struct _PREFIX_TABLE *j; // rbx
  struct _PREFIX_TABLE_ENTRY *p_LeftChild; // rsi
  int v8; // eax
  struct _PREFIX_TABLE_ENTRY *NextPrefixTree; // rbx

  v4 = ComputeNameLength(&FullName->Length);
  for ( i = (struct _PREFIX_TABLE *)PrefixTable->NextPrefixTree;
        i->NameLength > v4;
        i = (struct _PREFIX_TABLE *)i->NextPrefixTree )
  {
    PrefixTable = i;
  }
LABEL_12:
  if ( i->NameLength <= 0 )
    return 0LL;
  for ( j = i + 1; ; j = *(struct _PREFIX_TABLE **)&j[1].NodeTypeCode )
  {
    while ( 1 )
    {
      if ( !j )
      {
        PrefixTable = i;
        i = (struct _PREFIX_TABLE *)i->NextPrefixTree;
        goto LABEL_12;
      }
      p_LeftChild = (struct _PREFIX_TABLE_ENTRY *)&j[-1];
      v8 = CompareNamesCaseSensitive((unsigned __int16 *)j[1].NextPrefixTree, &FullName->Length);
      if ( v8 != 3 )
        break;
      j = (struct _PREFIX_TABLE *)j->NextPrefixTree;
    }
    if ( v8 )
      break;
  }
  if ( p_LeftChild->NodeTypeCode == 514 )
  {
    NextPrefixTree = i->NextPrefixTree;
    i->NextPrefixTree = 0LL;
    i->NodeTypeCode = 514;
    p_LeftChild = (struct _PREFIX_TABLE_ENTRY *)&RtlSplay(&p_LeftChild->Links)[-1].LeftChild;
    p_LeftChild->NodeTypeCode = 513;
    PrefixTable->NextPrefixTree = p_LeftChild;
    p_LeftChild->NextPrefixTree = NextPrefixTree;
  }
  return p_LeftChild;
}
