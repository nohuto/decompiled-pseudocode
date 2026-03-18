/*
 * XREFs of RIMFreeDev @ 0x1C000F020
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00063A4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C2978 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C36E0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00C3878 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00CA27C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0010B14 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)(a1 + 544); *i; i = (_QWORD *)(*i + 40LL) )
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
