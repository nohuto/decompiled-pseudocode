/*
 * XREFs of _ui64tow_s @ 0x1401769E4
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     sub_140176A0C @ 0x140176A0C (sub_140176A0C.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return sub_140176A0C(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
