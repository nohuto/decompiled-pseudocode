/*
 * XREFs of NdisImmediateReadPciSlotInformation @ 0x1C00F5B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1C005FD7C (ndisGetSetBusConfigSpace.c)
 */

__int64 __fastcall NdisImmediateReadPciSlotInformation(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int SetBusConfigSpace; // edi

  v5 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0xEu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, v5);
  SetBusConfigSpace = ndisGetSetBusConfigSpace(v5, a3, a4, a5, 0, 1);
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(0xFu, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, v5);
  return SetBusConfigSpace;
}
