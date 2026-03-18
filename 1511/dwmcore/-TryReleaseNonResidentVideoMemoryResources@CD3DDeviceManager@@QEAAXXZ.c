/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x1800728B4
 * Callers:
 *     ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180082EA0 (-OnBeginComposition@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResourcesInList@CD3DResourceManager@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x180027E98 (-TryReleaseNonResidentVideoMemoryResourcesInList@CD3DResourceManager@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002829C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceManager::TryReleaseNonResidentVideoMemoryResources(CD3DDeviceManager *this)
{
  unsigned int i; // edi
  __int64 v3; // rbp

  for ( i = 0; i < *((_DWORD *)this + 32); ++i )
  {
    v3 = *(_QWORD *)(32LL * i + *((_QWORD *)this + 12));
    if ( !*(_BYTE *)(v3 + 1036) )
    {
      CD3DResourceManager::TryReleaseNonResidentVideoMemoryResourcesInList(this, (struct _LIST_ENTRY *)(v3 + 896));
      CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DResourceManager *)(v3 + 848));
      *(_BYTE *)(v3 + 1036) = 1;
    }
  }
}
