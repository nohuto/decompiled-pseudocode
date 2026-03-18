/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C000D064
 * Callers:
 *     UsbhPdoSystemPowerState @ 0x1C00041FC (UsbhPdoSystemPowerState.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0004BF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C000B300 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetDx @ 0x1C001FC88 (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045320 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054480 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhSetPdoPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax

  v7 = PdoExt(a2);
  FdoExt(*(_QWORD *)(a1 + 8));
  v8 = ((unsigned __int8)*(_DWORD *)(v7 + 8) + 1) & 7;
  *(_DWORD *)(v7 + 8) = v8;
  v8 *= 32LL;
  *(_DWORD *)(v8 + v7 + 272) = a5;
  result = *(unsigned int *)(v7 + 1128);
  *(_DWORD *)(v8 + v7 + 280) = a4;
  *(_DWORD *)(v8 + v7 + 276) = result;
  *(_DWORD *)(v7 + 1128) = a4;
  return result;
}
