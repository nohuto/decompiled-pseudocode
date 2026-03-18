/*
 * XREFs of ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002829C
 * Callers:
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180022A48 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180028198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180028200 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x1800728B4 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyAndDeleteDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // esi
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v4; // rdi
  struct CD3DResource ***v6; // r14

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
