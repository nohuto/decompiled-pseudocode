/*
 * XREFs of std::_dynamic_atexit_destructor_for__classic_locale__ @ 0x1800758A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void std::_dynamic_atexit_destructor_for__classic_locale__()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax

  if ( qword_1800F3C00 )
  {
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1800F3C00 + 16LL))(qword_1800F3C00);
    if ( v0 )
      (**v0)(v0, 1LL);
  }
}
