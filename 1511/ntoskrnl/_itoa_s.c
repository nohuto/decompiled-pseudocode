/*
 * XREFs of _itoa_s @ 0x140148668
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401487E8 @ 0x1401487E8 (sub_1401487E8.c)
 */

errno_t __cdecl itoa_s(int Value, char *DstBuf, size_t Size, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return sub_1401487E8(Value, (_DWORD)DstBuf, Size, 10, 1);
  else
    return sub_1401487E8(Value, (_DWORD)DstBuf, Size, Radix, 0);
}
