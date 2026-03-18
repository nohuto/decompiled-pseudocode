/*
 * XREFs of ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180056120
 * Callers:
 *     ?OnBeginComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180046440 (-OnBeginComposition@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?TryReleaseNonResidentVideoMemoryResourcesInList@CD3DResourceManager@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800159D4 (-TryReleaseNonResidentVideoMemoryResourcesInList@CD3DResourceManager@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DDeviceManager::TryReleaseNonResidentVideoMemoryResources(CD3DDeviceManager *this)
{
  unsigned int i; // edi
  __int64 v3; // rbp

  for ( i = 0; i < *((_DWORD *)this + 34); ++i )
  {
    v3 = *(_QWORD *)(32LL * i + *((_QWORD *)this + 13));
    if ( !*(_BYTE *)(v3 + 1068) )
    {
      CD3DResourceManager::TryReleaseNonResidentVideoMemoryResourcesInList(this, (struct _LIST_ENTRY *)(v3 + 944));
      CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DResourceManager *)(v3 + 896));
      *(_BYTE *)(v3 + 1068) = 1;
    }
  }
}
