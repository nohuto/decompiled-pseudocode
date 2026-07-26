/*
 * XREFs of ndisCancelIdleRequest @ 0x1C0067384
 * Callers:
 *     ndisCancelIdleRequestSync @ 0x1C006747C (ndisCancelIdleRequestSync.c)
 *     ndisIdleCancelWorkItem @ 0x1C0067640 (ndisIdleCancelWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ?NdisTraceLoggingCancelIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E288 (-NdisTraceLoggingCancelIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisCancelIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, int a2, unsigned int a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v7; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( (SelectiveSuspend->Flags.Value & 0x84) == 4 )
  {
    SelectiveSuspend->Flags.Value |= 0x80u;
    if ( a2 )
    {
      SelectiveSuspend->LastResumeReason.Value = a2;
      SelectiveSuspend->LastResumeContext = a3;
    }
    SelectiveSuspend->LastCancelTime.QuadPart = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    KeWaitForSingleObject(&SelectiveSuspend->IdleNotificationDoneEvent, Executive, 0, 0, 0LL);
    if ( (unsigned __int8)byte_1C0085316 >= 4u )
      WPP_SF_qD(0x1Au, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, (__int64)a1, a2);
    NdisTraceLoggingCancelIdleNotification(a1);
    a1->DriverHandle->CancelIdleNotificationHandler(a1->MiniportAdapterContext);
    return 1;
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    return 0;
  }
}
