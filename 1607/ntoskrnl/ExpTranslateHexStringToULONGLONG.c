/*
 * XREFs of ExpTranslateHexStringToULONGLONG @ 0x1406B2E6C
 * Callers:
 *     ExpParseSignatureName @ 0x1406B14D4 (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x14014F40C (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToULONGLONG(wint_t *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  wint_t *v5; // rsi
  unsigned int i; // ebp
  wint_t v8; // ax
  int v9; // eax

  v2 = -1LL;
  v4 = 0LL;
  v5 = a1;
  do
    ++v2;
  while ( a1[v2] );
  if ( (unsigned int)v2 > 0x10 )
    return 3221225485LL;
  for ( i = 0; i < (unsigned int)v2; v4 = v9 + 16 * v4 )
  {
    v8 = towlower(*v5);
    if ( (unsigned __int16)(v8 - 48) > 9u )
    {
      if ( (unsigned __int16)(v8 - 97) > 5u )
        return 3221225485LL;
      v9 = v8 - 87;
    }
    else
    {
      v9 = v8 - 48;
    }
    ++i;
    ++v5;
  }
  *a2 = v4;
  return 0LL;
}
