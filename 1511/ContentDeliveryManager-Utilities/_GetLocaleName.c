/*
 * XREFs of _GetLocaleName @ 0x180024590
 * Callers:
 *     _Getcvt @ 0x180022D00 (_Getcvt.c)
 *     _Getctype @ 0x180023E04 (_Getctype.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(unsigned int a1)
{
  wchar_t *wlocale; // rbx
  _locale_t current_locale; // rax
  struct localeinfo_struct *v4; // rdi
  __int64 v5; // rdx

  wlocale = 0LL;
  current_locale = _get_current_locale();
  v4 = current_locale;
  if ( current_locale )
  {
    v5 = a1;
    wlocale = current_locale->locinfo->lc_category[v5].wlocale;
    if ( wlocale )
      wlocale = _wcsdup(current_locale->locinfo->lc_category[v5].wlocale);
    _free_locale(v4);
  }
  return wlocale;
}
