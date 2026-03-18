/*
 * XREFs of ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800362EC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18012A5D0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xx @ 0x1800E218C (Template_xx.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18010CD4C (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x18012993C (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x180129A18 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180129F5C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180129FC0 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z @ 0x18012FFF0 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@@Z.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180130B50 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180131C80 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180131DCC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  CInteraction *v16; // r8
  int TotalNumContacts; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  struct CInteraction *ClosestInteractionAncestor; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  struct CInteraction *v28; // [rsp+68h] [rbp+20h] BYREF

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
  if ( !a2 )
  {
    v3 = *(__int64 **)(a3 + 416);
    if ( v3 && v3[20] )
      Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(v3 + 20);
    CManipulationContext::PropagateVisualManipulationNotificationFlag((struct CVisual *)v5, 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      goto LABEL_31;
    Template_xx(v21, &MIDMANIPULATION_UPDATE_INTERACTION_ADDITION, v3, v5);
LABEL_30:
    if ( !v8 )
      return v4;
    goto LABEL_31;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    v3 = *(__int64 **)(a3 + 416);
    v15 = 0;
    v16 = (CInteraction *)v3[24];
    while ( v16 )
    {
      TotalNumContacts = CInteraction::GetTotalNumContacts(v16);
      v16 = *(CInteraction **)(v18 + 176);
      v15 += TotalNumContacts;
    }
    if ( v15 < (unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v3) )
    {
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor((const struct CVisual *)v5);
      Microsoft::WRL::ComPtr<CInteraction>::operator=(v3 + 20, (__int64)ClosestInteractionAncestor);
    }
    if ( !v15 && !CManipulationContext::VisualHasAnyChildFlagged((struct CVisual *)v5) )
    {
      *(_BYTE *)(v5 + 90) &= ~8u;
      CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v5 + 80), 0, 0);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xx(v19, &MIDMANIPULATION_UPDATE_INTERACTION_REMOVAL, v3, v5);
    goto LABEL_31;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(a3 + 80), 1, 0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      goto LABEL_31;
    a3 = v5;
    v12 = (const EVENT_DESCRIPTOR *)&MIDMANIPULATION_UPDATE_VISUAL_ADDITION;
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *(_BYTE *)(a3 + 90) &= ~8u;
    v28 = 0LL;
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v28);
    v13 = CManipulationContext::TotalContactsCapturedUnderVisual(
            (const struct MCCollections *)(a1 + 128),
            (struct CVisual *)v5,
            &v28);
    v3 = (__int64 *)v28;
    CManipulationContext::PropagateVisualManipulationNotificationFlag(*(struct CVisual **)(v5 + 80), 0, v13);
    Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v28);
    *(_BYTE *)(v5 + 90) |= 8u;
    LOBYTE(v14) = -(v3 != 0LL);
    v8 = v14 & 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v14, &MIDMANIPULATION_UPDATE_VISUAL_REMOVAL, v5);
    goto LABEL_30;
  }
  if ( v11 == 1 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v12 = &MIDMANIPULATION_UPDATE_VISUAL_PROP;
LABEL_10:
    Template_x(a1, v12, a3);
  }
LABEL_31:
  v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          32LL);
  v23 = v22;
  if ( v22 )
  {
    *(_QWORD *)(v22 + 8) = 0LL;
    *(_QWORD *)(v22 + 16) = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v23 )
  {
    *(_DWORD *)v23 = a2;
    Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)(v23 + 8), v5);
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v23 + 16), (__int64)v3);
    *(_DWORD *)(v23 + 24) = 0;
    v26 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v25, v24, v23);
    v4 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1AAu);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v23);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1A3u);
  }
  return v4;
}
