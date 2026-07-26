/*
 * XREFs of ndisSetPowerResumeComplete @ 0x1C0067E70
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0012800 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     NdisUnexpectedSsError @ 0x1C00663C0 (NdisUnexpectedSsError.c)
 *     ndisMiniportFatalError @ 0x1C00CDFC8 (ndisMiniportFatalError.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(__int64 a1, _IRP *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  int Status; // esi
  KIRQL v7; // al

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)a3, Status);
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
    if ( (unsigned __int8)byte_1C0083716 >= 2u )
      WPP_SF_dq(0x1Du, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, Status, a3);
    v7 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value &= ~0x20u;
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    ndisMiniportFatalError(a3, 74LL);
    ndisScheduleD0CompleteSignalWorkItem((__int64)a3, Status);
    return 0LL;
  }
}
