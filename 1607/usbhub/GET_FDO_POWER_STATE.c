/*
 * XREFs of GET_FDO_POWER_STATE @ 0x1C001783C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00020B0 (UsbhFdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0021770 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhPdoSetDx @ 0x1C0022EC0 (UsbhPdoSetDx.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8), v5, v6, v7)[1043];
}
