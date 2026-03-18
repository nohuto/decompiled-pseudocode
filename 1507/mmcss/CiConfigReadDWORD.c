/*
 * XREFs of CiConfigReadDWORD @ 0x1C000D5C0
 * Callers:
 *     CiConfigInitialize @ 0x1C000D2E0 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002AA0 (__security_check_cookie.c)
 *     WPP_SF_Zd @ 0x1C0003E78 (WPP_SF_Zd.c)
 */

__int64 __fastcall CiConfigReadDWORD(void *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 Length; // [rsp+20h] [rbp-38h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v10; // [rsp+44h] [rbp-14h]

  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0 && v9 == 4 )
    return v10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(Length) = a3;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
      (char *)a2,
      Length);
  }
  return a3;
}
