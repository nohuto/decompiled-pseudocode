/*
 * XREFs of sub_18001B22C @ 0x18001B22C
 * Callers:
 *     sub_18001CB30 @ 0x18001CB30 (sub_18001CB30.c)
 *     sub_18001D368 @ 0x18001D368 (sub_18001D368.c)
 *     sub_180027A8A @ 0x180027A8A (sub_180027A8A.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001DC9C @ 0x18001DC9C (sub_18001DC9C.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_18001B22C(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rsi
  __int64 v4; // rsi

  result = &off_18002E418;
  *(_QWORD *)a1 = &off_18002E418;
  if ( !*(_DWORD *)(a1 + 8) )
    result = (_UNKNOWN **)sub_18001DC9C(a1);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
