/*
 * XREFs of ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006C60 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18016AF50 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?RemoveKey@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBI@Z @ 0x180006318 (-RemoveKey@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBI@Z.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180006518 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x180007CAC (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180008224 (-RemoveKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180008B0C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 */

void __fastcall CManipulationManager::OnUp(
        struct CComposition **this,
        struct CInteraction *a2,
        unsigned int a3,
        unsigned int a4,
        struct CManipulationContext *a5,
        bool a6,
        bool a7)
{
  struct CManipulationContext *v7; // rbx
  __int64 v12; // rcx
  void *v13; // rdx
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v7 = a5;
  if ( a5 )
  {
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveKey(
      this + 16,
      &v14);
    CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::RemoveKey(
      (__int64)(this + 21),
      (int *)&v14);
    CManipulationContext::OnContactDepart(v7, a3, a4, a2, a6, a7);
    if ( *((_QWORD *)v7 + 6) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_4;
      v13 = &MANIPULATION_CONTEXT_CONTACT_DEPARTED;
    }
    else
    {
      a5 = v7;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&a5);
      CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        (__int64)(this + 19),
        &a5);
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&a5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
      {
LABEL_4:
        (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, a3, 0LL);
        return;
      }
      v13 = &MANIPULATION_CONTEXT_DESTROYED;
    }
    Template_xd(v12, v13, v7, a3);
    goto LABEL_4;
  }
  CManipulationContext::CleanTreeState(a2, 0LL, this[2], a7, a4);
}
