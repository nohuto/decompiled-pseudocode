/*
 * XREFs of iswdigit @ 0x180087630
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180026A90 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
