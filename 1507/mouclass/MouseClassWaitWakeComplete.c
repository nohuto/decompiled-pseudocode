/*
 * XREFs of MouseClassWaitWakeComplete @ 0x1C0004B20
 * Callers:
 *     <none>
 * Callees:
 *     MouseToggleWaitWake @ 0x1C0004CD4 (MouseToggleWaitWake.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00053F4 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0005A98 (WPP_RECORDER_SF_qqd.c)
 */

void __fastcall MouseClassWaitWakeComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _IO_STATUS_BLOCK *v6; // rdi
  KIRQL v7; // al
  struct _IO_STATUS_BLOCK *v8; // rdx
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  NTSTATUS Status; // eax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d

  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 9);
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 37);
  if ( v8 && IoStatus == &v8[3] )
  {
    *((_QWORD *)Context + 37) = 0LL;
LABEL_7:
    v6 = v8;
    goto LABEL_8;
  }
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 35);
  if ( v8 && IoStatus == &v8[3] )
  {
    *((_QWORD *)Context + 35) = 0LL;
    *((_BYTE *)Context + 288) = 0;
    goto LABEL_7;
  }
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 9, v7);
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 85);
  Status = IoStatus->Status;
  if ( IoStatus->Status != -2147483631
    && Status != -1073741536
    && Status != -1073741436
    && Status != -1073741101
    && Status != -1072431071 )
  {
    if ( Status )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v11, v12, 87);
      if ( (int)MouseToggleWaitWake(Context, 0LL) < 0 )
        WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16);
      goto LABEL_19;
    }
    PoRequestPowerIrp(
      *((PDEVICE_OBJECT *)Context + 3),
      2u,
      (POWER_STATE)1,
      (PREQUEST_POWER_COMPLETE)MouseClassWWPowerUpComplete,
      Context,
      0LL);
  }
  if ( IoStatus->Status < 0 )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v11, v12, 86);
  }
LABEL_19:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, v6, 0x20u);
}
