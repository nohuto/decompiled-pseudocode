/*
 * XREFs of PopLazySensorActiveInput @ 0x14063C538
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x1404F2C90 (PopConsoleSessionActiveInput.c)
 */

ULONG_PTR __fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v1; // ebx
  int v2; // esi
  ULONG_PTR result; // rax
  void *v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  BYTE2(qword_1402DCFB0) = 1;
  v6 = 0LL;
  v2 = 0;
  HIDWORD(qword_1402DCFB0) = 10;
  result = MmGetSessionById(a1);
  v5 = (void *)result;
  if ( result )
  {
    if ( (int)MmAttachSession(result) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v6);
      MmDetachSession((__int64)v5, (__int64)v7);
      v2 = HIDWORD(v6);
      v1 = v6;
    }
    result = ObfDereferenceObject(v5);
    HIDWORD(PopLazyContext) = v2;
    LOWORD(qword_1402DCFB0) = 257;
    DWORD2(PopLazyContext) = v1;
  }
  return result;
}
