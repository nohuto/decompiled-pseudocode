/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x14042E840
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(void **)a1;
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  KeLeaveCriticalRegion();
}
