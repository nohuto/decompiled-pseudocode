/*
 * XREFs of KiIntSteerLoadCompare @ 0x14011B790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerLoadCompare(const void *a1, const void *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 184LL);
  if ( v3 > v2 )
    return 1LL;
  else
    return (unsigned int)-(v3 < v2);
}
