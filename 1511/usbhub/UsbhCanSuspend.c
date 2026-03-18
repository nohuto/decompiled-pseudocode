/*
 * XREFs of UsbhCanSuspend @ 0x1C00025A0
 * Callers:
 *     UsbhFdoSxIoComplete_Action @ 0x1C00016B0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0002500 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

bool __fastcall UsbhCanSuspend(__int64 a1, int a2)
{
  return *(_DWORD *)(FdoExt(a1) + 4LL * a2 + 5008) == 3;
}
