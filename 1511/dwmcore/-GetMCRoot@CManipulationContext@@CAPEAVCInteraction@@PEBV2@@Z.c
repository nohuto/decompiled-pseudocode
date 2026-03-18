/*
 * XREFs of ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180143828
 * Callers:
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180143744 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18014384C (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CManipulationContext::GetMCRoot(const struct CInteraction *a1)
{
  const struct CInteraction *i; // rax

  for ( i = (const struct CInteraction *)*((_QWORD *)a1 + 21); i; i = (const struct CInteraction *)*((_QWORD *)i + 21) )
    a1 = i;
  return a1;
}
