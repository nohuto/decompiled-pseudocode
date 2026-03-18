/*
 * XREFs of _itow_s @ 0x140176998
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x140165350 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     sub_140176B30 @ 0x140176B30 (sub_140176B30.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  if ( Radix == 10 && Val < 0 )
    return sub_140176B30(Val, (_DWORD)DstBuf, SizeInWords, 10, 1);
  else
    return sub_140176B30(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
