/*
 * XREFs of PipIs32bitKey @ 0x1401BE52C
 * Callers:
 *     PnpLoadBootFilterDriver @ 0x140750858 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1401508E0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 */

__int64 __fastcall PipIs32bitKey(HANDLE KeyHandle)
{
  unsigned __int8 v1; // bl
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  v1 = 0;
  if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, v5, 0xCu, &ResultLength) >= 0 && (v5[0] & 1) != 0 )
  {
    return 1;
  }
  else if ( ZwQueryValueKey(
              KeyHandle,
              (PUNICODE_STRING)&stru_140257640,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength) >= 0
         && v7 == 4
         && v8 == 4 )
  {
    return v9 == 1;
  }
  return v1;
}
