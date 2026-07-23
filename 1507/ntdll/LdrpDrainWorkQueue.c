/*
 * XREFs of LdrpDrainWorkQueue @ 0x180035978
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindLoadedDll @ 0x18001870C (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180020D34 (LdrpFastpthReloadedDll.c)
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18003E1C0 (RtlQueryInformationActivationContext.c)
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800758C0 (LdrEnumerateLoadedModules.c)
 *     LdrInitShimEngineDynamic @ 0x1800BDB20 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800C2340 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800C28A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18003BF8C (LdrpUpdateStatistics.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // bp
  char v4; // si
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _TEB *result; // rax

  v1 = LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v4 = LdrpDetourExist;
    if ( !LdrpDetourExist || a1 == 1 )
    {
      v5 = (__int64 *)LdrpWorkQueue;
      v6 = *(_QWORD *)LdrpWorkQueue;
      if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v6 + 8) != LdrpWorkQueue )
        __fastfail(3u);
      LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
      *(_QWORD *)(v6 + 8) = &LdrpWorkQueue;
      if ( &LdrpWorkQueue == v5 )
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
      }
      else
      {
        if ( !v4 )
          ++LdrpWorkInProgress;
        LdrpUpdateStatistics();
      }
    }
    else
    {
      if ( LdrpWorkInProgress == a1 )
      {
        LdrpWorkInProgress = 1;
        v2 = 1;
      }
      v5 = &LdrpWorkQueue;
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v2 )
      break;
    if ( &LdrpWorkQueue == v5 )
    {
      NtWaitForSingleObject(v1, 0, 0LL);
    }
    else
    {
      LOBYTE(v7) = v4;
      LdrpProcessWork(v5 - 7, v7);
    }
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
