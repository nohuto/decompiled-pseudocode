/*
 * XREFs of _dynamic_initializer_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__ @ 0x1800012F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ @ 0x18002F680 (--0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__(
        Windows::Internal::Shell::Holographic::SecureModeListener *a1)
{
  Windows::Internal::Shell::Holographic::SecureModeListener::SecureModeListener(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__);
}
