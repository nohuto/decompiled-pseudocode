/*
 * XREFs of _itow_s @ 0x140152268
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x14013E56C (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x140152400 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  if ( Radix == 10 && Val < 0 )
    return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, 10, 1);
  else
    return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
