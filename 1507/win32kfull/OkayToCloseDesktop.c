/*
 * XREFs of OkayToCloseDesktop @ 0x1C00ED4E0
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x1C008C178 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseDesktop(__int64 a1)
{
  int *v2; // rdi

  v2 = *(int **)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 24) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return 3221225506LL;
  if ( (v2[8] & 0x10) == 0 )
    return 3221225473LL;
  if ( !(unsigned int)CheckHandleFlag(*(PRKPROCESS *)a1, *v2, *(_QWORD *)(a1 + 16), 2)
    && !(unsigned int)CheckHandleFlag(*(PRKPROCESS *)a1, *v2, *(_QWORD *)(a1 + 16), 1) )
  {
    return 0LL;
  }
  return 2147483665LL;
}
