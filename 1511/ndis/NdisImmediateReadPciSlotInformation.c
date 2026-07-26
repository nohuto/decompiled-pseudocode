/*
 * XREFs of NdisImmediateReadPciSlotInformation @ 0x1C00EEEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005BF6C (ndisGetSetBusConfigSpace.c)
 */

__int64 __fastcall NdisImmediateReadPciSlotInformation(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int SetBusConfigSpace; // edi

  v5 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)byte_1C008370E >= 4u )
    WPP_SF_q(0xEu, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, v5);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(v5, a3, a4, a5, 0, 1);
  if ( (unsigned __int8)byte_1C008370E >= 4u )
    WPP_SF_q(0xFu, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, v5);
  return SetBusConfigSpace;
}
