/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800022B4
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180001F10 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180143608 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a1 + 48LL))(a1);
  v2 = *((_QWORD *)a1 + 21);
  if ( v2 )
  {
    if ( *(struct CInteraction **)(v2 + 192) == a1 )
      *(_QWORD *)(v2 + 192) = *((_QWORD *)a1 + 22);
    *((_QWORD *)a1 + 21) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 23);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 176) = *((_QWORD *)a1 + 22);
    *((_QWORD *)a1 + 23) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 22);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 184) = *((_QWORD *)a1 + 23);
    *((_QWORD *)a1 + 22) = 0LL;
  }
}
