/*
 * XREFs of _ultoa_s @ 0x140176748
 * Callers:
 *     <none>
 * Callees:
 *     sub_140176868 @ 0x140176868 (sub_140176868.c)
 */

errno_t __cdecl ultoa_s(unsigned int Val, char *DstBuf, size_t Size, int Radix)
{
  return sub_140176868(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
