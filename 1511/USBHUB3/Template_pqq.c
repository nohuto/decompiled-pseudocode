/*
 * XREFs of Template_pqq @ 0x1C000A2BC
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000A690 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000A8F0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B420 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000B9C8 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C00101A8 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C0010370 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C00104F0 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012A40 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0013A50 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013C30 (HUBPDO_EvtDeviceD0Exit.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0015848 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001C5B0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C0063AA8 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0063C74 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0063FF4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C0064214 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C00643D0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C00645E4 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C0064F58 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00651E0 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0065588 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C00659B0 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0065E74 (HUBFDO_IoctlResetHub.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C006F25C (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 */

NTSTATUS Template_pqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  va_list v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  va_list va2; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  va_copy(v7, va2);
  v6 = 4LL;
  v8 = 4LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 3u, &UserData);
}
