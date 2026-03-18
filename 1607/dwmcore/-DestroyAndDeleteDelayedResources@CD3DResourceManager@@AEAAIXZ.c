/*
 * XREFs of ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18009F470
 * Callers:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DResourceManager@@QEAAXXZ @ 0x180016E7C (-TryReleaseNonResidentVideoMemoryResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E9C4 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18009F3D0 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18009F438 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyAndDeleteDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // edi
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v4; // rbx
  struct CD3DResource ***v6; // rsi

  v1 = 0;
  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v4 = InterlockedFlushSList(i);
    if ( !v4 )
      break;
    do
    {
      v6 = (struct CD3DResource ***)&v4[-3];
      v4 = v4->Next;
      CD3DResourceManager::DestroyResource(this, v6);
      if ( v6 )
        ((void (__fastcall *)(struct CD3DResource ***, __int64))(*v6)[2])(v6, 1LL);
      ++v1;
    }
    while ( v4 );
  }
  return v1;
}
