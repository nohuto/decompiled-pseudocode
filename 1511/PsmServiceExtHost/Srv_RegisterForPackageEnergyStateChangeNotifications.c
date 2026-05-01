/*
 * XREFs of Srv_RegisterForPackageEnergyStateChangeNotifications @ 0x1800243B0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_RegisterForPackageEnergyStateChangeNotifications(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(struct IUnknown *, __int64))g_pAppEnergyManager->lpVtbl[2].Release)(
           g_pAppEnergyManager,
           a2);
}
