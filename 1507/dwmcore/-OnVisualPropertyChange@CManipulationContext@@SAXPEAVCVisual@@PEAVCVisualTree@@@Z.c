/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x18012FA78 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@I@Z @ 0x180130800 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x18000BC34 (-GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x18005A05C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18005A744 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
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

  v2 = *((_QWORD *)a1 + 52);
  if ( v2 )
  {
    if ( a2 )
      CVisual::GetWorldTransform((__int64)a1 + 64, (__int64)a2, 5, v2 + 88, 0LL, 0LL);
    v11 = 0uLL;
    v3 = 0LL;
    for ( i = CInteraction::GetVisual((CInteraction *)v2); !v4 && i; i = (struct CVisual *)*((_QWORD *)i + 10) )
    {
      if ( *((_QWORD *)i + 52) )
      {
        *(_QWORD *)&v12 = CInteraction::GetInputHandle(*((CInteraction **)i + 52));
        DWORD2(v12) = CInteraction::GetEndpoint(v7, v6 + 1);
        HIDWORD(v12) = CInteraction::GetEndpoint(v8, 2);
        LODWORD(v13) = CInteraction::GetEndpoint(v9, 3);
        HIDWORD(v13) = CInteraction::GetEndpoint(v10, 4);
        v3 = v13;
        v11 = v12;
        v4 = v12;
      }
    }
    *(_OWORD *)(v2 + 48) = v11;
    *(_QWORD *)(v2 + 64) = v3;
  }
}
