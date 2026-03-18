/*
 * XREFs of FastGetProfileIntW @ 0x1C0055910
 * Callers:
 *     FastGetProfileIntsW @ 0x1C00551B0 (FastGetProfileIntsW.c)
 *     FastGetProfileIntFromID @ 0x1C0055720 (FastGetProfileIntFromID.c)
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C00559C0 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(const UNICODE_STRING *a1, __int64 a2, __int64 a3, ULONG a4, ULONG *a5, int a6)
{
  unsigned __int64 v8; // [rsp+28h] [rbp-B0h]
  ULONG Value; // [rsp+40h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-90h] BYREF
  WCHAR SourceString[40]; // [rsp+60h] [rbp-78h] BYREF

  LODWORD(v8) = 40;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, v8, a6) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
    *a5 = Value;
    return 1LL;
  }
  if ( (a6 & 0x10) == 0 )
  {
    *a5 = a4;
    return 1LL;
  }
  return 0LL;
}
