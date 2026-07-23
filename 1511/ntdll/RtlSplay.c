/*
 * XREFs of RtlSplay @ 0x18006D740
 * Callers:
 *     RtlEnumerateGenericTable @ 0x18006D390 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x18006D530 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x18006D650 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x18006D950 (RtlDelete.c)
 *     RtlpTpIoLookup @ 0x18008DBE0 (RtlpTpIoLookup.c)
 *     PfxFindPrefix @ 0x1800D69B0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800D6AB0 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800E3CB0 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v5; // r8
  _RTL_SPLAY_LINKS *v6; // r8
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v8; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS *v12; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS **v14; // r8
  _RTL_SPLAY_LINKS *v15; // r8
  _RTL_SPLAY_LINKS *v16; // r8
  _RTL_SPLAY_LINKS **v17; // r8

  while ( Links->Parent != Links )
  {
    Parent = Links->Parent;
    v3 = Links->Parent->Parent;
    if ( Links->Parent->LeftChild == Links )
    {
      if ( v3 == Parent )
      {
        RightChild = Links->RightChild;
        Parent->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = Parent;
        Links->RightChild = Parent;
LABEL_8:
        Parent->Parent = Links;
        Links->Parent = Links;
      }
      else if ( v3->LeftChild == Parent )
      {
        v5 = Links->RightChild;
        Parent->LeftChild = v5;
        if ( v5 )
          v5->Parent = Parent;
        v6 = Parent->RightChild;
        v3->LeftChild = v6;
        if ( v6 )
          v6->Parent = v3;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          p_LeftChild = &v3->Parent->LeftChild;
          if ( *p_LeftChild != v3 )
            p_LeftChild = &v3->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = Parent;
        Parent->RightChild = v3;
LABEL_18:
        Parent->Parent = Links;
        v3->Parent = Parent;
      }
      else
      {
        LeftChild = Links->LeftChild;
        v3->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = v3;
        v8 = Links->RightChild;
        Parent->LeftChild = v8;
        if ( v8 )
          v8->Parent = Parent;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          p_RightChild = &v3->Parent->LeftChild;
          if ( *p_RightChild != v3 )
            p_RightChild = &v3->Parent->RightChild;
          *p_RightChild = Links;
        }
        Links->LeftChild = v3;
        v3->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
    else
    {
      if ( v3 == Parent )
      {
        v4 = Links->LeftChild;
        Parent->RightChild = v4;
        if ( v4 )
          v4->Parent = Parent;
        Links->LeftChild = Parent;
        goto LABEL_8;
      }
      if ( v3->RightChild == Parent )
      {
        v11 = Parent->LeftChild;
        v3->RightChild = v11;
        if ( v11 )
          v11->Parent = v3;
        v12 = Links->LeftChild;
        Parent->RightChild = v12;
        if ( v12 )
          v12->Parent = Parent;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          v14 = &v3->Parent->LeftChild;
          if ( *v14 != v3 )
            v14 = &v3->Parent->RightChild;
          *v14 = Links;
        }
        Links->LeftChild = Parent;
        Parent->LeftChild = v3;
        goto LABEL_18;
      }
      v15 = Links->LeftChild;
      Parent->RightChild = v15;
      if ( v15 )
        v15->Parent = Parent;
      v16 = Links->RightChild;
      v3->LeftChild = v16;
      if ( v16 )
        v16->Parent = v3;
      if ( v3->Parent == v3 )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = v3->Parent;
        v17 = &v3->Parent->LeftChild;
        if ( *v17 != v3 )
          v17 = &v3->Parent->RightChild;
        *v17 = Links;
      }
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->RightChild = v3;
      v3->Parent = Links;
    }
  }
  return Links;
}
