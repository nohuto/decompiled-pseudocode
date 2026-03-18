/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C
 * Callers:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048CFC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18013FB00 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180001438 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18000205C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1800021C8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180002238 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xx @ 0x180100478 (Template_xx.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x18013F640 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18013F708 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18013F7F0 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v8; // bl
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rcx
  void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // ebx
  CInteraction *v19; // r8
  unsigned int TotalNumContacts; // eax
  __int64 v21; // r8
  __int64 v22; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // edx
  struct CInteraction *v29; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = a3;
  v8 = 1;
  if ( a2 > 5 || !a3 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x145u);
    return v4;
  }
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v3 = *(__int64 **)(a3 + 400);
      v18 = 0;
      v19 = (CInteraction *)v3[24];
      while ( v19 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v19);
        v19 = *(CInteraction **)(v21 + 176);
        v18 += TotalNumContacts;
      }
      if ( v18 < CInteraction::GetTotalNumContacts((CInteraction *)v3) )
      {
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v5);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(v3 + 20, (__int64)ClosestInteractionAncestor);
      }
      if ( !v18 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v5) )
      {
        *(_BYTE *)(v5 + 74) &= ~2u;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v5 + 64), 0, 0);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xx(v22, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v3, v5);
      goto LABEL_15;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 64), 1, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_15;
      a3 = v5;
      v15 = &MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
      goto LABEL_14;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *(_BYTE *)(a3 + 74) &= ~2u;
      v29 = 0LL;
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v29);
      v12 = CManipulationContext::TotalContactsCapturedUnderVisual(
              (const struct MCCollections *)(a1 + 128),
              (struct CVisual *)v5,
              &v29);
      v3 = (__int64 *)v29;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v5 + 64), 0, v12);
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v29);
      *(_BYTE *)(v5 + 74) |= 2u;
      LOBYTE(v13) = -(v3 != 0LL);
      v8 = v13 & 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v13, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v5);
LABEL_9:
      if ( !v8 )
        return v4;
      goto LABEL_15;
    }
    if ( v11 == 1 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v15 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
LABEL_14:
      Template_x(a1, v15, a3);
    }
  }
  else
  {
    v3 = *(__int64 **)(a3 + 400);
    if ( v3 && v3[20] )
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v3 + 20);
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v5, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      Template_xx(v24, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v3, v5);
      goto LABEL_9;
    }
  }
LABEL_15:
  v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          32LL);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
  {
    *(_DWORD *)v17 = a2;
    Microsoft::WRL::ComPtr<CVisual>::operator=(v17 + 8, v5);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)(v17 + 16), (__int64)v3);
    *(_DWORD *)(v17 + 24) = 0;
    v27 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v26, v25, v17);
    v4 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1AAu);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        (CManipulationManager::InteractionUpdate *)v17,
        v28);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1A3u);
  }
  return v4;
}
