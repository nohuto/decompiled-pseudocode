/*
 * XREFs of ?IsEnergyNotificationServerAvailable@AppEnergyUsageManager@@IEAAHXZ @ 0x180019270
 * Callers:
 *     ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x1800192C0 (-OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppEnergyUsageManager::IsEnergyNotificationServerAvailable(AppEnergyUsageManager *this)
{
  unsigned int v1; // edi
  HMODULE v2; // rbx
  HMODULE LibraryW; // rax

  v1 = 1;
  v2 = 0LL;
  LibraryW = LoadLibraryW(L"SrumAPI.dll");
  if ( LibraryW )
    v2 = LibraryW;
  else
    v1 = 0;
  if ( v2 )
    FreeLibrary(v2);
  return v1;
}
