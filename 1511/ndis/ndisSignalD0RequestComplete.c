/*
 * XREFs of ndisSignalD0RequestComplete @ 0x1C00121C0
 * Callers:
 *     ndisSignalD0CompleteWorkItem @ 0x1C0012140 (ndisSignalD0CompleteWorkItem.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0067F60 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 * Callees:
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0069868 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisPowerSaveClearStop @ 0x1C0097A10 (ndisPowerSaveClearStop.c)
 */

LONG __fastcall ndisSignalD0RequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // al
  _NDIS_MINIPORT_EVENT LastD0Reason; // bp
  int v6; // ecx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LastD0Reason = a1->LastD0Reason;
  a1->SyncFlags &= ~2u;
  a1->LastD0CompleteStatus = a2;
  a1->LastD0Reason = NdisMEvent_Unknown;
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v4);
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    Template_jqxq(
      v6,
      (unsigned int)&DevicePowerOnComplete,
      (_DWORD)a1 + 4064,
      (_DWORD)a1 + 4064,
      a1->IfIndex,
      a1->NetLuid.Value,
      a2);
  if ( LastD0Reason == NdisMEventD0_SystemResume )
  {
    if ( !a2 )
      ndisPowerSaveClearStop(a1, (enum _NDIS_SS_STOP_REASON)((unsigned __int16)LastD0Reason + 1));
  }
  else if ( (unsigned __int16)LastD0Reason > NdisMEventD0_SystemResume
         && ((unsigned __int16)LastD0Reason <= NdisMEventD0_AoAcWake || LastD0Reason == NdisMEventD0_AoAcSurpriseWake) )
  {
    ndisNicActiveRequestComplete(a1, a2);
  }
  return KeSetEvent(&a1->PowerD0CompleteEvent, 0, 0);
}
