/*
 * XREFs of _itoa_s @ 0x1401766E8
 * Callers:
 *     <none>
 * Callees:
 *     sub_140176868 @ 0x140176868 (sub_140176868.c)
 */

errno_t __cdecl itoa_s(int Value, char *DstBuf, size_t Size, int Radix)
{
  if ( Radix == 10 && Value < 0 )
    return sub_140176868(Value, (_DWORD)DstBuf, Size, 10, 1);
  else
    return sub_140176868(Value, (_DWORD)DstBuf, Size, Radix, 0);
}
