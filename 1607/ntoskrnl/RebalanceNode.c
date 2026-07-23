/*
 * XREFs of RebalanceNode @ 0x1400C227C
 * Callers:
 *     DeleteNodeFromTree @ 0x1400C1EE0 (DeleteNodeFromTree.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400C2150 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     PromoteNode @ 0x1400C233C (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  char v3; // al
  int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  char v10; // al
  char v11; // dl
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 result; // rax
  char v15; // r9
  __int64 v16; // r10

  v1 = *(_BYTE *)(a1 + 24);
  if ( v1 == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(v2 + 24);
  if ( v3 == v1 )
  {
    PromoteNode(v2);
    *(_BYTE *)(v12 + 24) = 0;
    *(_BYTE *)(v13 + 24) = 0;
    return 0LL;
  }
  v4 = -v1;
  if ( v3 == v4 )
  {
    if ( v1 == 1 )
      v5 = *(_QWORD *)(v2 + 8);
    else
      v5 = *(_QWORD *)(v2 + 16);
    PromoteNode(v5);
    PromoteNode(v6);
    *(_BYTE *)(v9 + 24) = 0;
    *(_BYTE *)(v8 + 24) = 0;
    v10 = *(_BYTE *)(v5 + 24);
    if ( v10 == v7 )
    {
      *(_BYTE *)(v9 + 24) = -v7;
    }
    else
    {
      v11 = 0;
      if ( v10 == v4 )
        v11 = v7;
      *(_BYTE *)(v8 + 24) = v11;
    }
    *(_BYTE *)(v5 + 24) = 0;
    return 0LL;
  }
  PromoteNode(v2);
  result = 1LL;
  *(_BYTE *)(v16 + 24) = -v15;
  return result;
}
