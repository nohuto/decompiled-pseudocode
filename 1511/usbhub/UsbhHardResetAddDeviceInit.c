/*
 * XREFs of UsbhHardResetAddDeviceInit @ 0x1C00273F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhHardResetAddDeviceInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx

  v4 = FdoExt(a1, a2, a3, a4);
  KeInitializeEvent((PRKEVENT)(v4 + 712), NotificationEvent, 1u);
  KeInitializeSemaphore((PRKSEMAPHORE)v4 + 88, 1, 1);
  v4[702] = 1;
}
