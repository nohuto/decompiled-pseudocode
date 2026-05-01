/*
 * XREFs of ?IsEnergyNotificationServerAvailable@AppEnergyUsageManager@@IEAAHXZ @ 0x18001C9FC
 * Callers:
 *     ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x18001CA50 (-OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z.c)
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
