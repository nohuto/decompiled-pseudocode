/*
 * XREFs of VfEvtIoResume @ 0x1C00D35C0
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x1C0075AF8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0075B20 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0075B78 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00D212C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoResume(WDFQUEUE__ *Queue, WDFREQUEST__ *Request)
{
  char *TypedContext; // rdi
  void (__fastcall *v5)(WDFQUEUE__ *, WDFREQUEST__ *); // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+50h] [rbp+18h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v5 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))*((_QWORD *)TypedContext + 9);
  if ( v5 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v5(Queue, Request);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v5);
  }
}
