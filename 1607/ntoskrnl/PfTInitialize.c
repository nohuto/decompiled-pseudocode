/*
 * XREFs of PfTInitialize @ 0x140571E44
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 *     PfpParametersPropagate @ 0x140669EB0 (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x1407B3B44 (PfInitializeSuperfetch.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeInitializeGuardedMutex @ 0x14007D180 (KeInitializeGuardedMutex.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfTAccessTracingInitialize @ 0x1403C838C (PfTAccessTracingInitialize.c)
 *     PfFbBufferListInitialize @ 0x14057208C (PfFbBufferListInitialize.c)
 */

__int64 __fastcall PfTInitialize(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v5; // rcx
  struct _KEVENT *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  struct _FAST_MUTEX *v10; // rbx
  int v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-2Ch]
  int v13; // [rsp+28h] [rbp-28h]
  int v14; // [rsp+2Ch] [rbp-24h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 (__fastcall *v16)(_SLIST_ENTRY *); // [rsp+38h] [rbp-18h]
  void *v17; // [rsp+40h] [rbp-10h]

  if ( a3 )
  {
    v10 = (struct _FAST_MUTEX *)(a1 + 560);
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
    KeReleaseGuardedMutex(v10);
    memset((void *)(a1 + 784), 0, 0x28uLL);
  }
  else
  {
    memset((void *)a1, 0, 0x340uLL);
    memset(&PfKernelGlobals, 0, 0x60uLL);
    *(_QWORD *)a1 = 0LL;
  }
  PfKernelGlobals = 0x23C34600uLL / KeQueryTimeIncrement();
  memset((void *)(a1 + 24), 0, 0x28uLL);
  *(_WORD *)(a1 + 34) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_DWORD *)(a1 + 24) &= 0xFFFFFFF0;
  *(_WORD *)(a1 + 32) = 2;
  memset((void *)(a1 + 64), 0, 0x28uLL);
  *(_WORD *)(a1 + 74) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 88) = a1 + 88;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
  *(_WORD *)(a1 + 72) = 0;
  v5 = (struct _FAST_MUTEX *)(a1 + 560);
  if ( a3 )
    ExAcquireFastMutex(v5);
  else
    KeInitializeGuardedMutex(v5);
  *(_QWORD *)(a1 + 512) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 504;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  if ( a3 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  else
    PfTAccessTracingInitialize(a1, (__int64)&PfKernelGlobals, 0);
  v6 = (struct _KEVENT *)(a1 + 136);
  if ( a3 )
  {
    KeResetEvent(v6);
    KeResetEvent((PRKEVENT)(a1 + 160));
    KeResetEvent((PRKEVENT)(a1 + 112));
    KeResetEvent((PRKEVENT)(a1 + 200));
  }
  else
  {
    KeInitializeEvent(v6, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 160), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 112), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  }
  v11 = -827260927;
  v17 = PfpSectInfoHandleFullBuffer;
  v12 = 1280206416;
  v16 = PfpSectInfoHandleOutOfBuffers;
  LOBYTE(v7) = a3;
  v13 = 1;
  v14 = 64;
  v15 = 64LL;
  PfFbBufferListInitialize(a1 + 224, &v11, v7);
  InitializeSListHead((PSLIST_HEADER)(a1 + 480));
  *(_DWORD *)(a1 + 496) = -1;
  v11 = -827260926;
  v17 = PfpEventHandleFullBuffer;
  v12 = 1279616592;
  LOBYTE(v8) = a3;
  v16 = PfpEventHandleOutOfBuffers;
  v13 = 512;
  v14 = 48;
  v15 = 64LL;
  return PfFbBufferListInitialize(a1 + 352, &v11, v8);
}
