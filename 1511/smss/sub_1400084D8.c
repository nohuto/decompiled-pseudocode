/*
 * XREFs of sub_1400084D8 @ 0x1400084D8
 * Callers:
 *     sub_1400081E0 @ 0x1400081E0 (sub_1400081E0.c)
 *     sub_1400083D0 @ 0x1400083D0 (sub_1400083D0.c)
 *     sub_1400084B0 @ 0x1400084B0 (sub_1400084B0.c)
 *     sub_140008DF0 @ 0x140008DF0 (sub_140008DF0.c)
 *     sub_1400119F0 @ 0x1400119F0 (sub_1400119F0.c)
 *     sub_140011A70 @ 0x140011A70 (sub_140011A70.c)
 *     sub_140011AC0 @ 0x140011AC0 (sub_140011AC0.c)
 * Callees:
 *     sub_1400089B0 @ 0x1400089B0 (sub_1400089B0.c)
 */

__int64 __fastcall sub_1400084D8(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned int a4, __int64 a5)
{
  struct _UNICODE_STRING *v8; // r8
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v8 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(&v10, a3);
    v8 = &v10;
  }
  return sub_1400089B0(a1, &DestinationString, v8, a4, a5);
}
