/*
 * XREFs of PspJobNotificationWorker @ 0x1404E3A8C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     PspSendReliableJobNotification @ 0x14047310C (PspSendReliableJobNotification.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rsi
  signed __int32 v2; // edi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi

  do
  {
    v0 = _InterlockedExchange64(&PspJobNotificationList, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 952);
      _m_prefetchw((const void *)(v0 + 1304));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1304), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 880, 0LL, 0LL);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( CurrentThread )
          --CurrentThread->SpecialApcDisable;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v0 + 56), 1u);
        if ( *(_QWORD *)(v0 + 456) && (*(_DWORD *)(v0 + 876) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0, 0xCu);
        PspUnlockJob(v0, (__int64)CurrentThread);
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
