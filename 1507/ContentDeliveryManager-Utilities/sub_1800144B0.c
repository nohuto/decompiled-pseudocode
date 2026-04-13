/*
 * XREFs of sub_1800144B0 @ 0x1800144B0
 * Callers:
 *     sub_180011C18 @ 0x180011C18 (sub_180011C18.c)
 *     sub_180013D6C @ 0x180013D6C (sub_180013D6C.c)
 *     sub_180014460 @ 0x180014460 (sub_180014460.c)
 *     sub_18002185C @ 0x18002185C (sub_18002185C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

_QWORD *__fastcall sub_1800144B0(_QWORD *a1, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  if ( *a1 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
