/*
 * XREFs of Srv_IsPackageInGoodEnergyState @ 0x1800050B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z @ 0x180005130 (-IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall Srv_IsPackageInGoodEnergyState(__int64 a1, const unsigned __int16 *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  ULONG (__stdcall *Release)(IUnknown *); // rbp
  int IsGoodEnergyState; // eax

  v3 = 0;
  if ( a3 )
  {
    Release = g_pAppEnergyManager->lpVtbl[1].Release;
    if ( (char *)Release == (char *)AppEnergyUsageManager::IsGoodEnergyState )
      IsGoodEnergyState = AppEnergyUsageManager::IsGoodEnergyState((AppEnergyUsageManager *)g_pAppEnergyManager, a2);
    else
      IsGoodEnergyState = ((__int64 (__fastcall *)(struct IUnknown *, const unsigned __int16 *))Release)(
                            g_pAppEnergyManager,
                            a2);
    *a3 = IsGoodEnergyState;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
