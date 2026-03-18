/*
 * XREFs of _i64tow_s @ 0x1401488F4
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x14068ABD4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     sub_14014898C @ 0x14014898C (sub_14014898C.c)
 */

errno_t __cdecl i64tow_s(__int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_14014898C(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
