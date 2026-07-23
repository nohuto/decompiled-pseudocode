/*
 * XREFs of ExpTranslateHexStringToULONG @ 0x1406B2DD0
 * Callers:
 *     ExpParseSignatureName @ 0x1406B14D4 (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x14014F40C (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToULONG(wint_t *a1, int *a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  wint_t *v5; // r14
  unsigned int i; // esi
  wint_t v8; // dx
  int v9; // ebx

  v2 = -1LL;
  v4 = 0;
  v5 = a1;
  do
    ++v2;
  while ( a1[v2] );
  if ( (unsigned int)v2 > 8 )
    return 3221225485LL;
  for ( i = 0; i < (unsigned int)v2; ++v5 )
  {
    v8 = towlower(*v5);
    if ( (unsigned __int16)(v8 - 48) > 9u )
    {
      if ( (unsigned __int16)(v8 - 97) > 5u )
        return 3221225485LL;
      v9 = 16 * v4 - 87;
    }
    else
    {
      v9 = 16 * v4 - 48;
    }
    ++i;
    v4 = v8 + v9;
  }
  *a2 = v4;
  return 0LL;
}
