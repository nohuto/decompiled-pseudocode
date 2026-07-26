/*
 * XREFs of ndisCancelIdleRequestSync @ 0x1C006654C
 * Callers:
 *     ndisSelectiveSuspendStop @ 0x1C0067AB8 (ndisSelectiveSuspendStop.c)
 *     ndisSetBusySync @ 0x1C0067C58 (ndisSetBusySync.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0068CD0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0069D1C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ndisCancelIdleRequest @ 0x1C0066454 (ndisCancelIdleRequest.c)
 */

void __fastcall ndisCancelIdleRequestSync(struct _NDIS_MINIPORT_BLOCK *a1, int a2, unsigned int a3, char a4)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v6; // dl

  SelectiveSuspend = a1->SelectiveSuspend;
  ndisCancelIdleRequest(a1, a2, a3);
  KeWaitForSingleObject(&SelectiveSuspend->IdleNotificationCompleteEvent, Executive, 0, 0, 0LL);
  if ( a4 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    if ( (SelectiveSuspend->Flags.Value & 0x410) == 0x10 )
    {
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v6);
      KeWaitForSingleObject(&SelectiveSuspend->DevicePowerReadyEvent, Executive, 0, 0, 0LL);
    }
    else
    {
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v6);
    }
  }
}
