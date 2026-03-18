/*
 * XREFs of EtwpGetNextGuidEntry @ 0x1404CCE6C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404CCDA8 (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x1404E307C (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGroupList @ 0x1406605E4 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140660664 (EtwpGetTraceGuidList.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406A10C4 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 */

unsigned __int64 *__fastcall EtwpGetNextGuidEntry(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v3; // r14
  char v4; // r12
  unsigned __int64 *v5; // r15
  __int64 SiloDriverState; // rax
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned __int64 *v15; // r14
  unsigned __int64 *v16; // rbx
  __int64 i; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rsi
  unsigned __int64 *v20; // rsi

  v3 = a2;
  v4 = 0;
  v5 = 0LL;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v7 = SiloDriverState;
  v8 = SiloDriverState + 1424;
  if ( BugCheckParameter2 )
  {
    v9 = SiloDriverState;
    v10 = 0LL;
    v11 = *(_DWORD *)(BugCheckParameter2 + 24) ^ *(_DWORD *)(BugCheckParameter2 + 28) ^ *(_DWORD *)(BugCheckParameter2
                                                                                                  + 32) ^ *(_DWORD *)(BugCheckParameter2 + 36);
    if ( !SiloDriverState )
    {
      v10 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
      v9 = v10;
    }
    v12 = v9 + 1424;
    if ( v10 )
      PsDereferenceMonitorContextServerSilo(v10);
    v13 = v12 + 56LL * (v11 & 0x3F);
  }
  else
  {
    v13 = SiloDriverState + 1424;
  }
  PsDereferenceMonitorContextServerSilo(v7);
  v14 = v3;
  v15 = (unsigned __int64 *)(v13 + 16 * v3);
  v16 = (unsigned __int64 *)(v13 + 48);
  for ( i = 2 * (v14 - 3); ; v15 = &v16[i] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v19 = KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v19, (ULONG_PTR)v16);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    if ( BugCheckParameter2 )
      v20 = *(unsigned __int64 **)BugCheckParameter2;
    else
      v20 = (unsigned __int64 *)*v15;
    while ( v20 != v15 )
    {
      v5 = v20;
      if ( EtwpReferenceGuidEntry((ULONG_PTR)v20) )
      {
        v4 = 1;
        break;
      }
      v20 = (unsigned __int64 *)*v20;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v16);
    KeAbPostRelease((ULONG_PTR)v16);
    KeLeaveCriticalRegion();
    if ( BugCheckParameter2 )
      EtwpUnreferenceGuidEntry((__int64 *)BugCheckParameter2);
    if ( v4 )
      return v5;
    v16 += 7;
    if ( v16 - 6 == (unsigned __int64 *)(v8 + 3584) )
      break;
    BugCheckParameter2 = 0LL;
  }
  return 0LL;
}
