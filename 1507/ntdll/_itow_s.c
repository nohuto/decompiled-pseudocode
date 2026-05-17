/*
 * XREFs of _itow_s @ 0x18008E310
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x18000D578 (RtlpFindRegTziForCurrentYear.c)
 *     LdrpMUIEtwOutput @ 0x1800CB9D0 (LdrpMUIEtwOutput.c)
 * Callees:
 *     xtow_s @ 0x18008E4D8 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return xtow_s(Value, (_DWORD)Buffer, BufferCount, 10, 1);
  else
    return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
