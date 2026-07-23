/*
 * XREFs of PspJobNotificationWorker @ 0x140554D90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     PspSendReliableJobNotification @ 0x140553D20 (PspSendReliableJobNotification.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rsi
  signed __int32 v2; // edi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v5; // ax

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 960);
      _m_prefetchw((const void *)(v0 + 1296));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1296), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData((PCWNF_STATE_NAME)(v0 + 888), 0LL, 0, 0LL, 0LL, 0, 0);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( CurrentThread )
          --CurrentThread->SpecialApcDisable;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v0 + 56), 1u);
        if ( *(_QWORD *)(v0 + 456) && (*(_DWORD *)(v0 + 884) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0, 0xCu);
        ExReleaseResourceLite((PERESOURCE)(v0 + 56));
        if ( CurrentThread )
        {
          v5 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v5;
          if ( !v5
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
      ObfDereferenceObject((PVOID)v0);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(&PspJobNotificationList, 0LL, -1LL);
  }
  while ( result != -1 );
  return result;
}
