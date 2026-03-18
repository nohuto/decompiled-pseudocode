/*
 * XREFs of _i64tow_s @ 0x140176974
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x14070B070 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     sub_140176A0C @ 0x140176A0C (sub_140176A0C.c)
 */

errno_t __cdecl i64tow_s(__int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_140176A0C(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
