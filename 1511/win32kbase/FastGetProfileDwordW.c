/*
 * XREFs of FastGetProfileDwordW @ 0x1C006AB50
 * Callers:
 *     ?InitUIPI@@YAXXZ @ 0x1C0068BE8 (-InitUIPI@@YAXXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0068E54 (W32kEtwEnableCallback.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0020130 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileDwordW(
        const UNICODE_STRING *a1,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        _DWORD *a5,
        int a6)
{
  unsigned int v8; // r14d
  const UNICODE_STRING *i; // rbp
  void *v10; // rsi
  int v12; // [rsp+30h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-64h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-50h] BYREF
  int v16; // [rsp+54h] [rbp-44h]

  v8 = a2;
  v12 = a6 | gdwPolicyFlags;
  for ( i = a1; ; a1 = i )
  {
    v10 = OpenCacheKeyEx(a1, a2, 0x20019u, &v12);
    if ( !v10 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      a4 = v16;
LABEL_5:
      ZwClose(v10);
      goto LABEL_6;
    }
    if ( !v12 )
      goto LABEL_5;
    ZwClose(v10);
    a2 = v8;
  }
  if ( (a6 & 0x10) != 0 )
    return 0LL;
LABEL_6:
  if ( a5 )
    *a5 = a4;
  return 1LL;
}
