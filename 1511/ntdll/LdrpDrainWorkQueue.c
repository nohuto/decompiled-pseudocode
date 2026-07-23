/*
 * XREFs of LdrpDrainWorkQueue @ 0x18002F794
 * Callers:
 *     LdrEnumerateLoadedModules @ 0x180003D80 (LdrEnumerateLoadedModules.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180011F9C (LdrpFastpthReloadedDll.c)
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800CA7C0 (LdrInitShimEngineDynamic.c)
 *     RtlPrepareForProcessCloning @ 0x1800CC2A0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x180009428 (LdrpUpdateStatistics.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // bp
  char v4; // si
  __int64 *v5; // rbx
  __int64 v6; // rax
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
      NtWaitForSingleObject(v1, 0, 0LL);
    else
      LdrpProcessWork((__int64)(v5 - 7), v4);
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
