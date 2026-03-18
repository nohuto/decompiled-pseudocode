/*
 * XREFs of PopLazySensorActiveInput @ 0x1406BCB94
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14040A0DC (PopSessionWinlogonNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x1405644F0 (PopConsoleSessionActiveInput.c)
 */

_KPROCESS *__fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v1; // ebx
  int v2; // esi
  _KPROCESS *result; // rax
  _KPROCESS *v5; // rdi
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  BYTE2(qword_14032D390) = 1;
  v6 = 0LL;
  v2 = 0;
  HIDWORD(qword_14032D390) = 10;
  result = (_KPROCESS *)MmGetSessionById(a1);
  v5 = result;
  if ( result )
  {
    if ( (int)MmAttachSession(result, (__int64)v7) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (unsigned int *)&v6);
      MmDetachSession((__int64)v5, (struct _KTHREAD *)v7);
      v2 = HIDWORD(v6);
      v1 = v6;
    }
    result = (_KPROCESS *)ObfDereferenceObject(v5);
    HIDWORD(PopLazyContext) = v2;
    LOWORD(qword_14032D390) = 257;
    DWORD2(PopLazyContext) = v1;
  }
  return result;
}
