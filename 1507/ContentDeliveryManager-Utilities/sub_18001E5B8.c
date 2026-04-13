/*
 * XREFs of sub_18001E5B8 @ 0x18001E5B8
 * Callers:
 *     sub_18001AEF0 @ 0x18001AEF0 (sub_18001AEF0.c)
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E5B8(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // esi

  v4 = *a1;
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, &unk_18002BF08, a3);
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
