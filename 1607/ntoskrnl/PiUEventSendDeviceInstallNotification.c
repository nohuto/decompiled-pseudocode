/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x14062E62C
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     Template_z @ 0x1401CDFD0 (Template_z.c)
 */

NTSTATUS __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0LL);
  if ( result >= 0 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
    return Template_z(v3, &KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
