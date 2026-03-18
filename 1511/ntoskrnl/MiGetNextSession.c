/*
 * XREFs of MiGetNextSession @ 0x1400E6E30
 * Callers:
 *     MmGetNextSession @ 0x1400E6E28 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x140116604 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x140142930 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     MiSelectSessionAttachProcess @ 0x140091AC8 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiGetNextSession(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v3; // rax
  void *ServerSiloForSilo; // rax
  void *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v3);
  v5 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  v6 = 0LL;
  if ( Object )
    v7 = Object[128];
  else
    v7 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( v7 )
    v8 = *(__int64 **)(v7 + 144);
  else
    v8 = (__int64 *)qword_1402FF750;
  while ( v8 != &qword_1402FF750 )
  {
    v9 = MiSelectSessionAttachProcess((__int64)(v8 - 18));
    v6 = v9;
    if ( v9 )
    {
      if ( !v5 || (void *)v8[980] == v5 )
        break;
      ObfDereferenceObject(v9);
      v6 = 0LL;
    }
    v8 = (__int64 *)*v8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v5 )
    ObfDereferenceObject(v5);
  return v6;
}
