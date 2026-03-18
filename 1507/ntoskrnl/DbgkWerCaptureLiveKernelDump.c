/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x14066A574
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     WerLiveKernelCreateReport_0 @ 0x1400012C8 (WerLiveKernelCreateReport_0.c)
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x14066AD80 (DbgkpWerFreePool.c)
 *     DbgkpWerProcessPolicyResult @ 0x14066AF98 (DbgkpWerProcessPolicyResult.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v18; // rbx
  NTSTATUS v19; // edi
  unsigned int v20; // r11d
  int Report_0; // eax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  char v24[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+24h] [rbp-24h]
  __int64 v26; // [rsp+28h] [rbp-20h]

  v24[0] = 1;
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
  if ( _InterlockedExchange(&DbgkpBusy, 1) == 1 )
  {
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221226029LL;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB8uLL);
    v19 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
    if ( v19 >= 0 )
    {
      v19 = RtlStringCchCopyW(v18, v20, pszSrc);
      if ( v19 >= 0 )
      {
        *((_QWORD *)v18 + 7) = a5;
        *((_QWORD *)v18 + 8) = a6;
        *((_QWORD *)v18 + 9) = a7;
        *((_QWORD *)v18 + 10) = a8;
        *((_DWORD *)v18 + 8) = a2;
        *((_QWORD *)v18 + 5) = a3;
        *((_QWORD *)v18 + 6) = a4;
        *((_DWORD *)v18 + 22) = a9;
        v25 = DbgkpWerDefaultPolicy;
        v26 = 0LL;
        Report_0 = WerLiveKernelCreateReport_0();
        v19 = Report_0;
        if ( Report_0 >= 0 )
        {
          v19 = DbgkpWerProcessPolicyResult(v18, v25, v26, v24);
          if ( !v24[0] )
            goto LABEL_20;
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
    DbgkpWerCleanupContext(v18);
    DbgkpWerFreePool(v18);
  }
  else
  {
    v19 = -1073741670;
  }
  _InterlockedExchange(&DbgkpBusy, 0);
LABEL_20:
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v19;
}
