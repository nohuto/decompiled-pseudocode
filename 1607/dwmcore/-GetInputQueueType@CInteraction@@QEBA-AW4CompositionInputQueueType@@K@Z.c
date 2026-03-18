/*
 * XREFs of ?GetInputQueueType@CInteraction@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18000DA24
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18000606C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18000C284 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 * Callees:
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18002117C (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 */

__int64 __fastcall CInteraction::GetInputQueueType(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 168);
  result = 0LL;
  if ( v2 )
    return CInputSinkStruct::GetInputQueueType(v2, a2);
  return result;
}
