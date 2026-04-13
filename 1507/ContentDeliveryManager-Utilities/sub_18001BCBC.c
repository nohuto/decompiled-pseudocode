/*
 * XREFs of sub_18001BCBC @ 0x18001BCBC
 * Callers:
 *     sub_18001CD30 @ 0x18001CD30 (sub_18001CD30.c)
 *     sub_18001D3EC @ 0x18001D3EC (sub_18001D3EC.c)
 *     sub_180027A9C @ 0x180027A9C (sub_180027A9C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001DC9C @ 0x18001DC9C (sub_18001DC9C.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_18001BCBC(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rsi
  __int64 v4; // rsi

  result = &off_18002D700;
  *(_QWORD *)a1 = &off_18002D700;
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
