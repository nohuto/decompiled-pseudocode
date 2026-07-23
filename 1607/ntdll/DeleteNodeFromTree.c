/*
 * XREFs of DeleteNodeFromTree @ 0x180073F6C
 * Callers:
 *     RtlDeleteElementGenericTableAvlEx @ 0x180073F10 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     RebalanceNode @ 0x180074370 (RebalanceNode.c)
 */

char __fastcall DeleteNodeFromTree(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rcx
  char v7; // dl
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _BYTE *v10; // rsi
  _QWORD *v11; // rax
  bool v12; // zf
  _QWORD *j; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *i; // rax

  if ( *(_QWORD *)(a2 + 8) && (v4 = *(_QWORD **)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      v4 = *(_QWORD **)(a2 + 8);
      for ( i = (_QWORD *)v4[2]; i; i = (_QWORD *)i[2] )
        v4 = i;
    }
    else
    {
      for ( j = (_QWORD *)v4[1]; j; j = (_QWORD *)j[1] )
        v4 = j;
    }
  }
  else
  {
    v4 = (_QWORD *)a2;
  }
  v5 = v4[1];
  v6 = (_BYTE *)*v4;
  v7 = -1;
  if ( v5 )
  {
    if ( *((_QWORD **)v6 + 1) == v4 )
    {
      *((_QWORD *)v6 + 1) = v5;
    }
    else
    {
      *((_QWORD *)v6 + 2) = v5;
      v7 = 1;
    }
    v9 = (_QWORD *)v4[1];
  }
  else
  {
    v8 = v4[2];
    if ( *((_QWORD **)v6 + 1) == v4 )
    {
      *((_QWORD *)v6 + 1) = v8;
    }
    else
    {
      *((_QWORD *)v6 + 2) = v8;
      v7 = 1;
    }
    v9 = (_QWORD *)v4[2];
    if ( !v9 )
      goto LABEL_7;
  }
  *v9 = *v4;
LABEL_7:
  *(_BYTE *)(a1 + 24) = 0;
  v10 = (_BYTE *)*v4;
  while ( 1 )
  {
    LOBYTE(v11) = v10[24];
    if ( (_BYTE)v11 == v7 )
    {
      v10[24] = 0;
      goto LABEL_15;
    }
    if ( !(_BYTE)v11 )
      break;
    LODWORD(v11) = RebalanceNode(v10);
    if ( (_DWORD)v11 )
      goto LABEL_12;
    v10 = *(_BYTE **)v10;
LABEL_15:
    v7 = -1;
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL) == (_QWORD)v10;
    v10 = *(_BYTE **)v10;
    if ( v12 )
      v7 = 1;
  }
  v10[24] = -v7;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_12:
  if ( (_QWORD *)a2 != v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *((_OWORD *)v4 + 1) = *(_OWORD *)(a2 + 16);
    v14 = *v4;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 )
      *(_QWORD *)(v14 + 8) = v4;
    else
      *(_QWORD *)(v14 + 16) = v4;
    v15 = (_QWORD *)v4[1];
    if ( v15 )
      *v15 = v4;
    v11 = (_QWORD *)v4[2];
    if ( v11 )
      *v11 = v4;
  }
  return (char)v11;
}
