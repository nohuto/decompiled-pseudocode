/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x1C00267F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KSPIN_LOCK *v3; // rbx
  KIRQL v5; // al
  __int64 v6; // rax

  ++*((_DWORD *)Context + 15);
  v3 = (KSPIN_LOCK *)(Context + 216);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 27);
  *((_DWORD *)Context + 26) &= ~8u;
  KeReleaseSpinLock(v3, v5);
  v6 = WdfFunctions_01015;
  ++*((_DWORD *)Context + 18);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v6 + 1136))(WdfDriverGlobals, *(_QWORD *)Context);
  KeSetEvent((PRKEVENT)(Context + 184), 0, 0);
}
