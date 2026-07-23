/*
 * XREFs of RtlRbRemoveNode @ 0x1400F6290
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D3690 (KiRemoveThreadFromScbQueue.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400ECD50 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400F4BA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     PfSnNameRemove @ 0x140112FB8 (PfSnNameRemove.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1401217F0 (KeSetSchedulingGroupRankBias.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 *     VmpRemoveMemoryRange @ 0x14025BC74 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1404CED94 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404D2F6C (EtwpSetProviderTraitsCommon.c)
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
  _BOOL8 v14; // rdi
  __int64 v15; // r10
  _RTL_BALANCED_NODE *v16; // r8
  unsigned __int64 v17; // rcx
  _RTL_BALANCED_NODE *v18; // rcx
  unsigned __int64 ParentValue; // rdi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  _BOOL8 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r10
  _RTL_BALANCED_NODE **v27; // rdi
  _RTL_BALANCED_NODE *v28; // r10
  unsigned __int64 v29; // r8
  _RTL_BALANCED_NODE *v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // r8
  _RTL_BALANCED_NODE **v33; // rbx
  _RTL_BALANCED_NODE **v34; // rsi
  _RTL_BALANCED_NODE *v35; // r8
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
      v20 = v5->ParentValue;
      if ( (PRTL_BALANCED_NODE)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != Node )
        __fastfail(0x1Du);
      v5->ParentValue = (unsigned __int64)v6 | v20 & 3;
      v3 = v6->Children[1];
      v21 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v6->Children[1] = v5;
      if ( (_RTL_BALANCED_NODE *)v21 != v7 )
        __fastfail(0x1Du);
      v10 = *(_BYTE *)&v6->0 & 1;
      v6->ParentValue = Node->ParentValue;
      v22 = Node->ParentValue;
      if ( v22 )
      {
        v23 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
        v24 = *(_QWORD *)(v23 + 8) == (_QWORD)Node;
        if ( *(PRTL_BALANCED_NODE *)(v23 + 8 * v24) != Node )
          __fastfail(0x1Du);
        *(_QWORD *)(v23 + 8 * v24) = v6;
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
        v26 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v26 )
        {
          if ( *(_RTL_BALANCED_NODE **)(v26 + 8) == v7 )
          {
            *(_QWORD *)(v26 + 8) = v12;
          }
          else
          {
            if ( *(_RTL_BALANCED_NODE **)v26 != v7 )
              __fastfail(0x1Du);
            *(_QWORD *)v26 = v12;
          }
        }
        else
        {
          if ( Tree->Root != v7 )
            __fastfail(0x1Du);
          Tree->Root = v12;
        }
        v27 = &v12->Children[v8];
        v12->ParentValue = v26 | *(_DWORD *)&v12->0 & 3;
        v28 = *v27;
        if ( *v27 )
        {
          v29 = v28->ParentValue;
          if ( (_RTL_BALANCED_NODE *)(v29 & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
            __fastfail(0x1Du);
          v28->ParentValue = (unsigned __int64)v7 | v29 & 3;
        }
        *v13 = v28;
        *v27 = v7;
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
    v14 = v8;
    v15 = !v8;
    v16 = v12->Children[v15];
    if ( !v16 || (*(_BYTE *)&v16->0 & 1) == 0 )
    {
      v30 = v12->Children[v8];
      v31 = !v8;
      *(_BYTE *)&v30->0 &= ~1u;
      if ( (_RTL_BALANCED_NODE *)(v30->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
        __fastfail(0x1Du);
      v32 = v31;
      v33 = &v12->Children[v31 ^ 1LL];
      if ( *v33 != v30 )
        __fastfail(0x1Du);
      if ( v7->Children[v32] != v12 || (_RTL_BALANCED_NODE *)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      v7->Children[v32] = v30;
      v34 = &v30->Children[v32];
      v30->ParentValue = (unsigned __int64)v7 | *(_DWORD *)&v30->0 & 3;
      v35 = *v34;
      if ( *v34 )
      {
        v36 = v35->ParentValue;
        if ( (_RTL_BALANCED_NODE *)(v36 & 0xFFFFFFFFFFFFFFFCuLL) != v30 )
          __fastfail(0x1Du);
        v35->ParentValue = (unsigned __int64)v12 | v36 & 3;
      }
      *v33 = v35;
      v16 = v12;
      *v34 = v12;
      v12->ParentValue = (unsigned __int64)v30 | *(_DWORD *)&v12->0 & 3;
      v12 = v30;
    }
    *(_BYTE *)&v12->0 ^= (*(_BYTE *)&v7->0 ^ *(_BYTE *)&v12->0) & 1;
    *(_BYTE *)&v7->0 &= ~1u;
    *(_BYTE *)&v16->0 &= ~1u;
    if ( (_RTL_BALANCED_NODE *)(v12->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
      __fastfail(0x1Du);
    if ( v7->Children[v15] != v12 )
      __fastfail(0x1Du);
    v17 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v17 )
    {
      if ( *(_RTL_BALANCED_NODE **)(v17 + 8) == v7 )
      {
        *(_QWORD *)(v17 + 8) = v12;
      }
      else
      {
        if ( *(_RTL_BALANCED_NODE **)v17 != v7 )
          __fastfail(0x1Du);
        *(_QWORD *)v17 = v12;
      }
    }
    else
    {
      if ( Tree->Root != v7 )
        __fastfail(0x1Du);
      Tree->Root = v12;
    }
    v12->ParentValue = v17 | *(_DWORD *)&v12->0 & 3;
    v18 = v12->Children[v14];
    if ( v18 )
    {
      v25 = v18->ParentValue;
      if ( (_RTL_BALANCED_NODE *)(v25 & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
        __fastfail(0x1Du);
      v18->ParentValue = (unsigned __int64)v7 | v25 & 3;
    }
    v7->Children[v15] = v18;
    v12->Children[v14] = v7;
    v2 = (unsigned __int64)v12 | *(_DWORD *)&v7->0 & 3;
    v7->ParentValue = v2;
  }
  return v2;
}
