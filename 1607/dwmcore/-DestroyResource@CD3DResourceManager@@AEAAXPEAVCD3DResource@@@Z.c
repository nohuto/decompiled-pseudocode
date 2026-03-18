/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204
 * Callers:
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180016E70 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x180017DB0 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x18009F2B4 (-DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18009F438 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18009F470 (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 * Callees:
 *     ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x180079730 (-ReleaseD3DResources@CD3DSurface@@MEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1800812B0 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x18009EEE8 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  void (__fastcall *v4)(CD3DSurface *); // rax
  struct CD3DResource **v5; // rdx
  struct CD3DResource **v6; // rcx

  if ( ((unsigned __int8 (__fastcall *)(struct CD3DResource ***))(*a2)[3])(a2) )
    CD3DResource::Invalidate((CD3DResource *)a2);
  if ( *((_BYTE *)a2 + 76) )
    --*((_DWORD *)this + 30);
  v4 = (void (__fastcall *)(CD3DSurface *))(*a2)[4];
  if ( v4 == CD3DTexture::ReleaseD3DResources )
  {
    CD3DTexture::ReleaseD3DResources((CD3DTexture *)a2);
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
  *((_DWORD *)this + 24) -= *((_DWORD *)a2 + 18);
}
