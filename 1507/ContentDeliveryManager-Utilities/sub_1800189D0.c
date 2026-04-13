/*
 * XREFs of sub_1800189D0 @ 0x1800189D0
 * Callers:
 *     sub_18000D4D4 @ 0x18000D4D4 (sub_18000D4D4.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_1800189D0(__int64 a1, const GUID *a2)
{
  __int64 v2; // rax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*(_QWORD *)(a1 + 16) & 0x200000000000LL) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24) & 0x200000000000LL;
    if ( v2 == *(_QWORD *)(a1 + 24) )
      LODWORD(v2) = sub_1800011FC(a1, byte_180032D99, a2, 0LL, 2u, &v4);
  }
  return v2;
}
