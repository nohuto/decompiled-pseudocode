/*
 * XREFs of wcslen @ 0x14014F5A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcslen(const wchar_t *Str)
{
  const wchar_t *v1; // rax

  v1 = Str;
  while ( *v1++ )
    ;
  return v1 - Str - 1;
}
