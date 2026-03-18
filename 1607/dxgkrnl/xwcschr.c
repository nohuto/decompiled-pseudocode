/*
 * XREFs of xwcschr @ 0x1C00EFB5C
 * Callers:
 *     ParseModeCap @ 0x1C00EFA5C (ParseModeCap.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall xwcschr(__int16 *a1, __int16 a2)
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
