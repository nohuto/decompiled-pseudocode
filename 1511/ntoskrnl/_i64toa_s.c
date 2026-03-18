/*
 * XREFs of _i64toa_s @ 0x140148644
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401486DC @ 0x1401486DC (sub_1401486DC.c)
 */

errno_t __cdecl i64toa_s(__int64 Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_1401486DC(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
