/*
 * XREFs of RebalanceNode @ 0x180074370
 * Callers:
 *     DeleteNodeFromTree @ 0x180073F6C (DeleteNodeFromTree.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180074180 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     PromoteNode @ 0x180074434 (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  char v1; // r9
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // dl
  char v13; // r9
  __int64 v14; // r10

  v1 = *(_BYTE *)(a1 + 24);
  if ( v1 == 1 )
    v2 = *(_QWORD *)(a1 + 16);
  else
    v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 24) == v1 )
  {
    PromoteNode(v2);
    *(_BYTE *)(v3 + 24) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    return 0LL;
  }
  v6 = -v1;
  if ( *(char *)(v2 + 24) == v6 )
  {
    if ( v1 == 1 )
      v7 = *(_QWORD *)(v2 + 8);
    else
      v7 = *(_QWORD *)(v2 + 16);
    PromoteNode(v7);
    PromoteNode(v8);
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v10 + 24) = 0;
    if ( *(_BYTE *)(v7 + 24) == v9 )
    {
      *(_BYTE *)(v11 + 24) = -v9;
    }
    else
    {
      v12 = 0;
      if ( *(char *)(v7 + 24) == v6 )
        v12 = v9;
      *(_BYTE *)(v10 + 24) = v12;
    }
    *(_BYTE *)(v7 + 24) = 0;
    return 0LL;
  }
  PromoteNode(v2);
  result = 1LL;
  *(_BYTE *)(v14 + 24) = -v13;
  return result;
}
