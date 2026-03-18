/*
 * XREFs of Usbh_OvercurrentDerefHubBusy @ 0x1C003E858
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E150 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E1EC (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E2B0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E338 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E590 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E700 (UsbhQueueOvercurrentReset.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 */

LONG __fastcall Usbh_OvercurrentDerefHubBusy(__int64 a1, __int64 a2, char a3)
{
  struct _KEVENT *v3; // rsi
  __int64 v7; // rdx
  __int64 v8; // r9

  v3 = (struct _KEVENT *)(a2 + 2888);
  KeWaitForSingleObject((PVOID)(a2 + 2888), Executive, 0, 0, 0LL);
  if ( a3 == 1 )
    --*(_DWORD *)(a2 + 2912);
  else
    *(_BYTE *)(a2 + 2916) = 0;
  if ( !*(_DWORD *)(a2 + 2912) && !*(_BYTE *)(a2 + 2916) )
  {
    UsbhDecHubBusy(a1, v7, *(_QWORD **)(a2 + 2880), v8);
    *(_QWORD *)(a2 + 2880) = 0LL;
  }
  return KeSetEvent(v3, 0, 0);
}
