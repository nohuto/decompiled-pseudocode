/*
 * XREFs of EtwpAddInstanceIdToLogFileName @ 0x1800554F0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800550E0 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x1800FD8D4 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800FDAC8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180056600 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     StringCchCopyW @ 0x1800D90D0 (StringCchCopyW.c)
 *     StringCchPrintfW @ 0x1800D914C (StringCchPrintfW.c)
 */

__int64 __fastcall EtwpAddInstanceIdToLogFileName(__int64 a1, int a2, UNICODE_STRING *a3)
{
  int UniqueProcess; // ecx
  wchar_t *v7; // rdx
  __int64 result; // rax
  wchar_t pszDest[1024]; // [rsp+30h] [rbp-818h] BYREF

  RtlInitUnicodeString(a3, 0LL);
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  *(_DWORD *)(a1 + 100) = UniqueProcess;
  if ( a2 == 1 )
  {
    v7 = *(wchar_t **)(a1 + 136);
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
      LODWORD(result) = StringCchCopyW(pszDest, 0x400uLL, *(STRSAFE_LPCWSTR *)(a1 + 136));
    else
      LODWORD(result) = StringCchPrintfW(pszDest, 0x400uLL, L"%s_%d", *(_QWORD *)(a1 + 136), UniqueProcess);
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v7 = pszDest;
  }
  if ( (unsigned __int8)RtlCreateUnicodeString(a3, v7) )
    return 0LL;
  else
    return 8LL;
}
