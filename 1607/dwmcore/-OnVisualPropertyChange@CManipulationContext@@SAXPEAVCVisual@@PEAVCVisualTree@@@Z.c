/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180008E5C (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18016B11C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801711BC (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180171BA0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator() @ 0x180006204 (_lambda_0fac207bc2d8fd4a1b8744335422bc83_--operator().c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputQueueType@CInteraction@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18000DA24 (-GetInputQueueType@CInteraction@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CVisualTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  struct CInteraction *v5; // rbx
  struct CVisual *Visual; // rdi
  struct CInteraction *v7; // rax
  char v8; // r10
  int InputQueueType; // eax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int128 v19; // [rsp+60h] [rbp-10h] BYREF
  char v20; // [rsp+90h] [rbp+20h] BYREF
  struct CInteraction *v21; // [rsp+98h] [rbp+28h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5LL, (char *)InteractionInternal + 184, 0LL, 0LL);
    memset_0(&v17, 0, 0x30uLL);
    Visual = CInteraction::GetVisual(v5);
    v20 = 0;
    do
    {
      if ( !Visual )
        break;
      v7 = CVisual::GetInteractionInternal(Visual);
      v21 = v7;
      if ( v7 )
      {
        v20 = 1;
        v16[0] = &v21;
        v16[1] = &v20;
        InputQueueType = CInteraction::GetInputQueueType(v7, 4LL);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(
          (unsigned int)v16,
          (unsigned int)&v17,
          InputQueueType,
          (unsigned int)&v19,
          1);
        v10 = 0;
        v11 = *((_QWORD *)v21 + 21);
        if ( v11 )
          v10 = *(_DWORD *)(v11 + 32);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(
          (unsigned int)v16,
          (unsigned int)&v17 + 8,
          v10,
          (unsigned int)&v19 + 4,
          2);
        v12 = CInteraction::GetInputQueueType(v21, 3LL);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(
          (unsigned int)v16,
          (unsigned int)&v18 + 8,
          v12,
          (unsigned int)&v19 + 12,
          4);
        v13 = CInteraction::GetInputQueueType(v21, 2LL);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(
          (unsigned int)v16,
          (unsigned int)&v18,
          v13,
          (unsigned int)&v19 + 8,
          3);
        v8 = v20;
      }
      Visual = (struct CVisual *)*((_QWORD *)Visual + 18);
    }
    while ( !v8 );
    v14 = v18;
    *(_OWORD *)((char *)v5 + 120) = v17;
    v15 = v19;
    *(_OWORD *)((char *)v5 + 136) = v14;
    *(_OWORD *)((char *)v5 + 152) = v15;
  }
}
