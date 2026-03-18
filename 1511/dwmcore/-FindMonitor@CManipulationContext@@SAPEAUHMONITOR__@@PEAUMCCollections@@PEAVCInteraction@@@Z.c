/*
 * XREFs of ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180143744
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180144354 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801436B0 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180143828 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 */

__int64 __fastcall CManipulationContext::FindMonitor(struct MCCollections *a1, struct CInteraction *a2)
{
  __int64 v2; // rbx
  const struct CInteraction *MCRoot; // rax
  const struct MCCollections *v4; // r8
  struct CManipulationContext *ManipulationContext; // rax

  v2 = 0LL;
  if ( a2 )
  {
    MCRoot = CManipulationContext::GetMCRoot(a2);
    ManipulationContext = CManipulationContext::FindManipulationContext(v4, MCRoot, (int *)v4);
    if ( ManipulationContext )
      return *((_QWORD *)ManipulationContext + 4);
  }
  return v2;
}
