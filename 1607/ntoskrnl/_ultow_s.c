/*
 * XREFs of _ultow_s @ 0x1401522C8
 * Callers:
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF550 (LocalGetStringForRelativeAttribute.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D78FC (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     xtow_s @ 0x140152400 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
