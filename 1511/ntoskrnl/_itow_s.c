/*
 * XREFs of _itow_s @ 0x140148918
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x14013C264 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     sub_140148AB0 @ 0x140148AB0 (sub_140148AB0.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  if ( Radix == 10 && Val < 0 )
    return sub_140148AB0(Val, (_DWORD)DstBuf, SizeInWords, 10, 1);
  else
    return sub_140148AB0(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
