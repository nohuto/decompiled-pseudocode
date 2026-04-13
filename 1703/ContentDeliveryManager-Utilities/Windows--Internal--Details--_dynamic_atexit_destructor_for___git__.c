/*
 * XREFs of Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x180075680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::Details::_dynamic_atexit_destructor_for___git__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = qword_1800F4758;
  if ( qword_1800F4758 )
  {
    qword_1800F4758 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
