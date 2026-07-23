/*
 * XREFs of LdrpDrainWorkQueue @ 0x18000D60C
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     LdrpFindLoadedDll @ 0x180012320 (LdrpFindLoadedDll.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F88 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002EF60 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 *     LdrEnumerateLoadedModules @ 0x18007A550 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1E30 (LdrInitShimEngineDynamic.c)
 *     RtlCloneUserProcess @ 0x1800D3DC0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D4310 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18000E34C (LdrpUpdateStatistics.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
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
