/*
 * XREFs of sub_180028170 @ 0x180028170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_180028170()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax

  if ( qword_18003A3A8 )
  {
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18003A3A8 + 16LL))(qword_18003A3A8);
    if ( v0 )
      (**v0)(v0, 1LL);
  }
}
