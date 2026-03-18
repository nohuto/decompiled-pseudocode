/*
 * XREFs of ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180005F9C
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180008C5C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x18017117C (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationContext::TotalContactsCapturedUnderVisual(
        const struct MCCollections *a1,
        struct CVisual *a2,
        struct CInteraction **a3)
{
  unsigned int v4; // esi
  bool *v7; // rdx
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // r14
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v14; // rax
  unsigned int TotalNumContacts; // eax
  CInteraction *i; // rdi
  CInteraction *v17; // r15
  struct CInteraction *v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v18 = 0LL;
  if ( CVisual::GetInteractionInternal(a2) )
  {
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v18, *((_QWORD *)InteractionInternal + 35));
    v14 = CVisual::GetInteractionInternal(a2);
    TotalNumContacts = CInteraction::GetTotalNumContacts(v14);
    v9 = v18;
    v4 = TotalNumContacts;
  }
  else
  {
    ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(a2, v7);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v18, ClosestInteractionAncestor);
    v9 = v18;
    if ( v18 )
    {
      for ( i = (CInteraction *)*((_QWORD *)v18 + 38); i; i = (CInteraction *)*((_QWORD *)i + 36) )
      {
        if ( CManipulationContext::IsInteractionDescendantOfVisual(i, a2) )
          v4 += CInteraction::GetTotalNumContacts(i);
      }
    }
    else
    {
      v10 = *((int *)a1 + 8);
      if ( v10 > 0 )
      {
        v12 = *((_QWORD *)a1 + 3);
        do
        {
          v17 = *(CInteraction **)(*(_QWORD *)v12 + 48LL);
          if ( CManipulationContext::IsInteractionDescendantOfVisual(v17, a2) )
            v4 += CInteraction::GetTotalNumContacts(v17);
          v12 += 8LL;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v18);
  *a3 = v9;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v18);
  return v4;
}
