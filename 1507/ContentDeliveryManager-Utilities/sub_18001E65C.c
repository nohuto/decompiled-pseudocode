/*
 * XREFs of sub_18001E65C @ 0x18001E65C
 * Callers:
 *     sub_18001AC60 @ 0x18001AC60 (sub_18001AC60.c)
 *     sub_18001D8C8 @ 0x18001D8C8 (sub_18001D8C8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E65C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // esi

  v4 = *a1;
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, &unk_18002F910, a3);
  }
  else
  {
    *a3 = 0LL;
    v5 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
