/*
 * XREFs of UsbhFreePortChangeQueueTimeoutObject @ 0x1C00407FC
 * Callers:
 *     Usbh_PCE_QueueChange_Action @ 0x1C001AA70 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1C0045668 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueTimeoutObject(__int64 a1, __int64 a2, void *a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  KSPIN_LOCK *v11; // rdi
  KIRQL v12; // al
  KIRQL v13; // bl
  __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-20h]

  Log(a1, 512, 1718898755, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x35u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v15);
  }
  v11 = (KSPIN_LOCK *)(FdoExt(a1, v8, v9, v10) + 1236);
  v12 = KeAcquireSpinLockRaiseToDpc(v11);
  *(_QWORD *)(a2 + 680) = 0LL;
  *(_DWORD *)(a2 + 696) = 0;
  v13 = v12;
  KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
  KeReleaseSpinLock(v11, v13);
  v14 = *(_QWORD *)(a2 + 392);
  if ( v14 && a4 )
    Usbh_iSignalSyncDeviceReset(a1, v14, a2);
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
}
