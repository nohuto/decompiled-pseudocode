/*
 * XREFs of _ltow_s @ 0x1401769C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140176B30 @ 0x140176B30 (sub_140176B30.c)
 */

errno_t __cdecl ltow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_140176B30(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
