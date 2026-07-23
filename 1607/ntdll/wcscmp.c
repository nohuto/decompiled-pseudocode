/*
 * XREFs of wcscmp @ 0x18009C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  int v2; // r8d
  int result; // eax
  signed __int64 v4; // rcx

  v2 = *String2;
  result = *String1 - v2;
  if ( !result )
  {
    v4 = (char *)String1 - (char *)String2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++String2;
      result = *(const wchar_t *)((char *)String2 + v4) - v2;
    }
    while ( !result );
  }
  if ( result < 0 )
    return -1;
  if ( result > 0 )
    return 1;
  return result;
}
