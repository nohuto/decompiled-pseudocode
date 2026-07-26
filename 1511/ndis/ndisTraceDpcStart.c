/*
 * XREFs of ndisTraceDpcStart @ 0x1C004AE8C
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 *     ndisMTimerDpcX @ 0x1C000A040 (ndisMTimerDpcX.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMWakeUpDpcX @ 0x1C000F8C0 (ndisMWakeUpDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C0015390 (ndisMTimerObjectDpc.c)
 *     ndisMOidRequestToRequest @ 0x1C004256C (ndisMOidRequestToRequest.c)
 *     ndisMDpc @ 0x1C005C334 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C005C578 (ndisMDpcX.c)
 *     ndisMTimerDpc @ 0x1C005C7D0 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C005C9F0 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     Template_qq @ 0x1C0049D88 (Template_qq.c)
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
  WnodeEventItem[1] = qword_1C0085010;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
  {
    LODWORD(v7) = a2;
    return Template_qq(v6, &DpcStart, (const GUID *)(a1 + 4064), (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF, v7);
  }
  return result;
}
