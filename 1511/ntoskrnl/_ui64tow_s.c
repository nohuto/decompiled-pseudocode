/*
 * XREFs of _ui64tow_s @ 0x140148964
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     sub_14014898C @ 0x14014898C (sub_14014898C.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return sub_14014898C(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
