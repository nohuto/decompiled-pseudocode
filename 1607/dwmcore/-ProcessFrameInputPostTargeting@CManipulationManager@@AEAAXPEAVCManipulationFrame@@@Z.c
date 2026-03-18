/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006C60
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180008250 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x180106B00 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180106B48 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        struct CComposition **this,
        struct CManipulationFrame *a2)
{
  char v2; // r12
  unsigned int i; // esi
  __int64 v6; // r15
  char *v7; // r14
  struct CManipulationContext *v8; // rbx
  struct CInteraction *v9; // rax
  CManipulationContext *v10; // rcx
  struct CManipulationFrame *v11; // [rsp+78h] [rbp+10h] BYREF
  struct CManipulationContext *v12; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = 152LL * i;
    v7 = (char *)a2 + v6;
    if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x840000) != 0 )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        this + 16,
        &v12,
        v7 + 36);
      v8 = v12;
      if ( v12 )
      {
        v9 = (struct CInteraction *)(*(__int64 (__fastcall **)(struct CManipulationContext *, _QWORD))(*(_QWORD *)v12 + 24LL))(
                                      v12,
                                      *((unsigned int *)v7 + 9));
        CManipulationManager::OnUp(this, v9, *((_DWORD *)v7 + 9), *((_DWORD *)a2 + 8), v8, 0, 0);
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v12);
    }
    else if ( (*((_BYTE *)a2 + v6 + 44) & 2) == 0 )
    {
      v10 = this[34];
      if ( v10 )
        CManipulationContext::OnContactHoverDepart(v10, *((_DWORD *)v7 + 9));
    }
    if ( !v2 && *(_QWORD *)((char *)a2 + v6 + 56) == -1LL )
    {
      v11 = a2;
      v2 = 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
      CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
        this + 24,
        &v11);
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v11);
    }
  }
}
