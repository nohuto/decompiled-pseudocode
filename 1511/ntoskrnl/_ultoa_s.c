/*
 * XREFs of _ultoa_s @ 0x1401486C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401487E8 @ 0x1401487E8 (sub_1401487E8.c)
 */

errno_t __cdecl ultoa_s(unsigned int Val, char *DstBuf, size_t Size, int Radix)
{
  return sub_1401487E8(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
