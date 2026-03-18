/*
 * XREFs of _ltoa_s @ 0x140176710
 * Callers:
 *     <none>
 * Callees:
 *     sub_140176868 @ 0x140176868 (sub_140176868.c)
 */

errno_t __cdecl ltoa_s(int Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_140176868(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
