/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x180026720
 * Callers:
 *     sub_180025B3C @ 0x180025B3C (sub_180025B3C.c)
 * Callees:
 *     sub_1800266D0 @ 0x1800266D0 (sub_1800266D0.c)
 *     _ValidateImageBase @ 0x180026780 (_ValidateImageBase.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(0x180000000uLL);
  if ( (_DWORD)result )
  {
    result = sub_1800266D0(0x180000000LL, a1 - 0x180000000LL);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
