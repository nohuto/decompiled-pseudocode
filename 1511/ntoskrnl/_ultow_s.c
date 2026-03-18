/*
 * XREFs of _ultow_s @ 0x140148978
 * Callers:
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405177F8 (_CmCreateOrdinalInstanceKey.c)
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     sub_140148AB0 @ 0x140148AB0 (sub_140148AB0.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return sub_140148AB0(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
