/*
 * XREFs of CheckDesktopPolicy @ 0x1C006C1A0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0020130 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     RtlLoadStringOrError @ 0x1C006CA70 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(const UNICODE_STRING *a1, const WCHAR *a2)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-F8h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-F4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v12[160]; // [rsp+60h] [rbp-C8h] BYREF

  v8 = gdwPolicyFlags & 6;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v12);
      a2 = (const WCHAR *)v12;
    }
    do
    {
      v5 = OpenCacheKeyEx(a1, 4LL, 0x20019u, &v8);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
      v6 = ZwQueryValueKey(v5, &DestinationString, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v5);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL, v7);
        return 1LL;
      }
    }
    while ( v8 );
  }
  return 0LL;
}
