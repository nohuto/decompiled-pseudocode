/*
 * XREFs of Template_pq @ 0x1C00012BC
 * Callers:
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004ACC (HUBHTX_Get30PortChangeEvent.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0006AD0 (HUBPARENT_ResetHubComplete.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000C40C (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C00118D0 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0013BC0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001E650 (HUBUCX_UCXIoctlComplete.c)
 *     HUBMISC_CreateNewDSM @ 0x1C0028400 (HUBMISC_CreateNewDSM.c)
 *     HUBIDLE_AddEvent @ 0x1C0032E64 (HUBIDLE_AddEvent.c)
 *     HUBDRIVER_EtwRundownHub @ 0x1C00654B8 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00661A0 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B50 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00672E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068710 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C0069724 (HUBFDO_IoctlCyclePort.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C006ABC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C006B5F4 (HUBPDO_CreatePdoInternal.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C006E0C8 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 */

NTSTATUS Template_pq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  va_copy(v5, va1);
  v7 = 0;
  v6 = 4;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 2u, &v4);
}
