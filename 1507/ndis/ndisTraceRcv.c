/*
 * XREFs of ndisTraceRcv @ 0x1C004A900
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00094A0 (ndisMIndicateNetBufferListsToOpen.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

NTSTATUS __fastcall ndisTraceRcv(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  _QWORD WnodeEventItem[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a3, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 16;
  WnodeEventItem[7] = a2;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00870D0;
  LOWORD(WnodeEventItem[0]) = 72;
  return IoWMIWriteEvent(WnodeEventItem);
}
