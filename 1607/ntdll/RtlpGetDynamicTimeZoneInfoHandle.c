/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x1800576C8
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180057480 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180040FC4 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x18005777C (RtlStringCbCatW.c)
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  _WORD v7[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  result = RtlStringCbCopyW(v7, 0x200uLL, (__int64)L"Time Zones\\");
  if ( (int)result >= 0 )
  {
    result = RtlStringCbCatW(v7, v5, a1);
    if ( (int)result >= 0 )
    {
      result = RtlStringCbCatW(v7, v6, L"\\Dynamic DST");
      if ( (int)result >= 0 )
        return RtlpGetRegistryHandle(3LL, v7, 0LL, a2);
    }
  }
  return result;
}
