/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x18012FDBC
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18012AEB4 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x18013065C (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18005A744 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x180060D60 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18010CD4C (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180129F5C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2F4 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x180130264 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180130D40 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180131D98 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180131DCC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::CleanTreeState(
        struct CInteraction *a1,
        struct CManipulationContext *a2,
        RTL_SRWLOCK *a3,
        char a4,
        unsigned int a5)
{
  struct CInteraction *v6; // rbx
  char v10; // bp
  unsigned int v11; // r13d
  __int64 v12; // r12
  struct CVisual *i; // rax
  char v14; // di
  struct CVisual *v15; // rbx
  CMILRefCountBase *v16; // [rsp+20h] [rbp-38h] BYREF
  struct CInteraction *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = a1;
  v6 = a1;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
  v16 = 0LL;
  v10 = 1;
  if ( !a4 )
    AcquireSRWLockShared(a3 + 72);
  v11 = a5;
  while ( v6 )
  {
    v12 = *((_QWORD *)v6 + 21);
    --*((_DWORD *)v6 + v11 + 49);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts(v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree(v6);
      if ( a2 )
      {
        if ( v6 == *((struct CInteraction **)a2 + 6) )
          Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)a2 + 6);
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v17, v12);
    v6 = v17;
  }
  if ( a1 )
  {
    for ( i = CInteraction::GetVisual(a1); ; i = CManipulationContext::GetVisualEffectiveParent(v15) )
    {
      v15 = i;
      if ( !i )
        break;
      if ( v10 )
      {
        v14 = *((_BYTE *)i + 90);
        if ( (v14 & 8) == 0
          || CManipulationContext::VisualHasActiveInteraction(i, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(v15) )
        {
          v10 = 0;
        }
        else
        {
          *((_BYTE *)v15 + 90) = v14 & 0xF7;
        }
      }
    }
  }
  if ( !a4 )
    CReadWriteLock::Leave((CReadWriteLock *)&a3[71]);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)&v17);
}
