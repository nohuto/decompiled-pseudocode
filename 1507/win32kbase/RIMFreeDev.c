/*
 * XREFs of RIMFreeDev @ 0x1C00759DC
 * Callers:
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C006F3B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00825E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0084B00 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C0E60 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C1C90 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C29F0 (RIMRemoveInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00C937C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C00760D0 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)(a1 + 512); *i; i = (_QWORD *)(*i + 40LL) )
  {
    if ( *i == a2 )
    {
      *i = *(_QWORD *)(a2 + 40);
      RIMFreeSpecificDev(a1, a2);
      return 0LL;
    }
  }
  return 0LL;
}
