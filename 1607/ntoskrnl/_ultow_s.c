/*
 * XREFs of _ultow_s @ 0x140151D08
 * Callers:
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF418 (LocalGetStringForRelativeAttribute.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D77C4 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     xtow_s @ 0x140151E40 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
