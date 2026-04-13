/*
 * XREFs of sub_18000886C @ 0x18000886C
 * Callers:
 *     sub_180026E6D @ 0x180026E6D (sub_180026E6D.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18000886C(_QWORD *a1))()
{
  __int64 v1; // rsi
  __int64 (__fastcall **result)(); // rax

  v1 = a1[1];
  result = off_18002D398;
  *a1 = off_18002D398;
  if ( v1 )
  {
    result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    a1[1] = 0LL;
  }
  return result;
}
