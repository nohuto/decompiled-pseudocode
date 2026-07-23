/*
 * XREFs of MiMdlPageSort @ 0x1401E47D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMdlPageSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
