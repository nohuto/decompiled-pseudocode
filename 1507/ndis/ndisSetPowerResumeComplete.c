/*
 * XREFs of ndisSetPowerResumeComplete @ 0x1C0068DA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C005FBA4 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     NdisUnexpectedSsError @ 0x1C00672F0 (NdisUnexpectedSsError.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(__int64 a1, _IRP *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  int Status; // esi
  KIRQL v7; // al

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, (__int64)a3, Status);
  ndisLogMiniportEvent((__int64)a3, 0xDu);
  if ( Status >= 0 )
  {
    SelectiveSuspend->ResumeWorkItem.Miniport = a3;
    SelectiveSuspend->ResumeWorkItem.Irp = a2;
    ExQueueWorkItem(&SelectiveSuspend->ResumeWorkItem.Item, CriticalWorkQueue);
    return 3221225494LL;
  }
  else
  {
    NdisUnexpectedSsError(a3, 0x5A4u);
    if ( (unsigned __int8)byte_1C0085316 >= 2u )
      WPP_SF_dq(0x1Du, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, Status, a3);
    v7 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value &= ~0x20u;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    ndisMiniportFatalError(a3, 74LL);
    ndisScheduleD0CompleteSignalWorkItem((__int64)a3, Status);
    return 0LL;
  }
}
