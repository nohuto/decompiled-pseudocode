/*
 * XREFs of sub_18001895C @ 0x18001895C
 * Callers:
 *     sub_18000D450 @ 0x18000D450 (sub_18000D450.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18001895C(__int64 a1, const GUID *a2)
{
  __int64 v2; // rax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*(_QWORD *)(a1 + 16) & 0x800000000000LL) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24) & 0x800000000000LL;
    if ( v2 == *(_QWORD *)(a1 + 24) )
      LODWORD(v2) = sub_1800011FC(a1, byte_18003304B, a2, 0LL, 2u, &v4);
  }
  return v2;
}
