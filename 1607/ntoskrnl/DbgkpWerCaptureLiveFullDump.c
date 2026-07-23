/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x14061BDEC
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x14061C580 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     WerLiveKernelOpenDumpFile_0 @ 0x140001328 (WerLiveKernelOpenDumpFile_0.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14061C380 (DbgkpWerInitializeDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x14061C4D4 (DbgkpWerInvokeCallbacks.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rsi
  int v6; // ebx
  int v7; // eax
  struct _WORK_QUEUE_ITEM *v8; // rcx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 1;
  *(_DWORD *)(a1 + 92) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x57676244u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)(a1 + 128) = v5;
    *(_DWORD *)v5 = 1;
    *(_DWORD *)(v5 + 4) = 48;
    if ( (*(_DWORD *)(a1 + 88) & 1) != 0 )
      *(_DWORD *)(v5 + 24) |= 4u;
    v7 = WerLiveKernelOpenDumpFile_0();
    v6 = v7;
    if ( v7 >= 0 )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_DWORD *)(a1 + 112) |= 2u;
      *(_DWORD *)(v5 + 24) |= 8u;
      v6 = DbgkpWerInitializeDeferredLiveDump(a1);
      if ( v6 >= 0 )
      {
        v6 = DbgkpWerInvokeCallbacks(a1);
        if ( v6 >= 0 )
        {
          v6 = IoCaptureLiveDump(
                 *(_DWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 40),
                 *(_QWORD *)(a1 + 48),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v5,
                 (__int64)&v10);
          if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741802 )
          {
            v8 = *(struct _WORK_QUEUE_ITEM **)(a1 + 120);
            *(_QWORD *)(a1 + 136) = v10;
            ExQueueWorkItem(v8, DelayedWorkQueue);
            v6 = 0;
            *a2 = 0;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
              (unsigned int)v6);
          }
        }
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n", (unsigned int)v7);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
