/*
 * XREFs of _ltow_s @ 0x140152290
 * Callers:
 *     <none>
 * Callees:
 *     xtow_s @ 0x140152400 (xtow_s.c)
 */

errno_t __cdecl ltow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
