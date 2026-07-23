/*
 * XREFs of KsepCacheDeviceQueryData @ 0x14057C578
 * Callers:
 *     KsepDbCacheQueryDeviceData @ 0x14057C50C (KsepDbCacheQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall KsepCacheDeviceQueryData(__int64 a1, const WCHAR *a2)
{
  const UNICODE_STRING *v2; // rdi
  const UNICODE_STRING *v3; // rbx
  const UNICODE_STRING *v4; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = (const UNICODE_STRING *)(a1 + 56);
  v3 = *(const UNICODE_STRING **)(a1 + 56);
  RtlInitUnicodeString(&DestinationString, a2);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(const UNICODE_STRING **)&v3->Length;
    if ( RtlEqualUnicodeString(v4 + 1, &DestinationString, 1u) )
      return v4;
  }
  return 0LL;
}
