/*
 * XREFs of _ltoa_s @ 0x140148690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401487E8 @ 0x1401487E8 (sub_1401487E8.c)
 */

errno_t __cdecl ltoa_s(int Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_1401487E8(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
