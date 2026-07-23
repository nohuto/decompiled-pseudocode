/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x1400BA9EC
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

char __fastcall MiBitmapsCachedEntryLengthChanged(_RTL_RB_TREE *a1, unsigned __int64 a2, int a3)
{
  BOOLEAN v3; // bl
  unsigned __int64 k; // rax
  unsigned __int64 v6; // r9
  __int64 j; // r9
  _QWORD *i; // rax
  _RTL_RB_TREE *v9; // rsi
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v11; // rax
  __int64 m; // r9

  v3 = 0;
  k = a2;
  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      for ( i = *(_QWORD **)v6; i; i = (_QWORD *)*i )
        v6 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 16); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == k )
          break;
        k = v6;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      for ( k = *(_QWORD *)(v6 + 8); k; k = *(_QWORD *)(k + 8) )
        v6 = k;
    }
    else
    {
      for ( m = *(_QWORD *)(a2 + 16); ; m = *(_QWORD *)(v6 + 16) )
      {
        v6 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == k )
          break;
        k = v6;
      }
    }
    if ( !v6 )
      return k;
  }
  LODWORD(k) = *(_DWORD *)(a2 + 52);
  if ( a3 )
  {
    if ( *(_DWORD *)(v6 + 52) > (unsigned int)k )
      return k;
  }
  else if ( *(_DWORD *)(v6 + 52) < (unsigned int)k )
  {
    return k;
  }
  v9 = a1 + 9;
  RtlRbRemoveNode(a1 + 9, (PRTL_BALANCED_NODE)a2);
  Root = v9->Root;
  if ( !v9->Root )
    goto LABEL_27;
  while ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a2 + 48) < Root[2].Children[0] )
  {
    v11 = Root->Children[0];
    if ( !Root->Children[0] )
      goto LABEL_27;
LABEL_22:
    Root = v11;
  }
  v11 = Root->Children[1];
  if ( v11 )
    goto LABEL_22;
  v3 = 1;
LABEL_27:
  LOBYTE(k) = RtlRbInsertNodeEx(v9, Root, v3, (PRTL_BALANCED_NODE)a2);
  return k;
}
