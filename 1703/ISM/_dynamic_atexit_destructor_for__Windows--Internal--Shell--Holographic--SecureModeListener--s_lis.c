/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__ @ 0x1800A3DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void dynamic_atexit_destructor_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__()
{
  DeleteCriticalSection(&stru_1800D38E0);
  if ( Windows::Internal::Shell::Holographic::SecureModeListener::s_listener )
    (**(void (__fastcall ***)(__int64, __int64))Windows::Internal::Shell::Holographic::SecureModeListener::s_listener)(
      Windows::Internal::Shell::Holographic::SecureModeListener::s_listener,
      1LL);
}
