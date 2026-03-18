/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004574
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1800040C4 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000424C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800FBBF8 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1800FE810 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(RTL_SRWLOCK **this, struct CManipulationFrame *a2)
{
  char v2; // r13
  unsigned int i; // ebp
  __int64 v6; // r12
  int *v7; // r15
  struct CManipulationContext *v8; // rbx
  struct CInteraction *v9; // rax
  CManipulationContext *v10; // rcx
  struct CManipulationFrame *v11; // [rsp+88h] [rbp+10h] BYREF
  struct CManipulationContext *v12; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = 152LL * i;
    v7 = (int *)((char *)a2 + v6);
    if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x40000) != 0 )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)(this + 16),
        &v12,
        v7 + 9);
      v8 = v12;
      if ( v12 )
      {
        v9 = (struct CInteraction *)(*(__int64 (__fastcall **)(struct CManipulationContext *, _QWORD))(*(_QWORD *)v12 + 24LL))(
                                      v12,
                                      (unsigned int)v7[9]);
        CManipulationManager::OnUp(this, v9, v7[9], *((_DWORD *)a2 + 8), v8, 0, 0);
      }
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v12);
    }
    else if ( (*((_BYTE *)a2 + v6 + 44) & 2) == 0 )
    {
      v10 = (CManipulationContext *)this[34];
      if ( v10 )
        CManipulationContext::OnContactHoverDepart(v10, v7[9]);
    }
    if ( !v2 && *(_QWORD *)((char *)a2 + v6 + 56) == -1LL )
    {
      v11 = a2;
      v2 = 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
      CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
        this + 24,
        &v11);
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v11);
    }
  }
}
