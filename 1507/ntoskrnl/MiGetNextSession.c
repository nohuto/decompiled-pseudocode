/*
 * XREFs of MiGetNextSession @ 0x1400FD468
 * Callers:
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     PsQueryCpuQuotaInformation @ 0x1401707F4 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1400FD6CC (MiSelectSessionAttachProcess.c)
 */

__int64 __fastcall MiGetNextSession(_QWORD *Object)
{
  __int64 v2; // rbp
  void *CurrentServerSilo; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  if ( Object )
    v4 = Object[128];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( v4 )
    v5 = *(__int64 **)(v4 + 144);
  else
    v5 = (__int64 *)qword_14034FC10;
  while ( v5 != &qword_14034FC10 )
  {
    v6 = MiSelectSessionAttachProcess(v5 - 18);
    v2 = v6;
    if ( !CurrentServerSilo || (void *)v5[980] == CurrentServerSilo )
    {
      if ( v6 )
        break;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( CurrentServerSilo )
    ObfDereferenceObjectWithTag(CurrentServerSilo, 0x746C6644u);
  return v2;
}
