/*
 * XREFs of SET_PDO_HWPNPSTATE @ 0x1C001E760
 * Callers:
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 *     UsbhQueryBusRelations @ 0x1C00158F0 (UsbhQueryBusRelations.c)
 *     UsbhBusConnectPdo @ 0x1C001E444 (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0042EE0 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044448 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004466C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044954 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044FC4 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhDeleteOrphanPdo @ 0x1C005381C (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_HWPNPSTATE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  _DWORD *result; // rax
  __int64 v7; // r9

  v4 = a3;
  v5 = a2;
  result = PdoExt(a1, a2, a3, a4);
  v7 = ((unsigned __int8)result[1] + 1) & 7;
  result[1] = v7;
  v7 *= 32LL;
  *(_DWORD *)((char *)result + v7 + 16) = v4;
  *(_DWORD *)((char *)result + v7 + 20) = result[281];
  *(_DWORD *)((char *)result + v7 + 24) = v5;
  result[281] = v5;
  return result;
}
