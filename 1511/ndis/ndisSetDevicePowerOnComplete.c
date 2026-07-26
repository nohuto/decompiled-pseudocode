/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C0012E30
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 * Callees:
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0012800 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0012F00 (-NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisQueueWorkItem @ 0x1C0014314 (ndisQueueWorkItem.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, _IRP *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned int Status; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v7; // rdx
  _LIST_ENTRY *v8; // rdi

  if ( (a3->Flags & 0x80u) != 0 )
    Status = 0;
  else
    Status = a2->IoStatus.Status;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(75LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, Status);
  ndisLogMiniportEvent(a3, 12LL);
  NdisTraceLoggingCompletedD0State(a3, Status);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Flink = (_LIST_ENTRY *)a3;
    LOBYTE(v7) = 12;
    PoolWithTag[5].Flink = (_LIST_ENTRY *)a2;
    PoolWithTag->Blink = (_LIST_ENTRY *)ndisDevicePowerOn;
    ndisReferenceMiniportNoCheck(a3, v7);
    if ( (a3->Flags & 0x80u) != 0 )
      KeResetEvent(a3->PowerCompleteEvent);
    v8[1].Flink = 0LL;
    v8[2].Flink = (_LIST_ENTRY *)ndisWorkItemHandler;
    v8[2].Blink = v8;
    ndisQueueWorkItem(v8 + 1);
  }
  else
  {
    ndisScheduleD0CompleteSignalWorkItem((__int64)a3, -1073741670);
    if ( (a3->Flags & 0x80u) == 0 )
      IofCompleteRequest(a2, 0);
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(76LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
  return 3221225494LL;
}
