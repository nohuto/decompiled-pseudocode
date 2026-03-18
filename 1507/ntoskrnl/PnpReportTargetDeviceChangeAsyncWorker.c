/*
 * XREFs of PnpReportTargetDeviceChangeAsyncWorker @ 0x14067CBB8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PnpSetCustomTargetEvent @ 0x140461C58 (PnpSetCustomTargetEvent.c)
 */

void __fastcall PnpReportTargetDeviceChangeAsyncWorker(__int64 a1)
{
  PnpSetCustomTargetEvent(
    *(_QWORD **)(a1 + 32),
    0LL,
    0LL,
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48),
    *(unsigned __int16 **)(a1 + 56));
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  ExFreePoolWithTag((PVOID)a1, 0x38706E50u);
}
