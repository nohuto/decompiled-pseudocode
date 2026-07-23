/*
 * XREFs of RtlSplay @ 0x1400C3880
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x1400C2E34 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400C34B8 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     RtlInsertElementGenericTableFull @ 0x1400C3680 (RtlInsertElementGenericTableFull.c)
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 *     RtlLookupElementGenericTable @ 0x1400C3810 (RtlLookupElementGenericTable.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400C3C94 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlEnumerateGenericTable @ 0x140126DC4 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401B8864 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x1401B8918 (FsRtlCheckNoSharedConflict.c)
 *     RtlLookupElementGenericTableFull @ 0x140213B60 (RtlLookupElementGenericTableFull.c)
 *     RtlInsertUnicodePrefix @ 0x1404AC45C (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x1404AC5B4 (RtlFindUnicodePrefix.c)
 *     PfxFindPrefix @ 0x140687E98 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140687F70 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *v4; // r8
  _RTL_SPLAY_LINKS *v5; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v7; // r8
  _RTL_SPLAY_LINKS *v8; // r8
  _RTL_SPLAY_LINKS **v9; // r8
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8
  _RTL_SPLAY_LINKS *v13; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rdx
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
        Parent->Parent = Links;
        Links->Parent = Links;
      }
      else if ( v3->LeftChild == Parent )
      {
        v4 = Links->RightChild;
        Parent->LeftChild = v4;
        if ( v4 )
          v4->Parent = Parent;
        v5 = Parent->RightChild;
        v3->LeftChild = v5;
        if ( v5 )
          v5->Parent = v3;
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
        Parent->Parent = Links;
        Parent->RightChild = v3;
        v3->Parent = Parent;
      }
      else
      {
        LeftChild = Links->LeftChild;
        v3->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = v3;
        v11 = Links->RightChild;
        Parent->LeftChild = v11;
        if ( v11 )
          v11->Parent = Parent;
        if ( v3->Parent == v3 )
        {
          Links->Parent = Links;
          Links->LeftChild = v3;
          v3->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
        }
        else
        {
          Links->Parent = v3->Parent;
          p_RightChild = &v3->Parent->LeftChild;
          if ( *p_RightChild != v3 )
            p_RightChild = &v3->Parent->RightChild;
          *p_RightChild = Links;
          Links->LeftChild = v3;
          v3->Parent = Links;
          Links->RightChild = Parent;
          Parent->Parent = Links;
        }
      }
    }
    else if ( v3 == Parent )
    {
      v13 = Links->LeftChild;
      Parent->RightChild = v13;
      if ( v13 )
        v13->Parent = Parent;
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->Parent = Links;
    }
    else if ( v3->RightChild == Parent )
    {
      v7 = Parent->LeftChild;
      v3->RightChild = v7;
      if ( v7 )
        v7->Parent = v3;
      v8 = Links->LeftChild;
      Parent->RightChild = v8;
      if ( v8 )
        v8->Parent = Parent;
      if ( v3->Parent == v3 )
      {
        Links->Parent = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Parent->LeftChild = v3;
        v3->Parent = Parent;
      }
      else
      {
        Links->Parent = v3->Parent;
        v9 = &v3->Parent->LeftChild;
        if ( *v9 != v3 )
          v9 = &v3->Parent->RightChild;
        *v9 = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Parent->LeftChild = v3;
        v3->Parent = Parent;
      }
    }
    else
    {
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
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Links->RightChild = v3;
        v3->Parent = Links;
      }
      else
      {
        Links->Parent = v3->Parent;
        v17 = &v3->Parent->LeftChild;
        if ( *v17 != v3 )
          v17 = &v3->Parent->RightChild;
        *v17 = Links;
        Links->LeftChild = Parent;
        Parent->Parent = Links;
        Links->RightChild = v3;
        v3->Parent = Links;
      }
    }
  }
  return Links;
}
