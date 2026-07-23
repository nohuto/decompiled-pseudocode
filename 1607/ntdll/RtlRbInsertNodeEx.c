/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001BC10
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001C590 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     EtwpInsertRegistration @ 0x18002A85C (EtwpInsertRegistration.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031800 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlpHpSegPageRangeShrink @ 0x18003E91C (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18006E5F8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  _RTL_BALANCED_NODE *v6; // rcx
  _BOOL8 v7; // r11
  _BOOL8 v8; // rdi
  _RTL_BALANCED_NODE *v9; // rsi
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r11
  _RTL_BALANCED_NODE *v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 ParentValue; // rbx

  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  if ( Parent )
  {
    Parent->Children[Right] = Node;
    LOBYTE(v4) = (unsigned __int8)Parent | 1;
    Node->ParentValue = (unsigned __int64)Parent | 1;
    if ( !Right && Parent == Tree->Min )
      Tree->Min = Node;
    while ( (*(_BYTE *)&Parent->0 & 1) != 0 )
    {
      v6 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v7 = v6->Children[0] != Parent;
      v4 = (unsigned __int64)v6->Children[v6->Children[0] == Parent];
      if ( !v4 || (*(_BYTE *)(v4 + 16) & 1) == 0 )
      {
        if ( Right != v7 )
        {
          if ( (PRTL_BALANCED_NODE)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Parent )
            __fastfail(0x1Du);
          v8 = v6->Children[0] == Parent;
          if ( Parent->Children[v8] != Node )
            __fastfail(0x1Du);
          if ( v6->Children[v6->Children[0] != Parent] != Parent )
            __fastfail(0x1Du);
          v6->Children[v6->Children[0] != Parent] = Node;
          Node->ParentValue &= 3uLL;
          Node->ParentValue |= (unsigned __int64)v6;
          v9 = Node->Children[v7];
          if ( v9 )
          {
            ParentValue = v9->ParentValue;
            if ( (PRTL_BALANCED_NODE)(ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Node )
              __fastfail(0x1Du);
            v9->ParentValue = (unsigned __int64)Parent | ParentValue & 3;
          }
          Parent->Children[v8] = v9;
          Node->Children[v7] = Parent;
          Parent->ParentValue &= 3uLL;
          Parent->ParentValue |= (unsigned __int64)Node;
          Parent = Node;
        }
        v10 = (unsigned int)v7 ^ 1;
        if ( (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
          __fastfail(0x1Du);
        v11 = (unsigned int)v10;
        v12 = v10 ^ 1;
        if ( v6->Children[v12] != Parent )
          __fastfail(0x1Du);
        v4 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v4 )
        {
          if ( *(_RTL_BALANCED_NODE **)(v4 + 8) == v6 )
          {
            *(_QWORD *)(v4 + 8) = Parent;
          }
          else
          {
            if ( *(_RTL_BALANCED_NODE **)v4 != v6 )
              __fastfail(0x1Du);
            *(_QWORD *)v4 = Parent;
          }
        }
        else
        {
          if ( Tree->Root != v6 )
            __fastfail(0x1Du);
          Tree->Root = Parent;
        }
        Parent->ParentValue &= 3uLL;
        Parent->ParentValue |= v4;
        v13 = Parent->Children[v11];
        if ( v13 )
        {
          v14 = v13->ParentValue;
          LOBYTE(v4) = v14 & 0xFC;
          if ( (PRTL_BALANCED_NODE)(v14 & 0xFFFFFFFFFFFFFFFCuLL) != Parent )
            __fastfail(0x1Du);
          v13->ParentValue = (unsigned __int64)v6 | v14 & 3;
        }
        v6->Children[v12] = v13;
        Parent->Children[v11] = v6;
        v6->ParentValue &= 3uLL;
        v6->ParentValue |= (unsigned __int64)Parent;
        *(_BYTE *)&v6->0 |= 1u;
        *(_BYTE *)&Parent->0 &= ~1u;
        return v4;
      }
      *(_BYTE *)&Parent->0 &= ~1u;
      Node = v6;
      *(_BYTE *)(v4 + 16) &= ~1u;
      Parent = (PRTL_BALANCED_NODE)(v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !Parent )
        return v4;
      *(_BYTE *)&v6->0 |= 1u;
      Right = v6 != Parent->Children[0];
    }
  }
  else
  {
    Tree->Root = Node;
    Tree->Min = Node;
    Node->ParentValue = 0LL;
  }
  return v4;
}
