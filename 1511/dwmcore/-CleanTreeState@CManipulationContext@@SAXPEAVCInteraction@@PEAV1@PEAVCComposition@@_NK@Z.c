/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180001F10
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000424C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x18000582C (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 * Callees:
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x1800020C4 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x180002178 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180002238 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x18000227C (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800022B4 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180003F94 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180005DDC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A7810 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
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
  struct CVisual *v13; // rbx
  char v14; // di
  __int64 v15; // r12
  struct CInteraction *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v6 = a1;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
  v10 = 1;
  if ( !a4 )
    AcquireSRWLockShared(a3 + 72);
  v11 = a5;
  while ( v6 )
  {
    v15 = *((_QWORD *)v6 + 21);
    --*((_DWORD *)v6 + v11 + 49);
    if ( !CInteraction::GetTotalNumContacts(v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree(v6);
      if ( a2 )
      {
        if ( v6 == a2[6] )
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(a2 + 6);
      }
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v16, v15);
    v6 = v16;
  }
  if ( a1 )
  {
    for ( i = CInteraction::GetVisual(a1); ; i = CManipulationContext::GetVisualEffectiveParent(v13) )
    {
      v13 = i;
      if ( !i )
        break;
      if ( v10 )
      {
        v14 = *((_BYTE *)i + 74);
        if ( (v14 & 2) == 0
          || CManipulationContext::VisualHasActiveInteraction(i, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(v13) )
        {
          v10 = 0;
        }
        else
        {
          *((_BYTE *)v13 + 74) = v14 & 0xFD;
        }
      }
    }
  }
  if ( !a4 )
    CReadWriteLock::Leave((CReadWriteLock *)&a3[71]);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v16);
}
