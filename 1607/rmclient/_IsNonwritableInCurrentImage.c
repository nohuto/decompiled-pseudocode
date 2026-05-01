/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x1800061C0
 * Callers:
 *     _CRT_INIT @ 0x180005B5C (_CRT_INIT.c)
 * Callees:
 *     _FindPESection @ 0x180006170 (_FindPESection.c)
 *     _ValidateImageBase @ 0x180006220 (_ValidateImageBase.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(0x180000000uLL);
  if ( (_DWORD)result )
  {
    result = FindPESection(0x180000000LL, a1 - 0x180000000LL);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
