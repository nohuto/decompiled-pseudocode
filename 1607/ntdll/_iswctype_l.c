/*
 * XREFs of _iswctype_l @ 0x18009A210
 * Callers:
 *     wcstoxq @ 0x180098624 (wcstoxq.c)
 *     wcstoxlX @ 0x18009C8BC (wcstoxlX.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype_l(wint_t C, wctype_t Type, _locale_t Locale)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
