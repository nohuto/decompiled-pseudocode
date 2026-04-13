/*
 * XREFs of sub_18001DC9C @ 0x18001DC9C
 * Callers:
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 *     sub_18001B22C @ 0x18001B22C (sub_18001B22C.c)
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 *     sub_18001BCBC @ 0x18001BCBC (sub_18001BCBC.c)
 *     sub_18001C03C @ 0x18001C03C (sub_18001C03C.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 *     sub_18001C73C @ 0x18001C73C (sub_18001C73C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001DC9C(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+30h] [rbp-18h] BYREF
  signed __int32 v3; // [rsp+58h] [rbp+10h] BYREF

  if ( qword_18003AC90 )
  {
    _InterlockedCompareExchange(&v3, *(_DWORD *)(a1 + 40), v3);
    v2 = xmmword_18002C040;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, signed __int32))(*(_QWORD *)qword_18003AC90 + 56LL))(
             qword_18003AC90,
             0LL,
             2LL,
             &v2,
             a1,
             v3);
  }
  return result;
}
