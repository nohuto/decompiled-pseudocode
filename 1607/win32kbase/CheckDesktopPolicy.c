/*
 * XREFs of CheckDesktopPolicy @ 0x1C0054FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C0055EE0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(PCUNICODE_STRING Source, PCWSTR SourceString)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // [rsp+30h] [rbp-F8h]
  ULONG ResultLength; // [rsp+34h] [rbp-F4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v11[160]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = gdwPolicyFlags & 6;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)SourceString & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)SourceString, v11);
      SourceString = (PCWSTR)v11;
    }
    do
    {
      v5 = (void *)OpenCacheKeyEx(Source);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = ZwQueryValueKey(v5, &DestinationString, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v5);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL);
        return 1LL;
      }
    }
    while ( v7 );
  }
  return 0LL;
}
