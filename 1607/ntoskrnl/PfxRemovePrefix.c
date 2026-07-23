/*
 * XREFs of PfxRemovePrefix @ 0x140688084
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 */

void __stdcall PfxRemovePrefix(PPREFIX_TABLE PrefixTable, PPREFIX_TABLE_ENTRY PrefixTableEntry)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  RTL_SPLAY_LINKS *i; // rbx
  char *p_LeftChild; // rbx
  PRTL_SPLAY_LINKS v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *k; // rcx
  _RTL_SPLAY_LINKS **v9; // rdx
  __int64 j; // rcx

  if ( (unsigned int)(PrefixTableEntry->NodeTypeCode - 513) <= 1 )
  {
    Parent = PrefixTableEntry->Links.Parent;
    for ( i = &PrefixTableEntry->Links; Parent != i; Parent = Parent->Parent )
      i = Parent;
    p_LeftChild = (char *)&i[-1].LeftChild;
    v5 = RtlDelete(&PrefixTableEntry->Links);
    if ( v5 )
    {
      if ( p_LeftChild + 16 != (char *)v5 )
      {
        v9 = &v5[-1].LeftChild;
        for ( j = *((_QWORD *)p_LeftChild + 1); *(char **)(j + 8) != p_LeftChild; j = *(_QWORD *)(j + 8) )
          ;
        *(_WORD *)v9 = 513;
        *(_QWORD *)(j + 8) = v9;
        v9[1] = (_RTL_SPLAY_LINKS *)*((_QWORD *)p_LeftChild + 1);
        *((_QWORD *)p_LeftChild + 1) = 0LL;
        *(_WORD *)p_LeftChild = 514;
      }
    }
    else
    {
      v6 = *((_QWORD *)p_LeftChild + 1);
      v7 = v6;
      for ( k = (_QWORD *)(v6 + 8); (char *)*k != p_LeftChild; k = (_QWORD *)(*k + 8LL) )
        v7 = *k;
      *(_QWORD *)(v7 + 8) = v6;
    }
  }
}
