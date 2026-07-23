/*
 * XREFs of RtlRemoveUnicodePrefix @ 0x140520B78
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x140105918 (RtlDelete.c)
 */

void __stdcall RtlRemoveUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  int NodeTypeCode; // eax
  _UNICODE_PREFIX_TABLE_ENTRY *v3; // r8
  _RTL_SPLAY_LINKS *Parent; // rax
  RTL_SPLAY_LINKS *j; // rbx
  RTL_SPLAY_LINKS *v6; // rbx
  PRTL_SPLAY_LINKS v7; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  PRTL_SPLAY_LINKS v9; // rdx
  _RTL_SPLAY_LINKS *v10; // rdx
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS **k; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *CaseMatch; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *v14; // rax
  _UNICODE_PREFIX_TABLE_ENTRY **i; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *v16; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY **m; // rax
  RTL_SPLAY_LINKS *p_Links; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *v19; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *n; // r8
  _RTL_SPLAY_LINKS *v21; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rdx

  PrefixTable->LastNextEntry = 0LL;
  NodeTypeCode = PrefixTableEntry->NodeTypeCode;
  if ( NodeTypeCode >= 2049 )
  {
    if ( NodeTypeCode > 2050 )
    {
      if ( NodeTypeCode == 2051 )
      {
        CaseMatch = PrefixTableEntry->CaseMatch;
        v14 = CaseMatch;
        for ( i = &CaseMatch->CaseMatch; *i != PrefixTableEntry; i = &(*i)->CaseMatch )
          v14 = *i;
        v14->CaseMatch = CaseMatch;
      }
    }
    else
    {
      v3 = PrefixTableEntry->CaseMatch;
      if ( v3 == PrefixTableEntry )
      {
        Parent = PrefixTableEntry->Links.Parent;
        for ( j = &PrefixTableEntry->Links; Parent != j; Parent = Parent->Parent )
          j = Parent;
        v6 = j - 1;
        v7 = RtlDelete(&PrefixTableEntry->Links);
        if ( v7 )
        {
          if ( &v6[1] != v7 )
          {
            LeftChild = v6->LeftChild;
            v9 = v7 - 1;
            while ( LeftChild->LeftChild != v6 )
              LeftChild = LeftChild->LeftChild;
            LOWORD(v9->Parent) = 2049;
            LeftChild->LeftChild = v9;
            v9->LeftChild = v6->LeftChild;
            v6->LeftChild = 0LL;
            LOWORD(v6->Parent) = 2050;
          }
        }
        else
        {
          v10 = v6->LeftChild;
          v11 = v10;
          for ( k = &v10->LeftChild; *k != v6; k = &(*k)->LeftChild )
            v11 = *k;
          v11->LeftChild = v10;
        }
      }
      else
      {
        v16 = PrefixTableEntry->CaseMatch;
        for ( m = &v3->CaseMatch; *m != PrefixTableEntry; m = &(*m)->CaseMatch )
          v16 = *m;
        v16->CaseMatch = v3;
        v16->NodeTypeCode = PrefixTableEntry->NodeTypeCode;
        v16->NextPrefixTree = PrefixTableEntry->NextPrefixTree;
        p_Links = &v16->Links;
        v16->Links = PrefixTableEntry->Links;
        v19 = (_UNICODE_PREFIX_TABLE_ENTRY *)PrefixTableEntry->Links.Parent;
        if ( v19 == (_UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
        {
          p_Links->Parent = p_Links;
          for ( n = PrefixTableEntry->NextPrefixTree; n->NextPrefixTree != PrefixTableEntry; n = n->NextPrefixTree )
            ;
          n->NextPrefixTree = v16;
        }
        else if ( v19->NextPrefixTree == (_UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
        {
          v19->NextPrefixTree = (_UNICODE_PREFIX_TABLE_ENTRY *)p_Links;
        }
        else
        {
          v19->CaseMatch = (_UNICODE_PREFIX_TABLE_ENTRY *)p_Links;
        }
        v21 = v16->Links.LeftChild;
        if ( v21 )
          v21->Parent = p_Links;
        RightChild = v16->Links.RightChild;
        if ( RightChild )
          RightChild->Parent = p_Links;
      }
    }
  }
}
