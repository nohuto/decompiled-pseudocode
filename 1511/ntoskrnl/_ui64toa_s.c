/*
 * XREFs of _ui64toa_s @ 0x1401486B4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401486DC @ 0x1401486DC (sub_1401486DC.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Val, char *DstBuf, size_t Size, int Radix)
{
  return sub_1401486DC(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
