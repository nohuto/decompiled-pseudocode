/*
 * XREFs of ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180001438
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18000205C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801439FC (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationContext::TotalContactsCapturedUnderVisual(
        const struct MCCollections *a1,
        struct CVisual *a2,
        struct CInteraction **a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // r14
  unsigned int TotalNumContacts; // eax
  CInteraction *i; // rdi
  CInteraction *v15; // r15
  struct CInteraction *v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v16 = 0LL;
  v6 = *((_QWORD *)a2 + 50);
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v16, *(_QWORD *)(v6 + 168));
    TotalNumContacts = CInteraction::GetTotalNumContacts(*((CInteraction **)a2 + 50));
    v9 = v16;
    v3 = TotalNumContacts;
  }
  else
  {
    ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(a2);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v16, ClosestInteractionAncestor);
    v9 = v16;
    if ( v16 )
    {
      for ( i = (CInteraction *)*((_QWORD *)v16 + 24); i; i = (CInteraction *)*((_QWORD *)i + 22) )
      {
        if ( CManipulationContext::IsInteractionDescendantOfVisual(i, a2) )
          v3 += CInteraction::GetTotalNumContacts(i);
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
          v15 = *(CInteraction **)(*(_QWORD *)v12 + 48LL);
          if ( CManipulationContext::IsInteractionDescendantOfVisual(v15, a2) )
            v3 += CInteraction::GetTotalNumContacts(v15);
          v12 += 8LL;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
  *a3 = v9;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v16);
  return v3;
}
