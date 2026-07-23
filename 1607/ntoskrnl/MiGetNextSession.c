/*
 * XREFs of MiGetNextSession @ 0x140087F18
 * Callers:
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x14014CE1C (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1400767C8 (MiSelectSessionAttachProcess.c)
 */

_QWORD *__fastcall MiGetNextSession(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 JobSilo; // rax
  _QWORD *v4; // rsi
  __int64 EffectiveServerSilo; // r14
  __int64 v6; // rbx
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  v4 = 0LL;
  EffectiveServerSilo = PsGetEffectiveServerSilo(JobSilo);
  if ( Object )
    v6 = Object[128];
  else
    v6 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  if ( v6 )
    v7 = *(__int64 **)(v6 + 144);
  else
    v7 = (__int64 *)qword_140327850;
  while ( v7 != &qword_140327850 )
  {
    v8 = MiSelectSessionAttachProcess((__int64)(v7 - 18));
    v4 = v8;
    if ( v8 )
    {
      if ( !EffectiveServerSilo || v7[997] == EffectiveServerSilo )
        break;
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      v4 = 0LL;
    }
    v7 = (__int64 *)*v7;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v4;
}
