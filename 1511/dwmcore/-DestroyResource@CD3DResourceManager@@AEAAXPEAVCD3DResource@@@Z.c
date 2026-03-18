/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80
 * Callers:
 *     ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x180028064 (-DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180028170 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180028200 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002829C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x18002D430 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180027B5C (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x180029D30 (-ReleaseD3DResources@CD3DSurface@@MEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x18002DA00 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x18008B310 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  void (__fastcall *v4)(CD3DSurface *__hidden); // rbx
  struct CD3DResource **v5; // rdx
  struct CD3DResource **v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  unsigned __int32 v9; // eax

  if ( ((unsigned __int8 (__fastcall *)(struct CD3DResource ***))(*a2)[3])(a2) )
    CD3DResource::Invalidate((CD3DResource *)a2);
  v4 = (void (__fastcall *)(CD3DSurface *__hidden))(*a2)[4];
  if ( v4 == CD3DTexture::ReleaseD3DResources )
  {
    CD3DTexture::ReleaseD3DResources((CD3DTexture *)a2);
  }
  else if ( v4 == CHwBitmapCache::ReleaseD3DResources )
  {
    CHwBitmapCache::ReleaseD3DResources((CHwBitmapCache *)a2);
  }
  else if ( v4 == CD3DSurface::ReleaseD3DResources )
  {
    CD3DSurface::ReleaseD3DResources((CD3DSurface *)a2);
  }
  else
  {
    v4((CD3DSurface *)a2);
  }
  a2[2] = 0LL;
  v5 = a2[4];
  v6 = a2[5];
  if ( v5[1] != (struct CD3DResource *)(a2 + 4) || *v6 != (struct CD3DResource *)(a2 + 4) )
    __fastfail(3u);
  *v6 = (struct CD3DResource *)v5;
  v5[1] = (struct CD3DResource *)v6;
  v7 = *((_DWORD *)a2 + 18);
  if ( g_pMediaControl )
  {
    v8 = *((_QWORD *)g_pMediaControl + 2);
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 68), -v7) - v7;
    if ( v9 < *(_DWORD *)(v8 + 72) )
      _InterlockedExchange((volatile __int32 *)(v8 + 72), v9);
  }
  *((_DWORD *)this + 24) -= v7;
}
