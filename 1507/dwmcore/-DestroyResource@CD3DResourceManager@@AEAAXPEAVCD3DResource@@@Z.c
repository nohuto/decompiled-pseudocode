/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C
 * Callers:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180015A60 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180015C30 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x1800846C0 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 *     ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x18008AC74 (-DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180015CC8 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  struct CD3DResource **v4; // rdx
  struct CD3DResource **v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int32 v8; // eax

  if ( ((unsigned __int8 (__fastcall *)(struct CD3DResource ***))(*a2)[3])(a2) )
    CD3DResource::Invalidate((CD3DResource *)a2);
  ((void (__fastcall *)(struct CD3DResource ***))(*a2)[4])(a2);
  a2[2] = 0LL;
  v4 = a2[4];
  v5 = a2[5];
  if ( v4[1] != (struct CD3DResource *)(a2 + 4) || *v5 != (struct CD3DResource *)(a2 + 4) )
    __fastfail(3u);
  *v5 = (struct CD3DResource *)v4;
  v4[1] = (struct CD3DResource *)v5;
  v6 = *((_DWORD *)a2 + 18);
  if ( g_pMediaControl )
  {
    v7 = *((_QWORD *)g_pMediaControl + 2);
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 68), -v6) - v6;
    if ( v8 < *(_DWORD *)(v7 + 72) )
      _InterlockedExchange((volatile __int32 *)(v7 + 72), v8);
  }
  *((_DWORD *)this + 24) -= v6;
}
