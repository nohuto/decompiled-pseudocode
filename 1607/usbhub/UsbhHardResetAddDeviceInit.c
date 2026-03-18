/*
 * XREFs of UsbhHardResetAddDeviceInit @ 0x1C000A9A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhHardResetAddDeviceInit(__int64 a1)
{
  __int64 v1; // rbx

  v1 = FdoExt(a1);
  KeInitializeEvent((PRKEVENT)(v1 + 2848), NotificationEvent, 1u);
  KeInitializeSemaphore((PRKSEMAPHORE)(v1 + 2816), 1, 1);
  *(_DWORD *)(v1 + 2808) = 1;
}
