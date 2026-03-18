/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180007390
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z @ 0x180006900 (-CurrentPerfCount@CManipulationManager@@AEAAAEA_KK@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x180007950 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180007B24 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x180007C48 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180008A5C (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x180106B00 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801711BC (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        struct CComposition **this,
        struct CManipulationFrame *a2)
{
  unsigned int v2; // r12d
  unsigned int v5; // r15d
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 *v9; // rbx
  struct CInteraction *v10; // rbx
  CManipulationContext *v11; // rcx
  CManipulationContext **v12; // r14
  CManipulationContext *v13; // rax
  CManipulationContext *v14; // rax
  struct CInteraction *v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 8);
  v5 = 0;
  for ( *CManipulationManager::CurrentPerfCount((CManipulationManager *)this, v2) = *((_QWORD *)a2 + 14);
        v5 < *((_DWORD *)a2 + 4);
        ++v5 )
  {
    v6 = 152LL * v5;
    v7 = *(_DWORD *)((char *)a2 + v6 + 44);
    if ( (((v7 & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 || (v7 & 0x810000) != 0 )
    {
      v8 = *((_QWORD *)a2 + 14);
      v9 = (unsigned __int64 *)&v16;
      v15 = 0LL;
      v16 = v8;
      if ( (v7 & 0x800000) != 0 )
        v9 = 0LL;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v15);
      CInteraction::ResolveInteractionHandle(*(_DWORD *)((char *)a2 + v6 + 56), v9, &v15);
      v10 = v15;
      if ( v15 )
      {
        if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x10000) != 0 )
        {
          CManipulationManager::OnNewContact(
            (CManipulationManager *)this,
            (HMONITOR *)v15,
            *(_DWORD *)((char *)a2 + v6 + 36),
            v2,
            0,
            1);
          if ( (*((_BYTE *)a2 + v6 + 44) & 1) == 0 )
          {
            v11 = this[34];
            if ( v11 )
              CManipulationContext::OnContactHoverDepart(v11, *(_DWORD *)((char *)a2 + v6 + 36));
          }
        }
        else if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 44) & 0x800000) != 0 )
        {
          CManipulationManager::OnNewContact(
            (CManipulationManager *)this,
            (HMONITOR *)v15,
            *(_DWORD *)((char *)a2 + v6 + 36),
            v2,
            0,
            0);
        }
        else
        {
          v12 = this + 34;
          if ( !this[34] )
          {
            v13 = (CManipulationContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                            WPF::g_pProcessHeap,
                                            144LL);
            v14 = v13 ? CManipulationContext::CManipulationContext(v13, this[2]) : 0LL;
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(this + 34, v14);
            if ( *v12 )
              CManipulationContext::Initialize(*v12, 0, 0LL);
          }
          if ( *v12 )
            CManipulationContext::OnHoverContact(
              *v12,
              v10,
              *(_DWORD *)((char *)a2 + v6 + 36),
              *(_DWORD *)((char *)a2 + v6 + 32));
        }
      }
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v15);
    }
  }
}
