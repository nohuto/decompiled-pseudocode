/*
 * XREFs of _itoa_s @ 0x1800A0BE0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x1800A0D90 (xtoa_s.c)
 */

errno_t __cdecl itoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return xtoa_s(Value, (_DWORD)Buffer, BufferCount, 10, 1);
  else
    return xtoa_s(Value, (_DWORD)Buffer, BufferCount, Radix, 0);
}
