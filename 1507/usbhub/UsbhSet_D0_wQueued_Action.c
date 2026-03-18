/*
 * XREFs of UsbhSet_D0_wQueued_Action @ 0x1C0024930
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhReleasePowerContext @ 0x1C0022434 (UsbhReleasePowerContext.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C00249A8 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhAcquirePowerContext @ 0x1C0024DD0 (UsbhAcquirePowerContext.c)
 */

__int64 __fastcall UsbhSet_D0_wQueued_Action(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = UsbhAcquirePowerContext(a1, a2, a3, 0, a4, 1, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = UsbhFdoScheduleDeferredPowerRequest(a1, UsbhPdoSetD0, v6, a4);
    if ( (v8 & 0xC0000000) == 0xC0000000 )
      UsbhReleasePowerContext(a1, v7, v9, v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
