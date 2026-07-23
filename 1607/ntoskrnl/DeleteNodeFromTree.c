/*
 * XREFs of DeleteNodeFromTree @ 0x1400C1EE0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x14011239C (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     RebalanceNode @ 0x1400C227C (RebalanceNode.c)
 */

__int64 __fastcall DeleteNodeFromTree(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 **v5; // rbx
  unsigned __int8 *v6; // rax
  char v7; // dl
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rdi
  __int64 result; // rax
  bool v13; // zf
  unsigned __int8 **j; // rax
  unsigned __int8 *v15; // rax
  unsigned __int8 ***v16; // rax
  unsigned __int8 **i; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 && (v5 = *(unsigned __int8 ***)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      v5 = *(unsigned __int8 ***)(a2 + 8);
      for ( i = *(unsigned __int8 ***)(v2 + 16); i; i = (unsigned __int8 **)i[2] )
        v5 = i;
    }
    else
    {
      for ( j = (unsigned __int8 **)v5[1]; j; j = (unsigned __int8 **)j[1] )
        v5 = j;
    }
  }
  else
  {
    v5 = (unsigned __int8 **)a2;
  }
  v6 = v5[1];
  v7 = -1;
  v8 = *v5;
  if ( v6 )
  {
    if ( *((unsigned __int8 ***)v8 + 1) == v5 )
    {
      *((_QWORD *)v8 + 1) = v6;
      *(_QWORD *)v5[1] = *v5;
      goto LABEL_7;
    }
    *((_QWORD *)v8 + 2) = v6;
    v7 = 1;
    v10 = v5[1];
  }
  else
  {
    v9 = v5[2];
    if ( *((unsigned __int8 ***)v8 + 1) == v5 )
    {
      *((_QWORD *)v8 + 1) = v9;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v9;
      v7 = 1;
    }
    v10 = v5[2];
    if ( !v10 )
      goto LABEL_7;
  }
  *(_QWORD *)v10 = *v5;
LABEL_7:
  *(_BYTE *)(a1 + 24) = 0;
  v11 = *v5;
  while ( 1 )
  {
    result = v11[24];
    if ( (_BYTE)result == v7 )
    {
      v11[24] = 0;
      goto LABEL_15;
    }
    if ( !(_BYTE)result )
      break;
    result = RebalanceNode(v11);
    if ( (_DWORD)result )
      goto LABEL_12;
    v11 = *(unsigned __int8 **)v11;
LABEL_15:
    v7 = -1;
    v13 = *(_QWORD *)(*(_QWORD *)v11 + 16LL) == (_QWORD)v11;
    v11 = *(unsigned __int8 **)v11;
    if ( v13 )
      v7 = 1;
  }
  v11[24] = -v7;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_12:
  if ( (unsigned __int8 **)a2 != v5 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *((_OWORD *)v5 + 1) = *(_OWORD *)(a2 + 16);
    v15 = *v5;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 )
      *((_QWORD *)v15 + 1) = v5;
    else
      *((_QWORD *)v15 + 2) = v5;
    v16 = (unsigned __int8 ***)v5[1];
    if ( v16 )
      *v16 = v5;
    result = (__int64)v5[2];
    if ( result )
      *(_QWORD *)result = v5;
  }
  return result;
}
