/*
 * XREFs of WmipRegisterFirmwareProviders @ 0x1407E8814
 * Callers:
 *     WMIInitialize @ 0x1407C07E4 (WMIInitialize.c)
 * Callees:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 */

NTSTATUS WmipRegisterFirmwareProviders()
{
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+20h] [rbp-28h] BYREF
  char v2; // [rsp+24h] [rbp-24h]
  __int64 (__fastcall *v3)(_DWORD *); // [rsp+28h] [rbp-20h]
  PDRIVER_OBJECT v4; // [rsp+30h] [rbp-18h]

  SystemInformation = 1381190978;
  v2 = 1;
  v3 = WmipRawSMBiosTableHandler;
  v4 = PnpDriverObject;
  result = NtSetSystemInformation(SystemRegisterFirmwareTableInformationHandler, &SystemInformation, 0x18u);
  if ( dword_1403254D0 == 1 )
  {
    SystemInformation = 1179210317;
    v2 = 1;
    v3 = WmipFirmwareTableHandler;
    v4 = PnpDriverObject;
    return NtSetSystemInformation(SystemRegisterFirmwareTableInformationHandler, &SystemInformation, 0x18u);
  }
  return result;
}
