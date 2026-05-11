/*
 * XREFs of USBType1HandleUrbError @ 0x1C0021638
 * Callers:
 *     USBType1ProcessPin @ 0x1C0004760 (USBType1ProcessPin.c)
 * Callees:
 *     USBType1AsyncEndpointAbortFeedback @ 0x1C00038CC (USBType1AsyncEndpointAbortFeedback.c)
 *     USBType1ClearLeftovers @ 0x1C00045B0 (USBType1ClearLeftovers.c)
 *     USBHwDataPipeReset @ 0x1C001D570 (USBHwDataPipeReset.c)
 */

__int64 __fastcall USBType1HandleUrbError(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // r8d

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 136);
  if ( *(_BYTE *)(v3 + 80) )
  {
    *(_BYTE *)(v3 + 84) = 0;
    v4 = USBHwDataPipeReset(a1);
    USBType1AsyncEndpointAbortFeedback(a1);
    v5 = *(_DWORD *)(v3 + 840);
    *(_BYTE *)(v3 + 84) = 1;
    *(_DWORD *)(v1 + 88) = v5;
    *(_DWORD *)(v3 + 104) = (v5 % 0x3E8) << 14;
  }
  else
  {
    v4 = USBHwDataPipeReset(a1);
  }
  USBType1ClearLeftovers((_QWORD *)v1);
  return v4;
}
