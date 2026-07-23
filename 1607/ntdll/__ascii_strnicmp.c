/*
 * XREFs of __ascii_strnicmp @ 0x180097E6C
 * Callers:
 *     _strnicmp @ 0x180097EC0 (_strnicmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ascii_strnicmp(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3)
{
  int v4; // r9d
  int v5; // ecx

  if ( !a3 )
    return 0LL;
  do
  {
    v4 = *a1++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *a2++;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
    --a3;
  }
  while ( a3 && v4 && v4 == v5 );
  return (unsigned int)(v4 - v5);
}
