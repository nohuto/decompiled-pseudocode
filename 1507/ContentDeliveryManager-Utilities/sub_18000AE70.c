/*
 * XREFs of sub_18000AE70 @ 0x18000AE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

unsigned __int16 *__fastcall sub_18000AE70(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned __int16 *i; // rsi

  for ( i = a3; i != a4; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, a2, *i) )
      break;
  }
  return i;
}
