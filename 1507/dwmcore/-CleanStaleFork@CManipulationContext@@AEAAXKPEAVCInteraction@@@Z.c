/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x18012FD28
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801315A0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180129F5C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180130D40 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(
        CManipulationContext *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  struct CInteraction *v3; // rdi
  struct CInteraction *v5; // rsi

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*((_BYTE *)v3 + 156) & 8) != 0 )
        break;
      v5 = (struct CInteraction *)*((_QWORD *)v3 + 21);
      (*(void (__fastcall **)(struct CInteraction *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, a2);
      --*((_DWORD *)v3 + a2 + 49);
      if ( !(unsigned int)CInteraction::GetTotalNumContacts(v3) )
        CManipulationContext::RemoveInteractionLeafFromTree(v3);
      *((_BYTE *)v3 + 156) &= ~0x10u;
      v3 = v5;
    }
    while ( v5 );
  }
}
