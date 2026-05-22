/*
 * XREFs of ?OnMouseRegistryKeyChangeStatic@MouseAccelerator@@SAXPEAXPEAUHKEY__@@@Z @ 0x180059E10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z @ 0x180059E24 (-OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z.c)
 */

void __fastcall MouseAccelerator::OnMouseRegistryKeyChangeStatic(MouseAccelerator *a1, HKEY a2)
{
  if ( a1 )
    MouseAccelerator::OnMouseRegistryKeyChange(a1, a2);
}
