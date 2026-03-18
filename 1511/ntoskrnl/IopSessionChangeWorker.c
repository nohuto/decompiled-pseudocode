/*
 * XREFs of IopSessionChangeWorker @ 0x140126818
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExNotifyWithProcessing @ 0x14009200C (ExNotifyWithProcessing.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x14050C320 (MmSetSessionObjectIoEvent.c)
 */

void __fastcall IopSessionChangeWorker(__int64 a1)
{
  void *v2; // rcx

  ExNotifyWithProcessing((__int64)IopSessionCallbackObject, a1, 0LL, 0LL);
  MmSetSessionObjectIoEvent(*(_QWORD *)(a1 + 56));
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x746C6644u);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
