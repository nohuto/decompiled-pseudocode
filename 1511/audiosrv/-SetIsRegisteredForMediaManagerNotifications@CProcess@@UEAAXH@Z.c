/*
 * XREFs of ?SetIsRegisteredForMediaManagerNotifications@CProcess@@UEAAXH@Z @ 0x1800493F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetIsRegisteredForMediaManagerNotifications(CProcess *this, int a2)
{
  *((_DWORD *)this + 104) = a2;
}
