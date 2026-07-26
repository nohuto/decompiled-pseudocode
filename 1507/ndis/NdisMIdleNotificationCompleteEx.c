/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x1C0067030
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x1C0067020 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisRequestPowerResume @ 0x1C00682B4 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006880C (ndisSelectiveSuspendResumeOperations.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0069890 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?NdisTraceLoggingCompleteIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006E3AC (-NdisTraceLoggingCompleteIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v5; // si
  unsigned int Value; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( (unsigned __int8)byte_1C0085316 >= 4u )
    WPP_SF_qD(0x1Bu, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, (__int64)a1, a2);
  NdisTraceLoggingCompleteIdleNotification(a1, a2);
  SelectiveSuspend->Flags.Value &= ~4u;
  KeSetEvent(&SelectiveSuspend->IdleNotificationCompleteEvent, 0, 0);
  SelectiveSuspend->Flags.Value &= ~0x80u;
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    if ( a2 >= 0 && a1->CurrentDevicePowerState == PowerDeviceD3 )
      ndisAoAcScheduleWakeWorkItem(a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (Value & 0x10) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisSelectiveSuspendResumeOperations(a1, 0LL);
  }
  ndisDereferenceMiniport((__int64)a1, 0x13u);
}
