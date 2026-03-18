/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180008E5C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x180008CCC (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18000DA48 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z @ 0x180171150 (-IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z.c)
 */

void __fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        struct CInteraction *this,
        unsigned int a3,
        __int64 a4,
        struct CInteractionChain *a5,
        bool *a6)
{
  char v8; // bp
  struct CVisual *Visual; // rax
  CInteraction *v10; // rdi
  bool v11; // zf
  CVisual *v12; // rsi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v14; // rbx
  char v15; // cl
  CInteraction *v16; // rsi
  struct CVisual *i; // r10
  CVisual *v18; // r10
  CVisual *v19; // r10
  CInteraction *v20; // rax
  bool v21; // r11
  __int64 v22; // r14
  CInteraction *v23; // rcx
  struct CVisual *VisualEffectiveParent; // rbx
  bool *v25; // rdx
  char j; // r15
  struct CInteraction *v27; // rax
  bool *v28; // rdx
  struct CInteraction *v29; // rbp
  CInteraction *v30; // rax

  v8 = 0;
  Visual = CInteraction::GetVisual(this);
  v10 = 0LL;
  v11 = Visual == 0LL;
  v12 = Visual;
  while ( !v11 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v12);
    v14 = InteractionInternal;
    if ( InteractionInternal )
    {
      v15 = *((_BYTE *)InteractionInternal + 256);
      *a6 |= v15 & 1;
      v8 |= (v15 & 0x20) != 0;
      if ( !v10 && (v8 || !CManipulationContext::IsDefaultForBuildingChain(InteractionInternal)) )
        v10 = v14;
      if ( (*(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 80LL))(
             v14,
             a3,
             0LL,
             0LL) )
      {
        if ( !v8 && CManipulationContext::IsDefaultForBuildingChain(v14) )
          v10 = v14;
        break;
      }
    }
    v12 = (CVisual *)*((_QWORD *)v12 + 18);
    v11 = v12 == 0LL;
  }
  v16 = v10;
  if ( v10 )
  {
    for ( i = CInteraction::GetVisual(v10); i; i = (struct CVisual *)*((_QWORD *)v18 + 18) )
    {
      *((_BYTE *)i + 154) |= 2u;
      if ( CVisual::GetInteractionInternal(i) )
      {
        CVisual::GetInteractionInternal(v18);
        v20 = CVisual::GetInteractionInternal(v19);
        CInteraction::UpdateDefaultInteractionForCurrentMC(v20, v21);
        if ( !*a6 )
          *a6 = *((_BYTE *)CVisual::GetInteractionInternal(v18) + 256) & 1;
      }
    }
    ++*((_DWORD *)v10 + a3 + 77);
    v22 = a3 - 1;
    VisualEffectiveParent = CInteraction::GetVisual(v10);
    if ( VisualEffectiveParent )
    {
      if ( CInteraction::GetTotalNumContacts(v23) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v25);
    }
    for ( j = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v28) )
    {
      v27 = CVisual::GetInteractionInternal(VisualEffectiveParent);
      v29 = v27;
      if ( v27 )
      {
        if ( !j )
        {
          v30 = (CInteraction *)*((_QWORD *)v27 + 38);
          if ( v30 )
          {
            if ( v30 != v16 )
            {
              *((_QWORD *)v16 + 36) = v30;
              *((_QWORD *)v30 + 37) = v16;
            }
            j = 1;
          }
        }
        *((_QWORD *)v29 + 38) = v16;
        *((_QWORD *)v16 + 35) = v29;
        ++*((_DWORD *)v29 + v22 + 78);
        if ( CInteraction::GetTotalNumContacts(v29) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
        v16 = v29;
      }
    }
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a5, v16);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)a5 + 8, v10);
}
