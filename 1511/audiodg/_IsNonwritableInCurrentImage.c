/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x1400191B0
 * Callers:
 *     __wmainCRTStartup @ 0x140018B90 (__wmainCRTStartup.c)
 * Callees:
 *     _FindPESection @ 0x140019160 (_FindPESection.c)
 *     _ValidateImageBase @ 0x140019210 (_ValidateImageBase.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = ValidateImageBase(&_ImageBase);
  if ( (_DWORD)result )
  {
    result = FindPESection((__int64)&_ImageBase, a1 - (_QWORD)&_ImageBase);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
