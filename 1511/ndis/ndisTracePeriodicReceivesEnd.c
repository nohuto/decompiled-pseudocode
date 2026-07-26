/*
 * XREFs of ndisTracePeriodicReceivesEnd @ 0x1C004B00C
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0061AF4 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0062D40 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     Template_qxq @ 0x1C0049E78 (Template_qxq.c)
 */

NTSTATUS __fastcall ndisTracePeriodicReceivesEnd(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a3;
  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  BYTE4(WnodeEventItem[0]) = 18;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  WnodeEventItem[7] = a2;
  LODWORD(WnodeEventItem[9]) = KeGetPcr()->Prcb.Number;
  v6 = *(_QWORD *)(a1 + 4080) >> 24;
  LOWORD(WnodeEventItem[0]) = 80;
  WnodeEventItem[8] = v3;
  LODWORD(WnodeEventItem[6]) = v6 & 0xFFFFFF;
  WnodeEventItem[1] = qword_1C0085010;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
    return Template_qxq(v9, v8, (const GUID *)(a1 + 4064), (*(_QWORD *)(a1 + 4080) >> 24) & 0xFFFFFF, a2, v3);
  return result;
}
