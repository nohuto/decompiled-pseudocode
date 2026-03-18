/*
 * XREFs of UsbhWmiDriverEntry @ 0x1C0027FC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  PVOID PoolWithTag; // rax
  __int64 result; // rax

  word_1C0066422 = *(_WORD *)a2 + 2;
  UsbhRegistryPath = *(_WORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)word_1C0066422, 0x42554855u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned __int16)word_1C0066422);
  if ( !P )
    return 3221225626LL;
  memmove(P, a2[1], *(unsigned __int16 *)a2);
  dword_1C00663CC = 0;
  dword_1C00663DC = 0;
  dword_1C00663EC = 0;
  dword_1C00663FC = 0;
  dword_1C006640C = 0;
  dword_1C006644C = 0;
  dword_1C006645C = 0;
  dword_1C006646C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C00663D0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1C00663E0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1C00663F0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_1C0066410 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_1C0066450 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_1C00663C8 = 1;
  dword_1C00663D8 = 1;
  dword_1C00663E8 = 1;
  dword_1C00663F8 = 1;
  qword_1C0066400 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C0066408 = 1;
  dword_1C0066418 = 1;
  dword_1C006641C = 64;
  dword_1C0066448 = 1;
  dword_1C0066458 = 1;
  qword_1C0066460 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_1C0066468 = 1;
  UsbhWmiInit = 1;
  return result;
}
