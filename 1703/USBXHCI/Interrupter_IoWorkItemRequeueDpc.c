/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x1C0022CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KSPIN_LOCK *v3; // rbx
  KIRQL v5; // al
  __int64 v6; // rax

  ++*((_DWORD *)Context + 13);
  v3 = (KSPIN_LOCK *)(Context + 208);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 26);
  *((_DWORD *)Context + 24) &= ~8u;
  KeReleaseSpinLock(v3, v5);
  v6 = WdfFunctions_01015;
  ++*((_DWORD *)Context + 16);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v6 + 1136))(WdfDriverGlobals, *(_QWORD *)Context);
  KeSetEvent((PRKEVENT)(Context + 176), 0, 0);
}
