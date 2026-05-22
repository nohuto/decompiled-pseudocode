/*
 * XREFs of ?OnInputRegistryKeyChangeStatic@InputStateManager@@SAXPEAXPEAUHKEY__@@@Z @ 0x180006E20
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputRegistryKeyChange@InputStateManager@@AEAAXPEAUHKEY__@@@Z @ 0x180006E34 (-OnInputRegistryKeyChange@InputStateManager@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall InputStateManager::OnInputRegistryKeyChangeStatic(InputStateManager *a1, HKEY a2)
{
  if ( a1 )
    InputStateManager::OnInputRegistryKeyChange(a1, a2);
}
