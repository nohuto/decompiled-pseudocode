/*
 * XREFs of Srv_RegisterForPackageEnergyStateChangeNotifications @ 0x180021670
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1800216C0 (-RegisterForPackageEnergyStateChangeNotifications@AppEnergyUsageManager@@UEAAJPEAT_LARGE_INTEGER.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_RegisterForPackageEnergyStateChangeNotifications(__int64 a1, union _LARGE_INTEGER *a2)
{
  ULONG (__stdcall *Release)(IUnknown *); // rdi

  Release = g_pAppEnergyManager->lpVtbl[2].Release;
  if ( (char *)Release == (char *)AppEnergyUsageManager::RegisterForPackageEnergyStateChangeNotifications )
    return AppEnergyUsageManager::RegisterForPackageEnergyStateChangeNotifications(
             (AppEnergyUsageManager *)g_pAppEnergyManager,
             a2);
  else
    return ((__int64 (__fastcall *)(struct IUnknown *, union _LARGE_INTEGER *))Release)(g_pAppEnergyManager, a2);
}
