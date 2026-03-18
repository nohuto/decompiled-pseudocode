/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1800026AC
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180001A7C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x180143A38 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180144354 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x180005E14 (-GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z.c)
 *     ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4 (-GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A7828 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CVisualTree *a2)
{
  __int64 v2; // rbx
  __int64 v3; // xmm1_8
  __int64 v4; // r8
  struct CVisual *i; // r9
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // r10
  __int128 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-8h]

  v2 = *((_QWORD *)a1 + 50);
  if ( v2 )
  {
    CVisual::GetWorldTransform(a1, a2, 5LL, v2 + 88, 0LL, 0LL);
    v11 = 0uLL;
    v3 = 0LL;
    for ( i = CInteraction::GetVisual((CInteraction *)v2); !v4 && i; i = (struct CVisual *)*((_QWORD *)i + 8) )
    {
      if ( *((_QWORD *)i + 50) )
      {
        *(_QWORD *)&v12 = CInteraction::GetInputHandle(*((CInteraction **)i + 50));
        DWORD2(v12) = CInteraction::GetEndpoint(v7, (unsigned int)(v6 + 1));
        HIDWORD(v12) = CInteraction::GetEndpoint(v8, 2LL);
        LODWORD(v13) = CInteraction::GetEndpoint(v9, 3LL);
        HIDWORD(v13) = CInteraction::GetEndpoint(v10, 4LL);
        v3 = v13;
        v11 = v12;
        v4 = v12;
      }
    }
    *(_OWORD *)(v2 + 48) = v11;
    *(_QWORD *)(v2 + 64) = v3;
  }
}
