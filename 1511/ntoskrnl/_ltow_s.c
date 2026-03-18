/*
 * XREFs of _ltow_s @ 0x140148940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140148AB0 @ 0x140148AB0 (sub_140148AB0.c)
 */

errno_t __cdecl ltow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_140148AB0(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
