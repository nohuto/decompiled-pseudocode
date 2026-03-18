/*
 * XREFs of ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC
 * Callers:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180015A60 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ @ 0x180056120 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18008AC0C (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18008B4C0 (-ResetStateAndDeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyAndDeleteDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // esi
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v4; // rdi
  struct CD3DResource *v6; // r14

  v1 = 0;
  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v4 = InterlockedFlushSList(i);
    if ( !v4 )
      break;
    do
    {
      v6 = (struct CD3DResource *)&v4[-3];
      v4 = v4->Next;
      CD3DResourceManager::DestroyResource(this, v6);
      if ( v6 )
        (*(void (__fastcall **)(struct CD3DResource *, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
      ++v1;
    }
    while ( v4 );
  }
  return v1;
}
