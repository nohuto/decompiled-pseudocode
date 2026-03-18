/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180008B0C
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x180007CAC (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 * Callees:
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800063B8 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x180008CCC (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180008DCC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180008E18 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x1800A5818 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall CManipulationContext::CleanTreeState(
        struct CInteraction *a1,
        struct CInteraction **a2,
        RTL_SRWLOCK *a3,
        char a4,
        unsigned int a5)
{
  struct CInteraction *v6; // rbx
  char v10; // bp
  unsigned int v11; // r13d
  struct CVisual *i; // rax
  bool *v13; // rdx
  struct CVisual *v14; // rbx
  char v15; // di
  __int64 v16; // r12
  __int64 v17; // rdx
  const GUID *v18; // r8
  const GUID *v19; // r9
  struct CInteraction *v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = a1;
  v6 = a1;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v20);
  v10 = 1;
  if ( !a4 )
    AcquireSRWLockShared(a3 + 73);
  v11 = a5;
  while ( v6 )
  {
    v16 = *((_QWORD *)v6 + 35);
    --*((_DWORD *)v6 + v11 + 77);
    if ( !CInteraction::GetTotalNumContacts(v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree(v6, v17, v18, v19);
      if ( a2 )
      {
        if ( v6 == a2[6] )
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(a2 + 6);
      }
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v20, v16);
    v6 = v20;
  }
  if ( a1 )
  {
    for ( i = CInteraction::GetVisual(a1); ; i = CManipulationContext::GetVisualEffectiveParent(v14, v13) )
    {
      v14 = i;
      if ( !i )
        break;
      if ( v10 )
      {
        v15 = *((_BYTE *)i + 154);
        if ( (v15 & 2) == 0
          || CManipulationContext::VisualHasActiveInteraction(i, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(v14) )
        {
          v10 = 0;
        }
        else
        {
          *((_BYTE *)v14 + 154) = v15 & 0xFD;
        }
      }
    }
  }
  if ( !a4 )
    CReadWriteLock::Leave((CReadWriteLock *)&a3[72]);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v20);
}
