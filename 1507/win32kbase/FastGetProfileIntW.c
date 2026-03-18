/*
 * XREFs of FastGetProfileIntW @ 0x1C007CDE0
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 *     FastGetProfileIntsW @ 0x1C007CBF0 (FastGetProfileIntsW.c)
 *     FastGetProfileIntFromID @ 0x1C007CC90 (FastGetProfileIntFromID.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C00317C0 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(__int64 a1, __int64 a2, const WCHAR *a3, ULONG a4, ULONG *a5, int a6)
{
  ULONG Value; // [rsp+40h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-90h] BYREF
  WCHAR SourceString[40]; // [rsp+60h] [rbp-78h] BYREF

  if ( (unsigned int)FastGetProfileStringW(a1, a2, a3, 0LL, (char *)SourceString, 0x28u, a6) )
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
