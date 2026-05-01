/*
 * XREFs of Srv_QueryEnergyUsageLevels @ 0x18004BD50
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_QueryEnergyUsageLevels(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(struct IUnknown *, __int64))g_pAppEnergyManager->lpVtbl[1].QueryInterface)(
           g_pAppEnergyManager,
           a2);
}
