/*
 * XREFs of RIMFreeDev @ 0x1C000B268
 * Callers:
 *     RIMAddNonPnpDeviceOfType @ 0x1C0009D90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0010F40 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00CE230 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00CF4C0 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00D0310 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00D04D8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00DA62C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C000CEB0 (RIMFreeSpecificDev.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)(a1 + 552); *i; i = (_QWORD *)(*i + 40LL) )
  {
    if ( *i == a2 )
    {
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2);
      return 0LL;
    }
  }
  return 0LL;
}
