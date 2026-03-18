/*
 * XREFs of PspSendSiloTerminationNotification @ 0x140642548
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x14063FEE0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140640348 (PspDeleteSilo.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PspSendJobNotification @ 0x140117780 (PspSendJobNotification.c)
 */

void __fastcall PspSendSiloTerminationNotification(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  if ( *(_QWORD *)(a1 + 456) && (*(_DWORD *)(a1 + 884) & 0x2000) != 0 )
    PspSendJobNotification(a1, 13LL, a2, 0);
  PspUnlockJob(a1, (__int64)CurrentThread);
}
