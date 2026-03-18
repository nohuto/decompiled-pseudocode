/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180001A7C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x1800020C4 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        struct CInteraction *this,
        unsigned int a3,
        char a4,
        struct CInteractionChain *a5,
        bool *a6)
{
  CInteraction *v9; // rdi
  struct CVisual *Visual; // rbp
  CInteraction *v11; // rsi
  char v12; // cl
  CInteraction *v13; // rsi
  struct CVisual *i; // rcx
  __int64 v15; // rax
  CInteraction *v16; // rcx
  struct CVisual *VisualEffectiveParent; // rbx
  char j; // r14
  _QWORD *v19; // rbp
  CInteraction *v20; // rax

  if ( !a4 )
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)a1 + 2) + 576LL));
  v9 = 0LL;
  Visual = CInteraction::GetVisual(this);
  if ( Visual )
  {
    while ( 1 )
    {
      v11 = (CInteraction *)*((_QWORD *)Visual + 50);
      if ( v11 )
      {
        v12 = *((_BYTE *)v11 + 156);
        *a6 |= v12 & 1;
        if ( !v9 && (v12 & 2) == 0 )
          v9 = v11;
        if ( (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 80LL))(
               v11,
               a3,
               0LL,
               0LL) )
        {
          break;
        }
      }
      Visual = (struct CVisual *)*((_QWORD *)Visual + 8);
      if ( !Visual )
        goto LABEL_11;
    }
    if ( (*((_BYTE *)v11 + 156) & 2) != 0 )
      v9 = v11;
  }
LABEL_11:
  v13 = v9;
  if ( v9 )
  {
    for ( i = CInteraction::GetVisual(v9); i; i = (struct CVisual *)*((_QWORD *)i + 8) )
    {
      *((_BYTE *)i + 74) |= 2u;
      if ( !*a6 )
      {
        v15 = *((_QWORD *)i + 50);
        if ( v15 )
          *a6 = *(_BYTE *)(v15 + 156) & 1;
      }
    }
    ++*((_DWORD *)v9 + a3 + 49);
    VisualEffectiveParent = CInteraction::GetVisual(v9);
    if ( VisualEffectiveParent )
    {
      if ( CInteraction::GetTotalNumContacts(v16) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent);
    }
    for ( j = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent) )
    {
      v19 = (_QWORD *)*((_QWORD *)VisualEffectiveParent + 50);
      if ( v19 )
      {
        if ( !j )
        {
          v20 = (CInteraction *)v19[24];
          if ( v20 )
          {
            if ( v20 != v13 )
            {
              *((_QWORD *)v13 + 22) = v20;
              *((_QWORD *)v20 + 23) = v13;
            }
            j = 1;
          }
        }
        v19[24] = v13;
        *((_QWORD *)v13 + 21) = v19;
        ++*((_DWORD *)v19 + a3 + 49);
        if ( CInteraction::GetTotalNumContacts((CInteraction *)v19) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
        v13 = (CInteraction *)v19;
      }
    }
  }
  if ( !a4 )
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)a1 + 2) + 568LL));
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a5, v13);
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)a5 + 8, v9);
}
