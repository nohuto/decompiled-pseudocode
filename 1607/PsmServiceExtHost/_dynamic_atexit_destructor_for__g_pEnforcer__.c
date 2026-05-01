/*
 * XREFs of _dynamic_atexit_destructor_for__g_pEnforcer__ @ 0x180020F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__g_pEnforcer__()
{
  __int64 result; // rax

  if ( g_pEnforcer )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_pEnforcer + 16LL))(g_pEnforcer);
  return result;
}
