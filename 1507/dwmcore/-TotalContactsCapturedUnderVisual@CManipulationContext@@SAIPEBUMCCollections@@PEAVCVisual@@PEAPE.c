/*
 * XREFs of ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180131C80
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18010CD4C (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180129F5C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18012FFF0 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180130620 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

__int64 __fastcall CManipulationContext::TotalContactsCapturedUnderVisual(
        const struct MCCollections *a1,
        struct CVisual *a2,
        struct CInteraction **a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  unsigned int TotalNumContacts; // eax
  struct CInteraction *v9; // rbx
  struct CInteraction *ClosestInteractionAncestor; // rax
  CInteraction *i; // rdi
  __int64 v12; // rdi
  __int64 v13; // r14
  CInteraction *v14; // r15
  struct CInteraction *v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v16 = 0LL;
  v6 = *((_QWORD *)a2 + 52);
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v16, *(_QWORD *)(v6 + 168));
    TotalNumContacts = CInteraction::GetTotalNumContacts(*((CInteraction **)a2 + 52));
    v9 = v16;
    v3 = TotalNumContacts;
  }
  else
  {
    ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(a2);
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v16, (__int64)ClosestInteractionAncestor);
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
      v12 = *((int *)a1 + 8);
      if ( v12 > 0 )
      {
        v13 = *((_QWORD *)a1 + 3);
        do
        {
          v14 = *(CInteraction **)(*(_QWORD *)v13 + 48LL);
          if ( CManipulationContext::IsInteractionDescendantOfVisual(v14, a2) )
            v3 += CInteraction::GetTotalNumContacts(v14);
          v13 += 8LL;
          --v12;
        }
        while ( v12 );
      }
    }
  }
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
  *a3 = v9;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v16);
  return v3;
}
