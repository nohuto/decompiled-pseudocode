/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x1C001CF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KSPIN_LOCK *v3; // rbx
  KIRQL v5; // al

  ++*((_DWORD *)Context + 15);
  v3 = (KSPIN_LOCK *)(Context + 216);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 27);
  *((_DWORD *)Context + 26) &= ~8u;
  KeReleaseSpinLock(v3, v5);
  ++*((_DWORD *)Context + 18);
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 1136))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)Context);
  KeSetEvent((PRKEVENT)(Context + 184), 0, 0);
}
