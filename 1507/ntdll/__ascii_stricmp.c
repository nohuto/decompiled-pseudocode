/*
 * XREFs of __ascii_stricmp @ 0x1800851D0
 * Callers:
 *     _stricmp @ 0x180085210 (_stricmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ascii_stricmp(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v3; // r8d
  int v4; // ecx

  do
  {
    v3 = *a1++;
    if ( (unsigned int)(v3 - 65) <= 0x19 )
      v3 += 32;
    v4 = *a2++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
  }
  while ( v3 && v3 == v4 );
  return (unsigned int)(v3 - v4);
}
