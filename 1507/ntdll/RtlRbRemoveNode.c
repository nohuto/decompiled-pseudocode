/*
 * XREFs of RtlRbRemoveNode @ 0x1800280B0
 * Callers:
 *     EtwpRemoveRegistrationFromTable @ 0x18000E484 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsChunkCoalesce @ 0x180027E80 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x180028560 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003795C (RtlpHpSegPageRangeCoalesce.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800663E8 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVirtLargeTreeFind @ 0x1800EB55C (RtlpHpVirtLargeTreeFind.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rax
  _RTL_BALANCED_NODE *v3; // r8
  _RTL_BALANCED_NODE *v5; // r9
  _RTL_BALANCED_NODE *v6; // r11
  _RTL_BALANCED_NODE *v7; // rcx
  unsigned int v8; // r10d
  char v9; // r9
  unsigned __int64 ParentValue; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  _BOOL8 v15; // rax
  _RTL_BALANCED_NODE *v16; // rax
  __int64 v17; // rax
  _RTL_BALANCED_NODE *v18; // rdx
  _RTL_BALANCED_NODE **v19; // r8
  __int64 v20; // r11
  __int64 v21; // r9
  _RTL_BALANCED_NODE *v22; // r8
  _RTL_BALANCED_NODE *v23; // r8
  bool v24; // zf
  _RTL_BALANCED_NODE *v25; // rbx
  __int64 v26; // r10
  _RTL_BALANCED_NODE **v27; // rsi
  _RTL_BALANCED_NODE **v28; // r10
  _RTL_BALANCED_NODE *v29; // r8
  unsigned __int64 v30; // rax
  _RTL_BALANCED_NODE **v31; // rbx
  _RTL_BALANCED_NODE *v32; // r11
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rbp

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
      v11 = v5->ParentValue;
      if ( (PRTL_BALANCED_NODE)(v11 & 0xFFFFFFFFFFFFFFFCuLL) != Node )
        __fastfail(0x1Du);
      v5->ParentValue = (unsigned __int64)v6 | v11 & 3;
      v3 = v6->Children[1];
      v12 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v6->Children[1] = v5;
      if ( (_RTL_BALANCED_NODE *)v12 != v7 )
        __fastfail(0x1Du);
      v9 = *(_BYTE *)&v6->0 & 1;
      v6->ParentValue = Node->ParentValue;
      v13 = Node->ParentValue;
      if ( v13 )
      {
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        v15 = *(_QWORD *)(v14 + 8) == (_QWORD)Node;
        if ( *(PRTL_BALANCED_NODE *)(v14 + 8 * v15) != Node )
          __fastfail(0x1Du);
        *(_QWORD *)(v14 + 8 * v15) = v6;
      }
      else
      {
        if ( Tree->Root != Node )
          __fastfail(0x1Du);
        Tree->Root = v6;
      }
      goto LABEL_7;
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
      v16 = v3;
      if ( !v3 )
        v16 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      Tree->Min = v16;
    }
  }
  v9 = *(_BYTE *)&Node->0 & 1;
LABEL_7:
  LOBYTE(v2) = v8;
  v7->Children[v8] = v3;
  if ( v3 )
  {
    v2 = v3->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v2 != v6 )
      __fastfail(0x1Du);
    v3->ParentValue = (unsigned __int64)v7;
  }
  else if ( !v9 )
  {
    while ( 1 )
    {
      v17 = v8 ^ 1LL;
      v18 = v7->Children[v17];
      v19 = &v7->Children[v17];
      if ( (*(_BYTE *)&v18->0 & 1) != 0 )
      {
        if ( (_RTL_BALANCED_NODE *)(v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
          __fastfail(0x1Du);
        v30 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v30 )
        {
          if ( *(_RTL_BALANCED_NODE **)(v30 + 8) == v7 )
          {
            *(_QWORD *)(v30 + 8) = v18;
          }
          else
          {
            if ( *(_RTL_BALANCED_NODE **)v30 != v7 )
              __fastfail(0x1Du);
            *(_QWORD *)v30 = v18;
          }
        }
        else
        {
          if ( Tree->Root != v7 )
            __fastfail(0x1Du);
          Tree->Root = v18;
        }
        v18->ParentValue &= 3uLL;
        v31 = &v18->Children[v8];
        v18->ParentValue |= v30;
        v32 = *v31;
        if ( *v31 )
        {
          v33 = v32->ParentValue;
          if ( (_RTL_BALANCED_NODE *)(v33 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
            __fastfail(0x1Du);
          v32->ParentValue = (unsigned __int64)v7 | v33 & 3;
        }
        *v19 = v32;
        *v31 = v7;
        v7->ParentValue &= 3uLL;
        v7->ParentValue |= (unsigned __int64)v18;
        *(_BYTE *)&v18->0 &= ~1u;
        *(_BYTE *)&v7->0 |= 1u;
        v18 = *v19;
      }
      if ( v18->Children[0] && (*(_BYTE *)&v18->Children[0]->0 & 1) != 0 )
        break;
      v2 = (unsigned __int64)v18->Children[1];
      if ( v2 )
      {
        if ( (*(_BYTE *)(v2 + 16) & 1) != 0 )
          break;
      }
      if ( (*(_BYTE *)&v7->0 & 1) != 0 )
      {
        *(_BYTE *)&v7->0 &= ~1u;
        *(_BYTE *)&v18->0 |= 1u;
        return v2;
      }
      *(_BYTE *)&v18->0 |= 1u;
      v2 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v2 )
        return v2;
      v24 = *(_QWORD *)(v2 + 8) == (_QWORD)v7;
      v7 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v8 = v24;
    }
    v20 = v8;
    v21 = v8 ^ 1LL;
    v22 = v18->Children[v21];
    if ( !v22 || (*(_BYTE *)&v22->0 & 1) == 0 )
    {
      v25 = v18->Children[v8];
      v26 = v8 ^ 1;
      *(_BYTE *)&v25->0 &= ~1u;
      if ( (_RTL_BALANCED_NODE *)(v25->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      v27 = &v18->Children[(unsigned int)v26 ^ 1LL];
      if ( *v27 != v25 )
        __fastfail(0x1Du);
      if ( v7->Children[v26] != v18 || (_RTL_BALANCED_NODE *)(v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      v7->Children[v26] = v25;
      v28 = &v25->Children[v26];
      v25->ParentValue &= 3uLL;
      v25->ParentValue |= (unsigned __int64)v7;
      v29 = *v28;
      if ( *v28 )
      {
        v35 = v29->ParentValue;
        if ( (_RTL_BALANCED_NODE *)(v35 & 0xFFFFFFFFFFFFFFFCuLL) != v25 )
          __fastfail(0x1Du);
        v29->ParentValue = (unsigned __int64)v18 | v35 & 3;
      }
      *v27 = v29;
      v22 = v18;
      *v28 = v18;
      v18->ParentValue &= 3uLL;
      v18->ParentValue |= (unsigned __int64)v25;
      v18 = v25;
    }
    *(_BYTE *)&v18->0 ^= (*(_BYTE *)&v7->0 ^ *(_BYTE *)&v18->0) & 1;
    *(_BYTE *)&v7->0 &= ~1u;
    *(_BYTE *)&v22->0 &= ~1u;
    if ( (_RTL_BALANCED_NODE *)(v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
      __fastfail(0x1Du);
    if ( v7->Children[v21] != v18 )
      __fastfail(0x1Du);
    v2 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v2 )
    {
      if ( *(_RTL_BALANCED_NODE **)(v2 + 8) == v7 )
      {
        *(_QWORD *)(v2 + 8) = v18;
      }
      else
      {
        if ( *(_RTL_BALANCED_NODE **)v2 != v7 )
          __fastfail(0x1Du);
        *(_QWORD *)v2 = v18;
      }
    }
    else
    {
      if ( Tree->Root != v7 )
        __fastfail(0x1Du);
      Tree->Root = v18;
    }
    v18->ParentValue &= 3uLL;
    v18->ParentValue |= v2;
    v23 = v18->Children[v20];
    if ( v23 )
    {
      v34 = v23->ParentValue;
      LOBYTE(v2) = v34 & 0xFC;
      if ( (_RTL_BALANCED_NODE *)(v34 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      v23->ParentValue = (unsigned __int64)v7 | v34 & 3;
    }
    v7->Children[v21] = v23;
    v18->Children[v20] = v7;
    v7->ParentValue &= 3uLL;
    v7->ParentValue |= (unsigned __int64)v18;
  }
  return v2;
}
