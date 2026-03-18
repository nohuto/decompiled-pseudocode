/*
 * XREFs of PopLazySensorActiveInput @ 0x140674B58
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403E2A1C (PopSessionWinlogonNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007651C (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x14052E33C (PopConsoleSessionActiveInput.c)
 */

ULONG_PTR __fastcall PopLazySensorActiveInput(unsigned int a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v5; // esi
  ULONG_PTR result; // rax
  void *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+28h] [rbp-40h] BYREF

  v3 = 0;
  BYTE2(qword_140302410) = 1;
  v8 = 0LL;
  v5 = 0;
  HIDWORD(qword_140302410) = 10;
  result = MmGetSessionById(a1, a2, a3);
  v7 = (void *)result;
  if ( result )
  {
    if ( (int)MmAttachSession(result) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v8);
      MmDetachSession((__int64)v7, (__int64)v9);
      v5 = HIDWORD(v8);
      v3 = v8;
    }
    result = ObfDereferenceObject(v7);
    HIDWORD(PopLazyContext) = v5;
    LOWORD(qword_140302410) = 257;
    DWORD2(PopLazyContext) = v3;
  }
  return result;
}
