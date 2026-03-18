/*
 * XREFs of CiProcessComparer @ 0x1C000A170
 * Callers:
 *     CiProcessLocate @ 0x1C000AAA0 (CiProcessLocate.c)
 *     CiProcessCreate @ 0x1C000ADF0 (CiProcessCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiProcessComparer(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
