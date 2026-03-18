/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180050ED0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18016ADEC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180005F9C (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180008C5C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180008D54 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180008DCC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_xx @ 0x18011436C (Template_xx.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18016A9A4 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18016AAB0 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 */

__int64 __fastcall CManipulationManager::QueueMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct CInteraction **v3; // rdi
  struct CInteraction *InteractionInternal; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  char v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  void *v14; // rdx
  struct CInteraction **v15; // rax
  CInteraction *v16; // r8
  unsigned int TotalNumContacts; // eax
  __int64 v18; // r8
  bool *v19; // rdx
  __int64 v20; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  struct CInteraction *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // edx
  struct CInteraction *v28; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  InteractionInternal = 0LL;
  v5 = 0;
  v6 = a3;
  v9 = 1;
  if ( a2 > 6 || !a3 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x18Bu);
LABEL_42:
    if ( v3 )
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
        (CManipulationManager::InteractionUpdate *)v3,
        v27);
    return v5;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
      v16 = (CInteraction *)*((_QWORD *)InteractionInternal + 38);
      while ( v16 )
      {
        TotalNumContacts = CInteraction::GetTotalNumContacts(v16);
        v16 = *(CInteraction **)(v18 + 288);
        LODWORD(v3) = TotalNumContacts + (_DWORD)v3;
      }
      if ( (unsigned int)v3 < CInteraction::GetTotalNumContacts(InteractionInternal) )
      {
        ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(
                                       (const struct CVisual *)v6,
                                       v19);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
          (char *)InteractionInternal + 264,
          ClosestInteractionAncestor);
      }
      if ( !(_DWORD)v3 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v6) )
      {
        *(_BYTE *)(v6 + 154) &= ~2u;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v6 + 144), 0, 0);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xx(v20, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, InteractionInternal, v6);
      goto LABEL_15;
    }
    if ( a2 == 2 )
    {
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 144), 1, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_15;
      a3 = v6;
      v14 = &MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
    }
    else
    {
      v10 = a2 - 3;
      if ( a2 == 3 )
      {
        *(_BYTE *)(a3 + 154) &= ~2u;
        v28 = 0LL;
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v28);
        v11 = CManipulationContext::TotalContactsCapturedUnderVisual(
                (const struct MCCollections *)(a1 + 128),
                (struct CVisual *)v6,
                &v28);
        InteractionInternal = v28;
        CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v6 + 144), 0, v11);
        Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v28);
        *(_BYTE *)(v6 + 154) |= 2u;
        LOBYTE(v12) = -(InteractionInternal != 0LL);
        v9 = v12 & 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_x(v12, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v6);
        goto LABEL_9;
      }
      if ( a2 != 4 || (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_15;
      v14 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
    }
    Template_x(v10, v14, a3);
    goto LABEL_15;
  }
  v22 = CVisual::GetInteractionInternal((CVisual *)a3);
  InteractionInternal = v22;
  if ( v22 && *((_QWORD *)v22 + 33) )
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)v22 + 264);
  CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v6, 1, 0);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
    goto LABEL_15;
  Template_xx(v23, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, InteractionInternal, v6);
LABEL_9:
  if ( !v9 )
    return v5;
LABEL_15:
  v15 = (struct CInteraction **)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                  WPF::g_pProcessHeap,
                                  40LL);
  v3 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x28uLL);
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1E9u);
    return v5;
  }
  *(_DWORD *)v3 = a2;
  if ( v3[1] != (struct CInteraction *)v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v28 = v3[1];
    v3[1] = (struct CInteraction *)v6;
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v28);
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=(v3 + 2, InteractionInternal);
  *((_DWORD *)v3 + 6) = 0;
  *((_DWORD *)v3 + 7) = 0;
  v3[4] = 0LL;
  v26 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v25, v24, v3);
  v5 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1F7u);
    goto LABEL_42;
  }
  return v5;
}
