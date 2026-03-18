/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C001A240
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00010E4 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSystemPowerState @ 0x1C00043FC (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0021490 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhPdoSetDx @ 0x1C0022EC0 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhSetPdoPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // esi
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 result; // rax

  v6 = a4;
  v7 = PdoExt(a2, a2, a3, a4);
  FdoExt(*(_QWORD *)(a1 + 8), v8, v9, v10);
  v11 = ((unsigned __int8)v7[2] + 1) & 7;
  v7[2] = v11;
  v11 *= 32LL;
  *(_DWORD *)((char *)v7 + v11 + 272) = a5;
  result = (unsigned int)v7[282];
  *(_DWORD *)((char *)v7 + v11 + 280) = v6;
  *(_DWORD *)((char *)v7 + v11 + 276) = result;
  v7[282] = v6;
  return result;
}
