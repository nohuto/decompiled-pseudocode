/*
 * XREFs of Srv_GetDeviceSpecificConversionFactor @ 0x180046560
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_GetDeviceSpecificConversionFactor(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(struct IUnknown *, __int64))g_pAppEnergyManager->lpVtbl[3].QueryInterface)(
           g_pAppEnergyManager,
           a2);
}
