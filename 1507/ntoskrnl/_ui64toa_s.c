/*
 * XREFs of _ui64toa_s @ 0x140176734
 * Callers:
 *     <none>
 * Callees:
 *     sub_14017675C @ 0x14017675C (sub_14017675C.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Val, char *DstBuf, size_t Size, int Radix)
{
  return sub_14017675C(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
