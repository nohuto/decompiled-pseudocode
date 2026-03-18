/*
 * XREFs of ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18014384C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18000205C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     _lambda_49876cf6e883bc8eb3014f4491059b52_::operator() @ 0x180143544 (_lambda_49876cf6e883bc8eb3014f4491059b52_--operator().c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801436B0 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180143828 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801439FC (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::InvalidateMCs(
        __int64 a1,
        const struct CVisual *a2,
        const struct CInteraction *a3,
        int a4,
        _DWORD *a5)
{
  int v6; // ecx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r8
  const struct CInteraction *MCRoot; // rax
  int *v12; // r8
  struct CManipulationContext *ManipulationContext; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  struct CManipulationContext *v15; // rbp
  const struct CVisual *v16; // rcx
  const struct CInteraction *v17; // rax
  int *v18; // r8
  const struct CVisual *Visual; // rax
  int v20; // edi
  __int64 v21; // r14
  __int64 v22; // rbp
  _DWORD **v23; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(a1 + 32);
  if ( *a5 != v6 )
  {
    v8 = 0;
    v23 = &a5;
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        if ( a3 && (*((_BYTE *)a3 + 156) & 2) == 0 )
        {
          MCRoot = CManipulationContext::GetMCRoot(a3);
          ManipulationContext = CManipulationContext::FindManipulationContext(
                                  (const struct MCCollections *)a1,
                                  MCRoot,
                                  v12);
          lambda_49876cf6e883bc8eb3014f4491059b52_::operator()(&v23, (__int64)ManipulationContext);
          return;
        }
      }
      else if ( a4 <= 1 || a4 > 3 )
      {
        return;
      }
      if ( v6 > 0 )
      {
        v9 = 0LL;
        do
        {
          lambda_49876cf6e883bc8eb3014f4491059b52_::operator()(&v23, *(_QWORD *)(v9 + *(_QWORD *)(a1 + 24)));
          ++v8;
          v9 = v10 + 8;
        }
        while ( v8 < *(_DWORD *)(a1 + 32) );
      }
    }
    else if ( a2 )
    {
      ClosestInteractionAncestor = (struct CInteraction *)*((_QWORD *)a2 + 50);
      v15 = 0LL;
      if ( !ClosestInteractionAncestor )
        goto LABEL_25;
      if ( (*((_BYTE *)ClosestInteractionAncestor + 156) & 2) != 0 )
      {
        v16 = (const struct CVisual *)*((_QWORD *)a2 + 8);
        if ( v16 )
        {
          ClosestInteractionAncestor = (struct CInteraction *)*((_QWORD *)v16 + 50);
          if ( ClosestInteractionAncestor )
            goto LABEL_20;
          ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v16);
        }
      }
      if ( ClosestInteractionAncestor )
      {
LABEL_20:
        while ( !v15 )
        {
          if ( (unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
          {
            v17 = CManipulationContext::GetMCRoot(ClosestInteractionAncestor);
            v15 = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, v17, v18);
            lambda_49876cf6e883bc8eb3014f4491059b52_::operator()(&v23, (__int64)v15);
          }
          Visual = CInteraction::GetVisual(ClosestInteractionAncestor);
          ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(Visual);
          if ( !ClosestInteractionAncestor )
          {
            if ( v15 )
              return;
            goto LABEL_25;
          }
        }
      }
      else
      {
LABEL_25:
        v20 = 0;
        if ( *(int *)(a1 + 32) > 0 )
        {
          v21 = 0LL;
          do
          {
            v22 = *(_QWORD *)(v21 + *(_QWORD *)(a1 + 24));
            if ( (*(_BYTE *)(v22 + 28) & 4) == 0
              && CManipulationContext::IsInteractionDescendantOfVisual(*(const struct CInteraction **)(v22 + 48), a2) )
            {
              lambda_49876cf6e883bc8eb3014f4491059b52_::operator()(&v23, v22);
            }
            ++v20;
            v21 += 8LL;
          }
          while ( v20 < *(_DWORD *)(a1 + 32) );
        }
      }
    }
  }
}
