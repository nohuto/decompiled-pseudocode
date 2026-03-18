/*
 * XREFs of UsbhSshEnterSx @ 0x1C00028D4
 * Callers:
 *     UsbhFdoSetPowerSx_Action @ 0x1C00027A8 (UsbhFdoSetPowerSx_Action.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 */

LONG __fastcall UsbhSshEnterSx(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // rsi
  signed __int64 v3; // rbx
  __int64 v4; // r9
  int v5; // r10d
  __int64 v7; // rdx

  v2 = FdoExt(a1);
  v3 = UsbhIncHubBusy(a1, 1);
  KeWaitForSingleObject((PVOID)(v2 + 3160), Executive, 0, 0, 0LL);
  Log(
    (_DWORD)a1,
    0x10000,
    1213429803,
    _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 3304), v3, 0LL),
    v3);
  if ( v4 )
  {
    Log((_DWORD)a1, v5, 1213429810, v4, v3);
    UsbhDecHubBusy(a1, v7, v3);
  }
  UsbhDisableTimerObject(a1, v2 + 3200);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 3160), 16, 1, 0);
}
