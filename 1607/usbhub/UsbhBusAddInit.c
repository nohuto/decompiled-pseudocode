/*
 * XREFs of UsbhBusAddInit @ 0x1C000A8A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhBusAddInit(__int64 a1)
{
  __int64 v1; // rbx

  v1 = FdoExt(a1);
  *(_DWORD *)(v1 + 2440) = 1;
  KeInitializeSemaphore((PRKSEMAPHORE)(v1 + 2448), 1, 1);
  *(_QWORD *)(v1 + 4816) = v1 + 4808;
  *(_QWORD *)(v1 + 4808) = v1 + 4808;
  *(_QWORD *)(v1 + 4832) = v1 + 4824;
  *(_QWORD *)(v1 + 4824) = v1 + 4824;
  *(_QWORD *)(v1 + 4848) = v1 + 4840;
  *(_QWORD *)(v1 + 4840) = v1 + 4840;
  *(_QWORD *)(v1 + 2792) = v1 + 2784;
  *(_QWORD *)(v1 + 2784) = v1 + 2784;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 2800));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3720));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4944));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5168));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3064));
  KeInitializeSemaphore((PRKSEMAPHORE)(v1 + 5120), 1, 1);
  *(_DWORD *)(v1 + 2560) &= ~0x200u;
  KeInitializeEvent((PRKEVENT)(v1 + 2600), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(v1 + 2688), NotificationEvent, 1u);
}
