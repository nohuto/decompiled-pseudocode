/*
 * XREFs of SET_PDO_HWPNPSTATE @ 0x1C000D0D4
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhQueryBusRelations @ 0x1C0012300 (UsbhQueryBusRelations.c)
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044578 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004479C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044A84 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00450F4 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045320 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhDeleteOrphanPdo @ 0x1C00537EC (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

__int64 __fastcall SET_PDO_HWPNPSTATE(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)*(_DWORD *)(result + 4) + 1) & 7;
  *(_DWORD *)(result + 4) = v6;
  v6 *= 32LL;
  *(_DWORD *)(v6 + result + 16) = a3;
  *(_DWORD *)(v6 + result + 20) = *(_DWORD *)(result + 1124);
  *(_DWORD *)(v6 + result + 24) = a2;
  *(_DWORD *)(result + 1124) = a2;
  return result;
}
