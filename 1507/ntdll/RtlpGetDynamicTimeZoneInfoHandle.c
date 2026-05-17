/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x18000D3F8
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18000D1B0 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCatW @ 0x18000D4AC (RtlStringCbCatW.c)
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     RtlStringCbCopyW @ 0x18001F684 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  _BYTE v7[512]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  result = RtlStringCbCopyW(v7, 512LL, L"Time Zones\\");
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
