/*
 * XREFs of RtlRbInsertNodeEx @ 0x140034FA0
 * Callers:
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiSetClockInterval @ 0x140032C70 (KiSetClockInterval.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140034D90 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140035614 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400BA9EC (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400C39E4 (KiInsertSchedulingGroupQueue.c)
 *     MiRescanPageFileBitmapPortion @ 0x1400F4D64 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 *     MiInitializePagefileBitmapsCache @ 0x14013A068 (MiInitializePagefileBitmapsCache.c)
 *     VmpFaultEntryInsert @ 0x14020C3C8 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x14020C69C (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x14046CAE8 (EtwpSetProviderTraitsCommon.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  _RTL_BALANCED_NODE *v5; // r10
  _BOOL8 v6; // r11
  _RTL_BALANCED_NODE *v7; // rbx
  PRTL_BALANCED_NODE *v8; // rbx
  PRTL_BALANCED_NODE *v9; // rdi
  _RTL_BALANCED_NODE *v10; // r8
  BOOL v11; // r11d
  _BOOL8 v12; // r9
  PRTL_BALANCED_NODE *v13; // r11
  unsigned __int64 v14; // r8
  _RTL_BALANCED_NODE *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 ParentValue; // rsi

  Node->0 = 0uLL;
  if ( Parent )
  {
    Parent->Children[Right] = Node;
    LOBYTE(v4) = (unsigned __int8)Parent | 1;
    Node->ParentValue = (unsigned __int64)Parent | 1;
    if ( !Right && Parent == Tree->Min )
      Tree->Min = Node;
    if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
    {
      while ( 1 )
      {
        v5 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        v6 = v5->Children[0] != Parent;
        v4 = v5->Children[0] == Parent;
        v7 = v5->Children[v4];
        if ( !v7 || (*(_BYTE *)&v7->0 & 1) == 0 )
          break;
        *(_BYTE *)&Parent->0 &= ~1u;
        Node = v5;
        *(_BYTE *)&v7->0 &= ~1u;
        Parent = (PRTL_BALANCED_NODE)(v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( Parent )
        {
          *(_BYTE *)&v5->0 |= 1u;
          Right = v5 != Parent->Children[0];
          if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
            continue;
        }
        return v4;
      }
      if ( Right != v6 )
      {
        if ( (PRTL_BALANCED_NODE)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Parent )
          __fastfail(0x1Du);
        v8 = &Parent->Children[v5->Children[0] == Parent];
        if ( *v8 != Node )
          __fastfail(0x1Du);
        if ( v5->Children[v5->Children[0] != Parent] != Parent )
          __fastfail(0x1Du);
        v5->Children[v5->Children[0] != Parent] = Node;
        v9 = &Node->Children[v6];
        Node->ParentValue = (unsigned __int64)v5 | *(_DWORD *)&Node->0 & 3;
        v10 = *v9;
        if ( *v9 )
        {
          ParentValue = v10->ParentValue;
          if ( (PRTL_BALANCED_NODE)(ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Node )
            __fastfail(0x1Du);
          v10->ParentValue = (unsigned __int64)Parent | ParentValue & 3;
        }
        *v8 = v10;
        *v9 = Parent;
        Parent->ParentValue = (unsigned __int64)Node | *(_DWORD *)&Parent->0 & 3;
        Parent = Node;
      }
      v11 = !v6;
      if ( (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
        __fastfail(0x1Du);
      v12 = v11;
      v13 = &v5->Children[!v11];
      if ( *v13 != Parent )
        __fastfail(0x1Du);
      v14 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 )
      {
        if ( *(_RTL_BALANCED_NODE **)(v14 + 8) == v5 )
        {
          *(_QWORD *)(v14 + 8) = Parent;
        }
        else
        {
          if ( *(_RTL_BALANCED_NODE **)v14 != v5 )
            __fastfail(0x1Du);
          *(_QWORD *)v14 = Parent;
        }
      }
      else
      {
        if ( Tree->Root != v5 )
          __fastfail(0x1Du);
        Tree->Root = Parent;
      }
      Parent->ParentValue = v14 | *(_DWORD *)&Parent->0 & 3;
      v15 = Parent->Children[v12];
      if ( v15 )
      {
        v16 = v15->ParentValue;
        if ( (PRTL_BALANCED_NODE)(v16 & 0xFFFFFFFFFFFFFFFCuLL) != Parent )
          __fastfail(0x1Du);
        v15->ParentValue = (unsigned __int64)v5 | v16 & 3;
      }
      *v13 = v15;
      Parent->Children[v12] = v5;
      v4 = (unsigned __int64)Parent | *(_DWORD *)&v5->0 & 3;
      v5->ParentValue = v4;
      *(_BYTE *)&v5->0 |= 1u;
      *(_BYTE *)&Parent->0 &= ~1u;
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
