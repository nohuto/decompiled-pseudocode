/*
 * XREFs of RtlRbRemoveNode @ 0x18001C030
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001BE30 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x18001C590 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED4C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180059804 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18006E714 (RtlpHpVsFreeChunkRemove.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v2; // rax
  _RTL_BALANCED_NODE *v3; // r8
  _RTL_BALANCED_NODE *v5; // r11
  _RTL_BALANCED_NODE *v6; // r9
  _RTL_BALANCED_NODE *v7; // rcx
  unsigned int v8; // edi
  char v9; // r11
  _RTL_BALANCED_NODE *v10; // rax
  unsigned __int64 ParentValue; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  _BOOL8 v16; // rax
  __int64 v17; // r11
  _RTL_BALANCED_NODE *v18; // rdx
  __int64 v19; // r11
  __int64 v20; // r14
  _RTL_BALANCED_NODE *v21; // r9
  _RTL_BALANCED_NODE *v22; // r9
  _RTL_BALANCED_NODE *v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r9
  _RTL_BALANCED_NODE *v27; // rsi
  bool v28; // zf
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  _RTL_BALANCED_NODE *v31; // r9
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rdi
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&retaddr;
  v3 = Node->Children[0];
  v5 = Node->Children[1];
  if ( Node->Children[0] )
  {
    if ( v5 )
    {
      v8 = 1;
      v6 = Node->Children[1];
      v7 = v6;
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
      v12 = v5->ParentValue;
      if ( (PRTL_BALANCED_NODE)(v12 & 0xFFFFFFFFFFFFFFFCuLL) != Node )
        __fastfail(0x1Du);
      v5->ParentValue = (unsigned __int64)v6 | v12 & 3;
      v3 = v6->Children[1];
      v13 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v6->Children[1] = v5;
      if ( (_RTL_BALANCED_NODE *)v13 != v7 )
        __fastfail(0x1Du);
      v9 = *(_BYTE *)&v6->0 & 1;
      v6->ParentValue = Node->ParentValue;
      v14 = Node->ParentValue;
      if ( v14 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        v16 = *(_QWORD *)(v15 + 8) == (_QWORD)Node;
        if ( *(PRTL_BALANCED_NODE *)(v15 + 8 * v16) != Node )
          __fastfail(0x1Du);
        *(_QWORD *)(v15 + 8 * v16) = v6;
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
      v10 = v3;
      if ( !v3 )
        v10 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      Tree->Min = v10;
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
        v18->ParentValue |= v30;
        v31 = v18->Children[v8];
        if ( v31 )
        {
          v32 = v31->ParentValue;
          if ( (_RTL_BALANCED_NODE *)(v32 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
            __fastfail(0x1Du);
          v31->ParentValue = (unsigned __int64)v7 | v32 & 3;
        }
        v7->Children[v17] = v31;
        v18->Children[v8] = v7;
        v7->ParentValue &= 3uLL;
        v7->ParentValue |= (unsigned __int64)v18;
        *(_BYTE *)&v18->0 &= ~1u;
        *(_BYTE *)&v7->0 |= 1u;
        v18 = v7->Children[v17];
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
      v28 = *(_QWORD *)(v2 + 8) == (_QWORD)v7;
      v7 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v8 = v28;
    }
    v19 = v8 ^ 1LL;
    v20 = v8;
    v21 = v18->Children[v19];
    if ( !v21 || (*(_BYTE *)&v21->0 & 1) == 0 )
    {
      v23 = v18->Children[v8];
      v24 = v8 ^ 1;
      *(_BYTE *)&v23->0 &= ~1u;
      if ( (_RTL_BALANCED_NODE *)(v23->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      v25 = (unsigned int)v24 ^ 1LL;
      v26 = (unsigned int)v24;
      if ( v18->Children[v25] != v23 )
        __fastfail(0x1Du);
      if ( v7->Children[v24] != v18 || (_RTL_BALANCED_NODE *)(v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      v7->Children[v24] = v23;
      v23->ParentValue &= 3uLL;
      v23->ParentValue |= (unsigned __int64)v7;
      v27 = v23->Children[v24];
      if ( v27 )
      {
        v33 = v27->ParentValue;
        if ( (_RTL_BALANCED_NODE *)(v33 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
          __fastfail(0x1Du);
        v27->ParentValue = (unsigned __int64)v18 | v33 & 3;
      }
      v18->Children[v25] = v27;
      v23->Children[v26] = v18;
      v21 = v18;
      v18->ParentValue &= 3uLL;
      v18->ParentValue |= (unsigned __int64)v23;
      v18 = v23;
    }
    *(_BYTE *)&v18->0 ^= (*(_BYTE *)&v7->0 ^ *(_BYTE *)&v18->0) & 1;
    *(_BYTE *)&v7->0 &= ~1u;
    *(_BYTE *)&v21->0 &= ~1u;
    if ( (_RTL_BALANCED_NODE *)(v18->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
      __fastfail(0x1Du);
    if ( v7->Children[v19] != v18 )
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
    v22 = v18->Children[v20];
    if ( v22 )
    {
      v29 = v22->ParentValue;
      LOBYTE(v2) = v29 & 0xFC;
      if ( (_RTL_BALANCED_NODE *)(v29 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      v22->ParentValue = (unsigned __int64)v7 | v29 & 3;
    }
    v7->Children[v19] = v22;
    v18->Children[v20] = v7;
    v7->ParentValue &= 3uLL;
    v7->ParentValue |= (unsigned __int64)v18;
  }
  return v2;
}
