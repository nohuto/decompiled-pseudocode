/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140743E70
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x140026DDC (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     IovUtilIsVerifiedDeviceStack @ 0x140743968 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 (__fastcall *__fastcall VfMajorTestStartedPdoStack(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  unsigned int i; // ebx
  void (__fastcall *v4)(__int64); // rax

  result = (__int64 (__fastcall *)(_QWORD))IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && VfVerifyMode > 2 )
  {
    for ( i = 0; i <= 0x1B; ++i )
    {
      v4 = (void (__fastcall *)(__int64))ViMajorVerifierRoutines[12 * i + 10];
      if ( v4 )
        v4(a1);
    }
    result = qword_1407648D0;
    if ( qword_1407648D0 )
      return (__int64 (__fastcall *)(_QWORD))qword_1407648D0(a1);
  }
  return result;
}
