/*
 * XREFs of ?ndisSetupDeviceStartComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00738F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetupDeviceStartComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  void *DeviceExtension; // rcx

  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = a1->DeviceExtension;
  if ( !*((_BYTE *)DeviceExtension + 18) )
    KeSetCoalescableTimer(
      (PKTIMER)DeviceExtension + 1,
      (LARGE_INTEGER)-20000000LL,
      0,
      0x3E8u,
      (PKDPC)DeviceExtension + 2);
  return 0LL;
}
