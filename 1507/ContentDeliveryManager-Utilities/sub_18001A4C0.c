/*
 * XREFs of sub_18001A4C0 @ 0x18001A4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001ADC0 @ 0x18001ADC0 (sub_18001ADC0.c)
 */

__int64 __fastcall sub_18001A4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi

  v2 = a1 - 144;
  if ( a1 != 144 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(a1 - 144);
  v4 = sub_18001ADC0(v2, a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v4;
}
