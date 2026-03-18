/*
 * XREFs of ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180170F08
 * Callers:
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180170E64 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180170F50 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CManipulationContext::GetMCRoot(const struct CInteraction *a1)
{
  const struct CInteraction *i; // rax

  for ( i = (const struct CInteraction *)*((_QWORD *)a1 + 35); i; i = (const struct CInteraction *)*((_QWORD *)i + 35) )
    a1 = i;
  return a1;
}
