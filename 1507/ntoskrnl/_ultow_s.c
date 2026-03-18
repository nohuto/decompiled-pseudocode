/*
 * XREFs of _ultow_s @ 0x1401769F8
 * Callers:
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14058A6E4 (_CmCreateOrdinalInstanceKey.c)
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     sub_140176B30 @ 0x140176B30 (sub_140176B30.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return sub_140176B30(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
