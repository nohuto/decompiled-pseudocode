/*
 * XREFs of ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x18012FA78
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18012AB28 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18005A744 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18010CD4C (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180129F5C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z @ 0x180130264 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180130A3C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 */

void __fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CVisualTree *a1,
        struct CInteraction *this,
        unsigned int a3,
        char a4,
        struct CInteractionChain *a5,
        bool *a6)
{
  CInteraction *v9; // rdi
  struct CVisual *Visual; // rbp
  CInteraction *v11; // rsi
  char v12; // cl
  __int64 v13; // rsi
  struct CVisual *i; // rcx
  __int64 v15; // rax
  CInteraction *v16; // rcx
  struct CVisual *VisualEffectiveParent; // rbx
  char j; // r14
  _QWORD *v19; // rbp
  __int64 v20; // rax

  if ( !a4 )
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)a1 + 2) + 576LL));
  v9 = 0LL;
  Visual = CInteraction::GetVisual(this);
  if ( Visual )
  {
    while ( 1 )
    {
      v11 = (CInteraction *)*((_QWORD *)Visual + 52);
      if ( v11 )
      {
        v12 = *((_BYTE *)v11 + 156);
        *a6 |= v12 & 1;
        if ( !v9 && (v12 & 2) == 0 )
          v9 = v11;
        if ( (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 80LL))(
               v11,
               a3,
               0LL,
               0LL) )
        {
          break;
        }
      }
      Visual = (struct CVisual *)*((_QWORD *)Visual + 10);
      if ( !Visual )
        goto LABEL_13;
    }
    if ( (*((_BYTE *)v11 + 156) & 2) != 0 )
      v9 = v11;
  }
LABEL_13:
  v13 = (__int64)v9;
  if ( v9 )
  {
    for ( i = CInteraction::GetVisual(v9); i; i = (struct CVisual *)*((_QWORD *)i + 10) )
    {
      *((_BYTE *)i + 90) |= 8u;
      if ( !*a6 )
      {
        v15 = *((_QWORD *)i + 52);
        if ( v15 )
          *a6 = *(_BYTE *)(v15 + 156) & 1;
      }
    }
    ++*((_DWORD *)v9 + a3 + 49);
    VisualEffectiveParent = CInteraction::GetVisual(v9);
    if ( VisualEffectiveParent )
    {
      if ( (unsigned int)CInteraction::GetTotalNumContacts(v16) == 1 )
        CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent);
    }
    for ( j = 0;
          VisualEffectiveParent;
          VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent) )
    {
      v19 = (_QWORD *)*((_QWORD *)VisualEffectiveParent + 52);
      if ( v19 )
      {
        if ( !j )
        {
          v20 = v19[24];
          if ( v20 )
          {
            if ( v20 != v13 )
            {
              *(_QWORD *)(v13 + 176) = v20;
              *(_QWORD *)(v20 + 184) = v13;
            }
            j = 1;
          }
        }
        v19[24] = v13;
        *(_QWORD *)(v13 + 168) = v19;
        ++*((_DWORD *)v19 + a3 + 49);
        if ( (unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v19) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParent, a1);
        v13 = (__int64)v19;
      }
    }
  }
  if ( !a4 )
    CReadWriteLock::Leave((CReadWriteLock *)(*((_QWORD *)a1 + 2) + 568LL));
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)a5, v13);
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)a5 + 1, (__int64)v9);
}
