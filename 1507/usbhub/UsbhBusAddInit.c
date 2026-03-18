/*
 * XREFs of UsbhBusAddInit @ 0x1C0026D80
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

void __fastcall UsbhBusAddInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx

  v4 = FdoExt(a1, a2, a3, a4);
  v4[610] = 1;
  KeInitializeSemaphore((PRKSEMAPHORE)(v4 + 612), 1, 1);
  *((_QWORD *)v4 + 602) = v4 + 1202;
  *((_QWORD *)v4 + 601) = v4 + 1202;
  *((_QWORD *)v4 + 604) = v4 + 1206;
  *((_QWORD *)v4 + 603) = v4 + 1206;
  *((_QWORD *)v4 + 606) = v4 + 1210;
  *((_QWORD *)v4 + 605) = v4 + 1210;
  *((_QWORD *)v4 + 349) = v4 + 696;
  *((_QWORD *)v4 + 348) = v4 + 696;
  KeInitializeSpinLock((PKSPIN_LOCK)v4 + 350);
  KeInitializeSpinLock((PKSPIN_LOCK)v4 + 465);
  KeInitializeSpinLock((PKSPIN_LOCK)v4 + 618);
  KeInitializeSpinLock((PKSPIN_LOCK)v4 + 646);
  KeInitializeSpinLock((PKSPIN_LOCK)v4 + 383);
  KeInitializeSemaphore((PRKSEMAPHORE)v4 + 160, 1, 1);
  v4[640] &= ~0x200u;
  KeInitializeEvent((PRKEVENT)(v4 + 650), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v4 + 112, NotificationEvent, 1u);
}
