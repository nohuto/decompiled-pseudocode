/*
 * XREFs of sub_1C00E288C @ 0x1C00E288C
 * Callers:
 *     sub_1C00E2758 @ 0x1C00E2758 (sub_1C00E2758.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall sub_1C00E288C(__int16 *a1, __int16 a2)
{
  __int16 v2; // ax

  v2 = *a1;
  if ( !*a1 )
    return 0LL;
  do
  {
    if ( v2 == a2 )
      break;
    v2 = *++a1;
  }
  while ( *a1 );
  if ( !*a1 )
    return 0LL;
  return a1;
}
