/*
 * XREFs of _dynamic_atexit_destructor_for__ViewHeirarchy::s_instance__ @ 0x1800A3EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__ViewHeirarchy::s_instance__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = ViewHeirarchy::s_instance;
  if ( ViewHeirarchy::s_instance )
  {
    ViewHeirarchy::s_instance = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
