/*
 * XREFs of RtlRbRemoveNode @ 0x18002DBF0
 * Callers:
 *     LdrpUnloadNode @ 0x180007644 (LdrpUnloadNode.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001EE20 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x18002A520 (RtlpHpVsChunkSplit.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180047F64 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180058E64 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800762F8 (RtlpHpVsFreeChunkRemove.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rax
  _RTL_BALANCED_NODE *v3; // r8
  _RTL_BALANCED_NODE *v5; // r9
  _RTL_BALANCED_NODE *v6; // r10
  _RTL_BALANCED_NODE *v7; // rcx
  unsigned int v8; // r11d
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
  __int64 v20; // r10
  __int64 v21; // r9
  _RTL_BALANCED_NODE *v22; // r8
  _RTL_BALANCED_NODE *v23; // r8
  bool v24; // zf
  unsigned __int64 v25; // rax
  _RTL_BALANCED_NODE **v26; // rbx
  _RTL_BALANCED_NODE *v27; // r10
  unsigned __int64 v28; // r9
  _RTL_BALANCED_NODE *v29; // rbx
  __int64 v30; // r11
  _RTL_BALANCED_NODE **v31; // rsi
  _RTL_BALANCED_NODE **v32; // r11
  _RTL_BALANCED_NODE *v33; // r8
  unsigned __int64 v34; // r11
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
        v25 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v25 )
        {
          if ( *(_RTL_BALANCED_NODE **)(v25 + 8) == v7 )
          {
            *(_QWORD *)(v25 + 8) = v18;
          }
          else
          {
            if ( *(_RTL_BALANCED_NODE **)v25 != v7 )
              __fastfail(0x1Du);
            *(_QWORD *)v25 = v18;
          }
        }
        else
        {
          if ( Tree->Root != v7 )
            __fastfail(0x1Du);
          Tree->Root = v18;
        }
        v18->ParentValue &= 3uLL;
        v26 = &v18->Children[v8];
        v18->ParentValue |= v25;
        v27 = *v26;
        if ( *v26 )
        {
          v28 = v27->ParentValue;
          if ( (_RTL_BALANCED_NODE *)(v28 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
            __fastfail(0x1Du);
          v27->ParentValue = (unsigned __int64)v7 | v28 & 3;
        }
        *v19 = v27;
        *v26 = v7;
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
      v29 = v18->Children[v8];
      v30 = v8 ^ 1;
      *(_BYTE *)&v29->0 &= ~1u;
      if ( (_RTL_BALANCED_NODE *)(v29->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      v31 = &v18->Children[(unsigned int)v30 ^ 1LL];
      if ( *v31 != v29 )
        __fastfail(0x1Du);
      if ( v7->Children[v30] != v18 || (_RTL_BALANCED_NODE *)(v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      v7->Children[v30] = v29;
      v32 = &v29->Children[v30];
      v29->ParentValue &= 3uLL;
      v29->ParentValue |= (unsigned __int64)v7;
      v33 = *v32;
      if ( *v32 )
      {
        v35 = v33->ParentValue;
        if ( (_RTL_BALANCED_NODE *)(v35 & 0xFFFFFFFFFFFFFFFCuLL) != v29 )
          __fastfail(0x1Du);
        v33->ParentValue = (unsigned __int64)v18 | v35 & 3;
      }
      *v31 = v33;
      v22 = v18;
      *v32 = v18;
      v18->ParentValue &= 3uLL;
      v18->ParentValue |= (unsigned __int64)v29;
      v18 = v29;
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
