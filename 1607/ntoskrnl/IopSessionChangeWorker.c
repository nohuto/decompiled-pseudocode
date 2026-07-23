/*
 * XREFs of IopSessionChangeWorker @ 0x140131A14
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x140547384 (MmSetSessionObjectIoEvent.c)
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
