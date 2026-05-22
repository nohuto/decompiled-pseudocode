/*
 * XREFs of ?OnMagnifierRegistryKeyChangeStatic@MagnifierComponent@@SAXPEAXPEAUHKEY__@@@Z @ 0x1800814D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMagnifierRegistryKeyChange@MagnifierComponent@@AEAAXPEAUHKEY__@@@Z @ 0x1800814E4 (-OnMagnifierRegistryKeyChange@MagnifierComponent@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall MagnifierComponent::OnMagnifierRegistryKeyChangeStatic(MagnifierComponent *a1, HKEY a2)
{
  if ( a1 )
    MagnifierComponent::OnMagnifierRegistryKeyChange(a1, a2);
}
