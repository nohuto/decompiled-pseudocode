/*
 * XREFs of RtlRbInsertNodeEx @ 0x1400F70F0
 * Callers:
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400F4BA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     VmpInsertMemoryRange @ 0x14025B908 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404D2F6C (EtwpSetProviderTraitsCommon.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  char v4; // r10
  unsigned __int64 v5; // rax
  _RTL_BALANCED_NODE *v6; // r8
  _BOOL8 v7; // r11
  _RTL_BALANCED_NODE *v8; // rbx
  PRTL_BALANCED_NODE *v9; // rbx
  PRTL_BALANCED_NODE *v10; // rdi
  _RTL_BALANCED_NODE *v11; // r10
  BOOL v12; // r11d
  _BOOL8 v13; // r10
  PRTL_BALANCED_NODE *v14; // r11
  unsigned __int64 v15; // r9
  _RTL_BALANCED_NODE *v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 ParentValue; // rsi

  v4 = Right;
  Node->0 = 0uLL;
  if ( Parent )
  {
    Parent->Children[Right] = Node;
    LOBYTE(v5) = (unsigned __int8)Parent | 1;
    Node->ParentValue = (unsigned __int64)Parent | 1;
    if ( !Right && Parent == Tree->Min )
      Tree->Min = Node;
    if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
    {
      while ( 1 )
      {
        v6 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        v7 = v6->Children[0] != Parent;
        v5 = v6->Children[0] == Parent;
        v8 = v6->Children[v5];
        if ( !v8 || (*(_BYTE *)&v8->0 & 1) == 0 )
          break;
        *(_BYTE *)&Parent->0 &= ~1u;
        Node = v6;
        *(_BYTE *)&v8->0 &= ~1u;
        Parent = (PRTL_BALANCED_NODE)(v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( Parent )
        {
          *(_BYTE *)&v6->0 |= 1u;
          v4 = v6 != Parent->Children[0];
          if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
            continue;
        }
        return v5;
      }
      if ( v4 != v7 )
      {
        if ( (PRTL_BALANCED_NODE)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Parent )
          __fastfail(0x1Du);
        v9 = &Parent->Children[v6->Children[0] == Parent];
        if ( *v9 != Node )
          __fastfail(0x1Du);
        if ( v6->Children[v6->Children[0] != Parent] != Parent )
          __fastfail(0x1Du);
        v6->Children[v6->Children[0] != Parent] = Node;
        v10 = &Node->Children[v7];
        Node->ParentValue = (unsigned __int64)v6 | *(_DWORD *)&Node->0 & 3;
        v11 = *v10;
        if ( *v10 )
        {
          ParentValue = v11->ParentValue;
          if ( (PRTL_BALANCED_NODE)(ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Node )
            __fastfail(0x1Du);
          v11->ParentValue = (unsigned __int64)Parent | ParentValue & 3;
        }
        *v9 = v11;
        *v10 = Parent;
        Parent->ParentValue = (unsigned __int64)Node | *(_DWORD *)&Parent->0 & 3;
        Parent = Node;
      }
      v12 = !v7;
      if ( (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      v13 = v12;
      v14 = &v6->Children[!v12];
      if ( *v14 != Parent )
        __fastfail(0x1Du);
      v15 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v15 )
      {
        if ( *(_RTL_BALANCED_NODE **)(v15 + 8) == v6 )
        {
          *(_QWORD *)(v15 + 8) = Parent;
        }
        else
        {
          if ( *(_RTL_BALANCED_NODE **)v15 != v6 )
            __fastfail(0x1Du);
          *(_QWORD *)v15 = Parent;
        }
      }
      else
      {
        if ( Tree->Root != v6 )
          __fastfail(0x1Du);
        Tree->Root = Parent;
      }
      Parent->ParentValue = v15 | *(_DWORD *)&Parent->0 & 3;
      v16 = Parent->Children[v13];
      if ( v16 )
      {
        v17 = v16->ParentValue;
        if ( (PRTL_BALANCED_NODE)(v17 & 0xFFFFFFFFFFFFFFFCuLL) != Parent )
          __fastfail(0x1Du);
        v16->ParentValue = (unsigned __int64)v6 | v17 & 3;
      }
      *v14 = v16;
      Parent->Children[v13] = v6;
      v5 = (unsigned __int64)Parent | *(_DWORD *)&v6->0 & 3;
      v6->ParentValue = v5;
      *(_BYTE *)&v6->0 |= 1u;
      *(_BYTE *)&Parent->0 &= ~1u;
    }
  }
  else
  {
    Tree->Root = Node;
    Tree->Min = Node;
    Node->ParentValue = 0LL;
  }
  return v5;
}
