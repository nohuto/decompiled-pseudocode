/*
 * XREFs of UsbhBillboardCleanup @ 0x1C0053BBC
 * Callers:
 *     UsbhDeletePdo @ 0x1C0053F84 (UsbhDeletePdo.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054D80 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhBillboardCleanup(PDEVICE_OBJECT Pdo, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 result; // rax

  v5 = PdoExt((__int64)Pdo, a2, a3, a4);
  IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, 0, 0LL);
  result = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL);
  *((_QWORD *)v5 + 300) = 0LL;
  return result;
}
