/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1C00D31BC
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0006568 (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C00D415C (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall rimReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        char *KeyValueInformation,
        __int64 a6,
        _WORD *a7)
{
  _WORD *v8; // rdi
  char *v11; // rdx
  wchar_t *v12; // rax
  const WCHAR *v13; // rdx
  signed __int64 v14; // r8
  int v15; // r9d
  WCHAR v16; // ax
  NTSTATUS result; // eax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = a7;
  Length = 524;
  memset(pszDest, 0, sizeof(pszDest));
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d-", a3) < 0 )
  {
    v20 = 15;
    goto LABEL_21;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) < 0 )
  {
    v20 = 14;
    goto LABEL_21;
  }
  v12 = wcsstr(DestinationString.Buffer, L"?");
  if ( v12 )
  {
    v13 = L"\\";
    v14 = (char *)v12 - (char *)L"\\";
    v15 = 1;
    do
    {
      v16 = *v13;
      *(const WCHAR *)((char *)v13 + v14) = *v13;
      ++v13;
      if ( !v16 )
        break;
      --v15;
    }
    while ( v15 );
  }
  result = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
  if ( result >= 0 )
  {
    if ( *((_DWORD *)KeyValueInformation + 1) != 1 || Length > 0x200 )
    {
      v20 = 13;
      goto LABEL_21;
    }
    v18 = 128LL;
    v11 = (char *)(KeyValueInformation + 12 - (char *)a7);
    v19 = 0;
    do
    {
      result = v18 + 2147483518;
      if ( v18 == -2147483518 )
        break;
      result = *(unsigned __int16 *)((char *)v8 + (_QWORD)v11);
      if ( !(_WORD)result )
        break;
      *v8++ = result;
      --v18;
    }
    while ( v18 );
    if ( !v18 )
    {
      --v8;
      v19 = -2147483643;
    }
    *v8 = 0;
    if ( v19 < 0 )
    {
      v20 = 12;
LABEL_21:
      LOBYTE(v11) = 3;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               (_DWORD)v11,
               3,
               v20,
               (__int64)&WPP_c96a4b6ea92639e1a4a8c71189e6796b_Traceguids);
    }
  }
  return result;
}
