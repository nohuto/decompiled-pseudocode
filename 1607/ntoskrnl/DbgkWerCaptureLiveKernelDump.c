/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x14061BBF0
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x140675220 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     WerLiveKernelCreateReport_0 @ 0x140001318 (WerLiveKernelCreateReport_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     DbgkpWerCleanupContext @ 0x14061C0D0 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x14061C368 (DbgkpWerFreePool.c)
 *     DbgkpWerProcessPolicyResult @ 0x14061C580 (DbgkpWerProcessPolicyResult.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        NTSTRSAFE_PCWSTR pszSrc,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v12; // r12d
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v15; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // rsi
  unsigned int v18; // r11d
  int Report_0; // eax
  char v20[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-24h]
  __int64 v22; // [rsp+28h] [rbp-20h]

  v20[0] = 1;
  v12 = a2;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  if ( !DbgkpWerInitialized )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called before initialization.\n");
    return 3221225635LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v15 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
      if ( v15 >= 0 )
      {
        v15 = RtlStringCchCopyW(v17, v18, pszSrc);
        if ( v15 >= 0 )
        {
          *((_QWORD *)v17 + 7) = a5;
          *((_QWORD *)v17 + 8) = a6;
          *((_QWORD *)v17 + 9) = a7;
          *((_QWORD *)v17 + 10) = a8;
          *((_DWORD *)v17 + 8) = v12;
          *((_QWORD *)v17 + 5) = a3;
          *((_QWORD *)v17 + 6) = a4;
          *((_DWORD *)v17 + 22) = a9;
          v21 = DbgkpWerDefaultPolicy;
          v22 = 0LL;
          Report_0 = WerLiveKernelCreateReport_0();
          v15 = Report_0;
          if ( Report_0 >= 0 )
          {
            v15 = DbgkpWerProcessPolicyResult(v17, v21, v22, v20);
            if ( !v20[0] )
              goto LABEL_16;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
              Report_0);
          }
        }
      }
      DbgkpWerCleanupContext(v17);
      DbgkpWerFreePool(v17);
    }
    else
    {
      v15 = -1073741670;
    }
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_16;
  }
  v15 = -1073741267;
LABEL_16:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), a2, a3, a4);
  return (unsigned int)v15;
}
