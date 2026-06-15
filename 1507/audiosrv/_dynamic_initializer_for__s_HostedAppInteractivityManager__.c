/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001130
 * Callers:
 *     <none>
 * Callees:
 *     ??0CHostedAppInteractivityManager@@QEAA@XZ @ 0x180041184 (--0CHostedAppInteractivityManager@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__s_HostedAppInteractivityManager__(CHostedAppInteractivityManager *a1)
{
  CHostedAppInteractivityManager::CHostedAppInteractivityManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
