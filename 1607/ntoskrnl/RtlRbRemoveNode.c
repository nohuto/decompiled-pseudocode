/*
 * XREFs of RtlRbRemoveNode @ 0x140030EA0
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x140019FE0 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14001B968 (MiBitmapsCachedEntryLengthChanged.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     PfSnNameRemove @ 0x140034610 (PfSnNameRemove.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14006BBEC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14006BF94 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiSetClockInterval @ 0x14009D6E4 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x1400B41F8 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400B475C (MiInvalidatePageFileBitmapsCache.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B4FE0 (IoStopDiskIoAttributionForContext.c)
 *     KiCheckForTimerExpiration @ 0x1400DA690 (KiCheckForTimerExpiration.c)
 *     KiRemoveTimer2 @ 0x1400F76D0 (KiRemoveTimer2.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14020F8E0 (PspJobIoRateVolumeEntryRemove.c)
 *     VmpFaultEntryRemove @ 0x140223D4C (VmpFaultEntryRemove.c)
 *     VmpRemoveMemoryRange @ 0x1402243CC (VmpRemoveMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040C914 (EtwpReleaseProviderTraitsReference.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rax
  _RTL_BALANCED_NODE *v3; // r8
  _RTL_BALANCED_NODE *v5; // r10
  _RTL_BALANCED_NODE *v6; // rcx
  _RTL_BALANCED_NODE *v7; // r9
  BOOL v8; // ebx
  _RTL_BALANCED_NODE *v9; // rax
  char v10; // r10
  __int64 v11; // rax
  _RTL_BALANCED_NODE *v12; // rdx
  _RTL_BALANCED_NODE **v13; // rcx
  unsigned __int64 ParentValue; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  _BOOL8 v19; // rax
  _BOOL8 v20; // rdi
  __int64 v21; // r10
  _RTL_BALANCED_NODE *v22; // r8
  unsigned __int64 v23; // rcx
  _RTL_BALANCED_NODE *v24; // rcx
  unsigned __int64 v25; // r8
  _RTL_BALANCED_NODE *v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // r8
  _RTL_BALANCED_NODE **v29; // rbx
  _RTL_BALANCED_NODE **v30; // rsi
  _RTL_BALANCED_NODE *v31; // r8
  unsigned __int64 v32; // r10
  _RTL_BALANCED_NODE **v33; // rdi
  _RTL_BALANCED_NODE *v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rbp

  v3 = Node->Children[0];
  v5 = Node->Children[1];
  if ( Node->Children[0] )
  {
    if ( v5 )
    {
      v6 = Node->Children[1];
      v7 = v6;
      v8 = 1;
      if ( v5->Children[0] )
      {
        v8 = 0;
        do
        {
          v7 = v6;
          v6 = v6->Children[0];
        }
        while ( v6->Children[0] );
      }
      v6->Children[0] = v3;
      ParentValue = v3->ParentValue;
      if ( (PRTL_BALANCED_NODE)(ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != Node )
        __fastfail(0x1Du);
      v3->ParentValue = (unsigned __int64)v6 | ParentValue & 3;
      v15 = v5->ParentValue;
      if ( (PRTL_BALANCED_NODE)(v15 & 0xFFFFFFFFFFFFFFFCuLL) != Node )
        __fastfail(0x1Du);
      v5->ParentValue = (unsigned __int64)v6 | v15 & 3;
      v3 = v6->Children[1];
      v16 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v6->Children[1] = v5;
      if ( (_RTL_BALANCED_NODE *)v16 != v7 )
        __fastfail(0x1Du);
      v10 = *(_BYTE *)&v6->0 & 1;
      v6->ParentValue = Node->ParentValue;
      v17 = Node->ParentValue;
      if ( v17 )
      {
        v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
        v19 = *(_QWORD *)(v18 + 8) == (_QWORD)Node;
        if ( *(PRTL_BALANCED_NODE *)(v18 + 8 * v19) != Node )
          __fastfail(0x1Du);
        *(_QWORD *)(v18 + 8 * v19) = v6;
      }
      else
      {
        if ( Tree->Root != Node )
          __fastfail(0x1Du);
        Tree->Root = v6;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v3 = Node->Children[1];
  }
  v6 = Node;
  v7 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !v7 )
  {
    if ( v3 )
      v3->ParentValue = 0LL;
    if ( Tree->Root != Node )
      __fastfail(0x1Du);
    Tree->Min = v3;
    Tree->Root = v3;
    return v2;
  }
  if ( v7->Children[1] == Node )
  {
    v8 = 1;
  }
  else
  {
    if ( v7->Children[0] != Node )
      __fastfail(0x1Du);
    v8 = 0;
    if ( Tree->Min == Node )
    {
      v9 = v3;
      if ( !v3 )
        v9 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      Tree->Min = v9;
    }
  }
  v10 = *(_BYTE *)&Node->0 & 1;
LABEL_16:
  LOBYTE(v2) = v8;
  v7->Children[v8] = v3;
  if ( v3 )
  {
    v2 = v3->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v2 != v6 )
      __fastfail(0x1Du);
    v3->ParentValue = (unsigned __int64)v7;
  }
  else if ( !v10 )
  {
    while ( 1 )
    {
      v11 = !v8;
      v12 = v7->Children[v11];
      v13 = &v7->Children[v11];
      if ( (*(_BYTE *)&v12->0 & 1) != 0 )
      {
        if ( (_RTL_BALANCED_NODE *)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
          __fastfail(0x1Du);
        v32 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v32 )
        {
          if ( *(_RTL_BALANCED_NODE **)(v32 + 8) == v7 )
          {
            *(_QWORD *)(v32 + 8) = v12;
          }
          else
          {
            if ( *(_RTL_BALANCED_NODE **)v32 != v7 )
              __fastfail(0x1Du);
            *(_QWORD *)v32 = v12;
          }
        }
        else
        {
          if ( Tree->Root != v7 )
            __fastfail(0x1Du);
          Tree->Root = v12;
        }
        v33 = &v12->Children[v8];
        v12->ParentValue = v32 | *(_DWORD *)&v12->0 & 3;
        v34 = *v33;
        if ( *v33 )
        {
          v35 = v34->ParentValue;
          if ( (_RTL_BALANCED_NODE *)(v35 & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
            __fastfail(0x1Du);
          v34->ParentValue = (unsigned __int64)v7 | v35 & 3;
        }
        *v13 = v34;
        *v33 = v7;
        v7->ParentValue = (unsigned __int64)v12 | *(_DWORD *)&v7->0 & 3;
        *(_BYTE *)&v12->0 &= ~1u;
        *(_BYTE *)&v7->0 |= 1u;
        v12 = *v13;
      }
      if ( v12->Children[0] && (*(_BYTE *)&v12->Children[0]->0 & 1) != 0 )
        break;
      v2 = (unsigned __int64)v12->Children[1];
      if ( v2 )
      {
        LOBYTE(v2) = *(_BYTE *)(v2 + 16);
        if ( (v2 & 1) != 0 )
          break;
      }
      if ( (*(_BYTE *)&v7->0 & 1) != 0 )
      {
        *(_BYTE *)&v7->0 &= ~1u;
        *(_BYTE *)&v12->0 |= 1u;
        return v2;
      }
      *(_BYTE *)&v12->0 |= 1u;
      v2 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v2 )
        return v2;
      v8 = *(_QWORD *)(v2 + 8) == (_QWORD)v7;
      v7 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    }
    v20 = v8;
    v21 = !v8;
    v22 = v12->Children[v21];
    if ( !v22 || (*(_BYTE *)&v22->0 & 1) == 0 )
    {
      v26 = v12->Children[v8];
      v27 = !v8;
      *(_BYTE *)&v26->0 &= ~1u;
      if ( (_RTL_BALANCED_NODE *)(v26->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
        __fastfail(0x1Du);
      v28 = v27;
      v29 = &v12->Children[v27 ^ 1LL];
      if ( *v29 != v26 )
        __fastfail(0x1Du);
      if ( v7->Children[v28] != v12 || (_RTL_BALANCED_NODE *)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      v7->Children[v28] = v26;
      v30 = &v26->Children[v28];
      v26->ParentValue = (unsigned __int64)v7 | *(_DWORD *)&v26->0 & 3;
      v31 = *v30;
      if ( *v30 )
      {
        v36 = v31->ParentValue;
        if ( (_RTL_BALANCED_NODE *)(v36 & 0xFFFFFFFFFFFFFFFCuLL) != v26 )
          __fastfail(0x1Du);
        v31->ParentValue = (unsigned __int64)v12 | v36 & 3;
      }
      *v29 = v31;
      v22 = v12;
      *v30 = v12;
      v12->ParentValue = (unsigned __int64)v26 | *(_DWORD *)&v12->0 & 3;
      v12 = v26;
    }
    *(_BYTE *)&v12->0 ^= (*(_BYTE *)&v7->0 ^ *(_BYTE *)&v12->0) & 1;
    *(_BYTE *)&v7->0 &= ~1u;
    *(_BYTE *)&v22->0 &= ~1u;
    if ( (_RTL_BALANCED_NODE *)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
      __fastfail(0x1Du);
    if ( v7->Children[v21] != v12 )
      __fastfail(0x1Du);
    v23 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v23 )
    {
      if ( *(_RTL_BALANCED_NODE **)(v23 + 8) == v7 )
      {
        *(_QWORD *)(v23 + 8) = v12;
      }
      else
      {
        if ( *(_RTL_BALANCED_NODE **)v23 != v7 )
          __fastfail(0x1Du);
        *(_QWORD *)v23 = v12;
      }
    }
    else
    {
      if ( Tree->Root != v7 )
        __fastfail(0x1Du);
      Tree->Root = v12;
    }
    v12->ParentValue = v23 | *(_DWORD *)&v12->0 & 3;
    v24 = v12->Children[v20];
    if ( v24 )
    {
      v25 = v24->ParentValue;
      if ( (_RTL_BALANCED_NODE *)(v25 & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
        __fastfail(0x1Du);
      v24->ParentValue = (unsigned __int64)v7 | v25 & 3;
    }
    v7->Children[v21] = v24;
    v12->Children[v20] = v7;
    v2 = (unsigned __int64)v12 | *(_DWORD *)&v7->0 & 3;
    v7->ParentValue = v2;
  }
  return v2;
}
