/*
 * XREFs of ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C773C
 * Callers:
 *     ReadDigitizerToMonitorMappings @ 0x1C01CDEA0 (ReadDigitizerToMonitorMappings.c)
 * Callees:
 *     wcsncpycch @ 0x1C0100664 (wcsncpycch.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C011FF84 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall ReadSingleDigitizerToMonitorMappings(
        struct DEVICEINFO *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct _KEY_VALUE_PARTIAL_INFORMATION *KeyValueInformation,
        unsigned int a6,
        unsigned __int16 *a7)
{
  wchar_t *v10; // rax
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-B0h] BYREF

  Length = 524;
  memset(SourceString, 0, sizeof(SourceString));
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( (int)RtlStringCchPrintfW(SourceString, 256LL, L"%d-", a3) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)((char *)a1 + 200)) >= 0 )
    {
      v10 = wcsstr(DestinationString.Buffer, L"?");
      if ( v10 )
        wcsncpycch(v10, (__int64)L"\\", 1);
      if ( ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length) >= 0
        && KeyValueInformation->Type == 1
        && Length <= 0x200 )
      {
        RtlStringCchCopyW((char *)a7, 128LL, (char *)KeyValueInformation->Data);
      }
    }
  }
}
