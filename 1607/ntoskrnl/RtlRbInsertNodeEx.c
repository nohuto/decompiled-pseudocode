/*
 * XREFs of RtlRbInsertNodeEx @ 0x1400EAD30
 * Callers:
 *     MiBitmapsCachedEntryLengthChanged @ 0x14001B968 (MiBitmapsCachedEntryLengthChanged.c)
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14006BBEC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14006BF94 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiInsertSchedulingGroupQueue @ 0x140098E10 (KiInsertSchedulingGroupQueue.c)
 *     KiSetClockInterval @ 0x14009D6E4 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x1400B41F8 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400B475C (MiInvalidatePageFileBitmapsCache.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400B5034 (IoStartDiskIoAttributionForContext.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EA710 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiInsertTimer2IntoCollection @ 0x1400EB140 (KiInsertTimer2IntoCollection.c)
 *     MiInitializePagefileBitmapsCache @ 0x140143274 (MiInitializePagefileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14020F79C (PspJobIoRateVolumeEntryInsert.c)
 *     VmpFaultEntryInsert @ 0x140223CB4 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x1402240D0 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
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
