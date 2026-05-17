/*
 * XREFs of _itow_s @ 0x18009FAB0
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x1800464C8 (RtlpFindRegTziForCurrentYear.c)
 *     LdrpMUIEtwOutput @ 0x1800D420C (LdrpMUIEtwOutput.c)
 * Callees:
 *     xtow_s @ 0x18009FC78 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return xtow_s(Value, (_DWORD)Buffer, BufferCount, 10, 1);
  else
    return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
