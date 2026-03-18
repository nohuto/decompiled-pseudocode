/*
 * XREFs of CmpSortByTag @ 0x1407BACEC
 * Callers:
 *     CmpDoSort @ 0x1407BABBC (CmpDoSort.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpSortByTag(__int64 **a1)
{
  __int64 *v1; // r8
  __int64 *v3; // r9
  __int64 **v4; // rcx
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *i; // rax

  v1 = *a1;
  v3 = a1[1];
LABEL_4:
  v5 = (__int64 *)*v1;
  while ( v1 != v3 )
  {
    if ( *((_DWORD *)v1 + 28) > *((_DWORD *)v5 + 28) )
    {
      v6 = (__int64 *)*v5;
      v7 = (__int64 **)v5[1];
      if ( v5 == v3 )
        v3 = v1;
      if ( (__int64 *)v6[1] != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = (__int64)v7;
      for ( i = *a1; i != v1; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 28) >= *((_DWORD *)v5 + 28) )
          break;
      }
      v4 = (__int64 **)i[1];
      *v5 = (__int64)i;
      v5[1] = (__int64)v4;
      if ( *v4 != i )
        __fastfail(3u);
      *v4 = v5;
      i[1] = (__int64)v5;
      goto LABEL_4;
    }
    v1 = v5;
    v5 = (__int64 *)*v5;
  }
  return 1;
}
