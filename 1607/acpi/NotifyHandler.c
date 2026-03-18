/*
 * XREFs of NotifyHandler @ 0x1C0054C30
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C0053810 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0051438 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C00514B8 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceWake @ 0x1C00515DC (OSNotifyDeviceWake.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0053E74 (WPP_RECORDER_SF_DDD.c)
 *     DispatchNotification @ 0x1C0054A10 (DispatchNotification.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, int a2, __int64 *a3)
{
  int v4; // esi
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v9 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_DDD(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    2,
    10,
    (__int64)&WPP_177579747d1334c559bfe4abf9cd1281_Traceguids,
    (char)a3,
    v9,
    *(_WORD *)(*a3 + 66));
  if ( v4 )
  {
    switch ( v4 )
    {
      case 1:
        OSNotifyDeviceCheck((__int64)a3);
        break;
      case 2:
        OSNotifyDeviceWake(a3);
        break;
      case 3:
        OSNotifyDeviceEject((__int64)a3);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum((volatile signed __int32 *)a3);
  }
  v5 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(*a3 + 104);
  if ( v7 && *(_DWORD *)(v7 + 16) == 1599293264 )
    v5 = v7 + 328;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  if ( v5 )
    DispatchNotification(v5 - 328, v4);
  return 0LL;
}
