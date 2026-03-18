/*
 * XREFs of UsbhWmiDriverEntry @ 0x1C0004F10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  word_1C0067422 = *(_WORD *)a2 + 2;
  UsbhRegistryPath = *(_WORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)word_1C0067422, 0x42554855u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned __int16)word_1C0067422);
  if ( !P )
    return 3221225626LL;
  memmove(P, a2[1], *(unsigned __int16 *)a2);
  dword_1C00673CC = 0;
  dword_1C00673DC = 0;
  dword_1C00673EC = 0;
  dword_1C00673FC = 0;
  dword_1C006740C = 0;
  dword_1C006744C = 0;
  dword_1C006745C = 0;
  dword_1C006746C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C00673D0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C00673E0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C00673F0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C0067410 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C0067450 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C00673C8 = 1;
  dword_1C00673D8 = 1;
  dword_1C00673E8 = 1;
  dword_1C00673F8 = 1;
  qword_1C0067400 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C0067408 = 1;
  dword_1C0067418 = 1;
  dword_1C006741C = 64;
  dword_1C0067448 = 1;
  dword_1C0067458 = 1;
  qword_1C0067460 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C0067468 = 1;
  UsbhWmiInit = 1;
  return result;
}
