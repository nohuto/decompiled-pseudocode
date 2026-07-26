/*
 * XREFs of ndisTraceDpcStart @ 0x1C004A5EC
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0001000 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerDpcX @ 0x1C0004ED0 (ndisMTimerDpcX.c)
 *     ndisMWakeUpDpcX @ 0x1C0008120 (ndisMWakeUpDpcX.c)
 *     ndisInterruptDpc @ 0x1C0008260 (ndisInterruptDpc.c)
 *     ndisMTimerObjectDpc @ 0x1C0021640 (ndisMTimerObjectDpc.c)
 *     ndisMOidRequestToRequest @ 0x1C0041080 (ndisMOidRequestToRequest.c)
 *     ndisMDpc @ 0x1C005C8B4 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C005CAF8 (ndisMDpcX.c)
 *     ndisMTimerDpc @ 0x1C005CD50 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C005CF70 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     Template_qq @ 0x1C0049538 (Template_qq.c)
 */

NTSTATUS __fastcall ndisTraceDpcStart(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-58h]
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00870D0;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
  {
    LODWORD(v7) = a2;
    return Template_qq(v6, &DpcStart, (const GUID *)(a1 + 4064), (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF, v7);
  }
  return result;
}
