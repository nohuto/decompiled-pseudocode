/*
 * XREFs of CheckDesktopPolicy @ 0x1C0012BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0012C80 (RtlLoadStringOrError.c)
 *     OpenCacheKeyEx @ 0x1C0032120 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(__int64 a1, const WCHAR *a2)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // [rsp+30h] [rbp-F8h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-F4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v11[160]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = gdwPolicyFlags & 6;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v11);
      a2 = (const WCHAR *)v11;
    }
    do
    {
      v5 = (void *)OpenCacheKeyEx(a1, 4LL, 131097LL, &v7);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
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
