/*
 * XREFs of sub_180022A10 @ 0x180022A10
 * Callers:
 *     sub_180021180 @ 0x180021180 (sub_180021180.c)
 *     sub_180022284 @ 0x180022284 (sub_180022284.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall sub_180022A10(unsigned int a1)
{
  wchar_t *v2; // rbx
  _locale_t current_locale; // rax
  __crt_locale_pointers *v4; // rdi
  __int64 v5; // rdx

  v2 = 0LL;
  current_locale = get_current_locale();
  v4 = current_locale;
  if ( current_locale )
  {
    v5 = 32LL * a1;
    v2 = *(wchar_t **)((char *)current_locale->locinfo + v5 + 80);
    if ( v2 )
      v2 = wcsdup(*(const wchar_t **)((char *)current_locale->locinfo + v5 + 80));
    free_locale(v4);
  }
  return v2;
}
