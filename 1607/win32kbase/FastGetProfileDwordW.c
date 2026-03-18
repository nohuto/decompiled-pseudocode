/*
 * XREFs of FastGetProfileDwordW @ 0x1C00550B0
 * Callers:
 *     ?InitUIPI@@YAXXZ @ 0x1C0054038 (-InitUIPI@@YAXXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0054708 (W32kEtwEnableCallback.c)
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileDwordW(
        const UNICODE_STRING *a1,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        _DWORD *a5,
        int a6)
{
  const UNICODE_STRING *i; // rbp
  void *v9; // rsi
  int v11; // [rsp+30h] [rbp-68h]
  ULONG ResultLength; // [rsp+34h] [rbp-64h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+54h] [rbp-44h]

  v11 = a6 | gdwPolicyFlags;
  for ( i = a1; ; a1 = i )
  {
    v9 = (void *)OpenCacheKeyEx(a1);
    if ( !v9 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      a4 = v15;
LABEL_5:
      ZwClose(v9);
      goto LABEL_6;
    }
    if ( !v11 )
      goto LABEL_5;
    ZwClose(v9);
  }
  if ( (a6 & 0x10) != 0 )
    return 0LL;
LABEL_6:
  if ( a5 )
    *a5 = a4;
  return 1LL;
}
