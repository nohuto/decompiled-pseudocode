/*
 * XREFs of iswdigit @ 0x18009A1B0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E280 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
