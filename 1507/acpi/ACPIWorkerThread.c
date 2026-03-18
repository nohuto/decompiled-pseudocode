/*
 * XREFs of ACPIWorkerThread @ 0x1C001E800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn ACPIWorkerThread(PVOID StartContext)
{
  KIRQL v1; // al
  __int64 v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  ACPIThread = KeGetCurrentThread();
  Object[0] = &ACPIProcessWorkQueueEvent;
  Object[1] = &ACPITerminateEvent;
  while ( 1 )
  {
    if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray) == 1 )
      PsTerminateSystemThread(0);
    while ( 1 )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v2 = ACPIWorkQueue;
      v3 = v1;
      if ( (__int64 *)ACPIWorkQueue == &ACPIWorkQueue )
      {
        KeClearEvent(&ACPIProcessWorkQueueEvent);
        v2 = 0LL;
      }
      else
      {
        v4 = *(_QWORD *)ACPIWorkQueue;
        if ( *(__int64 **)(ACPIWorkQueue + 8) != &ACPIWorkQueue || *(_QWORD *)(v4 + 8) != ACPIWorkQueue )
          __fastfail(3u);
        ACPIWorkQueue = *(_QWORD *)ACPIWorkQueue;
        *(_QWORD *)(v4 + 8) = &ACPIWorkQueue;
        *(_QWORD *)(v2 + 8) = 0LL;
        *(_QWORD *)v2 = 0LL;
      }
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v3);
      if ( !v2 )
        break;
      (*(void (__fastcall **)(_QWORD))(v2 + 16))(*(_QWORD *)(v2 + 24));
    }
  }
}
