/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C000FC80
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 * Callees:
 *     ndisQueueWorkItem @ 0x1C000FD5C (ndisQueueWorkItem.c)
 *     ?NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C000FDC4 (-NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C005FBA4 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009B078 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, _IRP *a2, __int64 a3)
{
  unsigned int Status; // edi
  int v6; // ecx
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v8; // rdx
  _LIST_ENTRY *v9; // rdi
  _DEVICE_OBJECT *v11; // rcx
  POWER_STATE v12; // r8d

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    Status = 0;
  else
    Status = a2->IoStatus.Status;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_qD(74LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a3, Status);
  ndisLogMiniportEvent(a3, 12LL);
  NdisTraceLoggingCompletedD0State((struct _NDIS_MINIPORT_BLOCK *)a3, Status);
  if ( *(_DWORD *)(a3 + 1520) != 1 )
  {
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(75LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a3);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        v6,
        (unsigned int)&PowerOnMiniportNotStarted,
        a3 + 4064,
        a3 + 4064,
        *(_DWORD *)(a3 + 4112),
        *(_QWORD *)(a3 + 4080),
        234);
    v11 = *(_DEVICE_OBJECT **)(a3 + 3880);
    v12.SystemState = (_SYSTEM_POWER_STATE)a2->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    *(POWER_STATE *)(a3 + 3924) = v12;
    PoSetPowerState(v11, DevicePowerState, v12);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a3 + 5344);
    ndisScheduleD0CompleteSignalWorkItem(a3, 0LL);
    goto LABEL_19;
  }
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ndisScheduleD0CompleteSignalWorkItem(a3, 3221225626LL);
    if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
      goto LABEL_10;
LABEL_19:
    IofCompleteRequest(a2, 0);
    goto LABEL_10;
  }
  PoolWithTag->Flink = (_LIST_ENTRY *)a3;
  LOBYTE(v8) = 12;
  PoolWithTag[5].Flink = (_LIST_ENTRY *)a2;
  PoolWithTag->Blink = (_LIST_ENTRY *)ndisDevicePowerOn;
  ndisReferenceMiniportNoCheck(a3, v8);
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    KeResetEvent(*(PRKEVENT *)(a3 + 5488));
  v9[1].Flink = 0LL;
  v9[2].Flink = (_LIST_ENTRY *)ndisWorkItemHandler;
  v9[2].Blink = v9;
  ndisQueueWorkItem(v9 + 1);
LABEL_10:
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(76LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a3);
  return 3221225494LL;
}
