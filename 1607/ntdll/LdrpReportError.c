/*
 * XREFs of LdrpReportError @ 0x18007AF88
 * Callers:
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180011330 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800182E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     StringCbPrintfW @ 0x180086E90 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtRaiseHardError @ 0x1800A8E90 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpReportError(UNICODE_STRING *a1, const char *a2, unsigned int a3)
{
  UNICODE_STRING *p_DestinationString; // rdi
  char v6; // si
  unsigned int v7; // r15d
  int v8; // ecx
  unsigned int v9; // r12d
  _DWORD *v10; // r14
  bool v11; // zf
  int v12; // ecx
  _DWORD *v13; // r13
  UNICODE_STRING v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING *v18; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v22; // [rsp+A0h] [rbp-60h] BYREF

  p_DestinationString = a1;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    p_DestinationString = &DestinationString;
    v6 = 0;
  }
  v7 = 3;
  if ( a3 == -1073741515 )
  {
    RtlInitUnicodeString(&v14, 0LL);
    v9 = 1;
    v18 = p_DestinationString;
    v7 = 1;
  }
  else
  {
    if ( a3 == -1073741512 )
    {
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      RtlInitUnicodeString(&v14, pszDest);
      v12 = LdrpDebugFlags;
      v20 = -1073741512LL;
      v18 = (UNICODE_STRING *)a2;
      v9 = 2;
      v19 = p_DestinationString;
      v13 = (_DWORD *)((char *)&LdrpLogLevelStateTable + 16 * (v6 == 0));
      if ( ((*v13 | 1) & LdrpDebugFlags) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          785,
          (unsigned int)"LdrpReportError",
          v6 == 0,
          (__int64)"Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          (_DWORD)a2,
          p_DestinationString,
          -1073741512);
        v12 = LdrpDebugFlags;
      }
      v11 = (v12 & v13[1]) == 0;
    }
    else
    {
      if ( a3 != -1073741511 )
      {
        RtlInitUnicodeString(&v14, 0LL);
        v9 = 3;
        goto LABEL_13;
      }
      RtlInitAnsiString(&SourceString, a2);
      v14.Buffer = (wchar_t *)&v22;
      v14.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v14, &SourceString, 0) < 0 )
        v14.Length = 0;
      v8 = LdrpDebugFlags;
      v18 = &v14;
      v20 = -1073741511LL;
      v19 = p_DestinationString;
      v9 = 3;
      v10 = (_DWORD *)((char *)&LdrpLogLevelStateTable + 16 * (v6 == 0));
      if ( ((*v10 | 1) & LdrpDebugFlags) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          811,
          (unsigned int)"LdrpReportError",
          v6 == 0,
          (__int64)"Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          &v14,
          p_DestinationString,
          -1073741511);
        v8 = LdrpDebugFlags;
      }
      v11 = (v8 & v10[1]) == 0;
    }
    if ( !v11 )
      __debugbreak();
  }
LABEL_13:
  if ( v6 )
  {
    if ( (int)NtRaiseHardError(a3, v7, v9, &v18, 1, v15) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( a3 + 1073741512 <= 1 )
      RtlRaiseStatus(a3);
  }
}
