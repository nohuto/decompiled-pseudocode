/*
 * XREFs of ndisTraceDpcEnd @ 0x1C004A50C
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
 *     Template_qqx @ 0x1C00495A8 (Template_qqx.c)
 */

NTSTATUS __fastcall ndisTraceDpcEnd(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // eax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 17;
  WnodeEventItem[7] = a3;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00870D0;
  LOWORD(WnodeEventItem[0]) = 72;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
    return Template_qqx(v9, v8, (const GUID *)(a1 + 4064), (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF, a2, a3);
  return result;
}
