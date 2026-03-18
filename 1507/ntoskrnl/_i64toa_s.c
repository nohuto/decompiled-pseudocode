/*
 * XREFs of _i64toa_s @ 0x1401766C4
 * Callers:
 *     <none>
 * Callees:
 *     sub_14017675C @ 0x14017675C (sub_14017675C.c)
 */

errno_t __cdecl i64toa_s(__int64 Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_14017675C(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
