/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x14058DFD4
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 * Callees:
 *     Template_z @ 0x14015CA44 (Template_z.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 */

int __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  int result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( result >= 0 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
    return Template_z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
