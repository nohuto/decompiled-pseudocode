/*
 * XREFs of VrpGetNextToken @ 0x140617D80
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140616A6C (VrpTranslatePath.c)
 *     VrpComparePath @ 0x140617C8C (VrpComparePath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VrpGetNextToken(unsigned __int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax

  *(_WORD *)a3 = 0;
  v5 = *a1;
  if ( 2 * *a2 < v5 )
  {
    v6 = *((_QWORD *)a1 + 1);
    do
    {
      if ( *(_WORD *)(v6 + 2 * *a2) != 92 )
        break;
      v7 = *a2 + 1;
      *a2 = v7;
    }
    while ( 2 * v7 < v5 );
  }
  v8 = 2 * *a2;
  *(_QWORD *)(a3 + 8) = v8 + *((_QWORD *)a1 + 1);
  if ( v8 < *a1 )
  {
    do
    {
      v9 = *a2;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * *a2) == 92 )
        break;
      *(_WORD *)a3 += 2;
      *a2 = v9 + 1;
    }
    while ( 2 * (v9 + 1) < *a1 );
  }
  v10 = *a1;
  result = 2 * *a2;
  if ( result < v10 )
  {
    v12 = *((_QWORD *)a1 + 1);
    do
    {
      result = *a2;
      if ( *(_WORD *)(v12 + 2 * *a2) != 92 )
        break;
      v13 = result + 1;
      *a2 = v13;
      result = 2 * v13;
    }
    while ( result < v10 );
  }
  return result;
}
