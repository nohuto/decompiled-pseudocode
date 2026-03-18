/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004BE0
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?ResolveInteractionHandle@CInteraction@@SAXI_KPEAPEAV1@@Z @ 0x180001E6C (-ResolveInteractionHandle@CInteraction@@SAXI_KPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z @ 0x180004230 (-CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x180005370 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1800055A4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180005608 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800FBBF8 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x180143A38 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        struct CComposition **this,
        struct CManipulationFrame *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r12d
  __int64 v6; // r14
  CManipulationContext *v7; // rcx
  CManipulationContext **v8; // r15
  CManipulationContext *v9; // rax
  unsigned int v10; // [rsp+68h] [rbp+10h]
  struct CInteraction *v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 8);
  v10 = v2;
  v5 = 0;
  for ( *CManipulationManager::CurrentPerfCount((CManipulationManager *)this, v2) = *((_QWORD *)a2 + 14);
        v5 < *((_DWORD *)a2 + 4);
        ++v5 )
  {
    v6 = 152LL * v5;
    if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x20006) == 0x20002
      || (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x10000) != 0 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v11);
      CInteraction::ResolveInteractionHandle(*(_DWORD *)((char *)a2 + v6 + 56), *((_QWORD *)a2 + 14), &v11);
      if ( v11 )
      {
        if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x10000) != 0 )
        {
          CManipulationManager::OnNewContact(
            (CManipulationManager *)this,
            (HMONITOR *)v11,
            *(_DWORD *)((char *)a2 + v6 + 36),
            v2,
            0,
            1);
          if ( (*((_BYTE *)a2 + v6 + 44) & 1) == 0 )
          {
            v7 = this[34];
            if ( v7 )
              CManipulationContext::OnContactHoverDepart(v7, *(_DWORD *)((char *)a2 + v6 + 36));
          }
        }
        else
        {
          v8 = this + 34;
          if ( !this[34] )
          {
            v9 = (CManipulationContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                           WPF::g_pProcessHeap,
                                           144LL);
            if ( v9 )
              v9 = CManipulationContext::CManipulationContext(v9, this[2]);
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(this + 34, v9);
            if ( *v8 )
              CManipulationContext::Initialize(*v8, 0, 0LL);
            v2 = v10;
          }
          if ( *v8 )
            CManipulationContext::OnHoverContact(
              *v8,
              v11,
              *(_DWORD *)((char *)a2 + v6 + 36),
              *(_DWORD *)((char *)a2 + v6 + 32));
        }
      }
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v11);
    }
  }
}
