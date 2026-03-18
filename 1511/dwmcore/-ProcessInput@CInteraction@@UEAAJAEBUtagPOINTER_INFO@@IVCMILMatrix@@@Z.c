/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x180127CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x1800A7FB0 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CInteraction::ProcessInput(__int64 a1, int *a2, __int64 a3, _OWORD *a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a4[1];
  v8[0] = *a4;
  v5 = a4[2];
  v8[1] = v4;
  v6 = a4[3];
  v8[2] = v5;
  v8[3] = v6;
  return CInteractionProcessor::ProcessInput(a1 + 224, a2, a3, v8);
}
