/*
 * XREFs of ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801436B0
 * Callers:
 *     ?FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z @ 0x180143744 (-FindMonitor@CManipulationContext@@SAPEAUHMONITOR__@@PEAUMCCollections@@PEAVCInteraction@@@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18014384C (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct CManipulationContext *__fastcall CManipulationContext::FindManipulationContext(
        const struct MCCollections *a1,
        const struct CInteraction *a2,
        int *a3)
{
  __int64 v3; // rsi
  int v6; // ebp
  __int64 i; // r15

  v3 = 0LL;
  v6 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    for ( i = 0LL;
          (const struct CInteraction *)(*(__int64 (__fastcall **)(_QWORD, const struct CInteraction *, int *))(**(_QWORD **)(i + *((_QWORD *)a1 + 3)) + 16LL))(
                                         *(_QWORD *)(i + *((_QWORD *)a1 + 3)),
                                         a2,
                                         a3) != a2;
          i += 8LL )
    {
      if ( ++v6 >= *((_DWORD *)a1 + 8) )
        return (struct CManipulationContext *)v3;
    }
    return *(struct CManipulationContext **)(*((_QWORD *)a1 + 3) + 8LL * v6);
  }
  return (struct CManipulationContext *)v3;
}
