/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1C00CD65C
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0073110 (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C00CE8A8 (RtlStringCchPrintfW.c)
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
  wchar_t *v11; // rax
  const WCHAR *v12; // rdx
  signed __int64 v13; // r8
  int v14; // r9d
  WCHAR v15; // ax
  NTSTATUS result; // eax
  __int64 v17; // rcx
  int v18; // r8d
  unsigned __int16 v19; // r9
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = a7;
  Length = 524;
  memset(pszDest, 0, sizeof(pszDest));
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d-", a3) < 0 )
  {
    v19 = 15;
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             3u,
             v19,
             (__int64)&WPP_c671d3244828ed8229bc566b772a601b_Traceguids);
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) < 0 )
  {
    v19 = 14;
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             3u,
             v19,
             (__int64)&WPP_c671d3244828ed8229bc566b772a601b_Traceguids);
  }
  v11 = wcsstr(DestinationString.Buffer, L"?");
  if ( v11 )
  {
    v12 = L"\\";
    v13 = (char *)v11 - (char *)L"\\";
    v14 = 1;
    do
    {
      v15 = *v12;
      *(const WCHAR *)((char *)v12 + v13) = *v12;
      ++v12;
      if ( !v15 )
        break;
      --v14;
    }
    while ( v14 );
  }
  result = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
  if ( result >= 0 )
  {
    if ( *((_DWORD *)KeyValueInformation + 1) != 1 || Length > 0x200 )
    {
      v19 = 13;
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               3u,
               v19,
               (__int64)&WPP_c671d3244828ed8229bc566b772a601b_Traceguids);
    }
    v17 = 128LL;
    v18 = 0;
    do
    {
      result = v17 + 2147483518;
      if ( v17 == -2147483518 )
        break;
      result = *(unsigned __int16 *)((char *)v8 + KeyValueInformation + 12 - (char *)a7);
      if ( !(_WORD)result )
        break;
      *v8++ = result;
      --v17;
    }
    while ( v17 );
    if ( !v17 )
    {
      --v8;
      v18 = -2147483643;
    }
    *v8 = 0;
    if ( v18 < 0 )
    {
      v19 = 12;
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               3u,
               v19,
               (__int64)&WPP_c671d3244828ed8229bc566b772a601b_Traceguids);
    }
  }
  return result;
}
