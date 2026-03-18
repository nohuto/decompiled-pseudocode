/*
 * XREFs of ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x180009044
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 * Callees:
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x1800052CC (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 */

__int64 __fastcall CVisual::GetInputQueueType(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 400);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 72);
    if ( v4 )
      return CInputSinkStruct::GetInputQueueType(v4, a2);
  }
  return result;
}
