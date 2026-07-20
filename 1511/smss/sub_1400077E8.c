/*
 * XREFs of sub_1400077E8 @ 0x1400077E8
 * Callers:
 *     sub_140007750 @ 0x140007750 (sub_140007750.c)
 *     sub_1400077A0 @ 0x1400077A0 (sub_1400077A0.c)
 *     sub_140010720 @ 0x140010720 (sub_140010720.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400077E8(__int64 a1, struct _UNICODE_STRING *a2, int a3, _DWORD *a4)
{
  ULONG ResultLength[4]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-228h] BYREF
  int v9; // [rsp+44h] [rbp-224h]
  int v10; // [rsp+4Ch] [rbp-21Ch]

  ResultLength[0] = 528;
  if ( NtQueryValueKey(Handle, a2, KeyValuePartialInformation, KeyValueInformation, 0x210u, ResultLength) >= 0
    && v9 == 4 )
  {
    *a4 = v10;
  }
  else
  {
    *a4 = a3;
  }
  return 0LL;
}
