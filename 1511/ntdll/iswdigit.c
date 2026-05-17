/*
 * XREFs of iswdigit @ 0x180098DF0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180017960 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
