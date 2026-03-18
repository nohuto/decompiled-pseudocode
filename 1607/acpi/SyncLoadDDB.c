/*
 * XREFs of SyncLoadDDB @ 0x1C00A69A8
 * Callers:
 *     AMLILoadDDB @ 0x1C00A68A8 (AMLILoadDDB.c)
 * Callees:
 *     GetThreadCurrentContext @ 0x1C000704C (GetThreadCurrentContext.c)
 *     RestartContext @ 0x1C001DA80 (RestartContext.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
 */

__int64 __fastcall SyncLoadDDB(PSLIST_ENTRY ListEntry)
{
  char v2; // bp
  __int64 ThreadCurrentContext; // rbx
  KIRQL v4; // r10
  unsigned int restarted; // ebx
  NTSTATUS v7; // eax
  const void *v8; // rbx
  unsigned int v9; // [rsp+30h] [rbp-38h] BYREF
  PSLIST_ENTRY ListEntrya; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_LOAD, &v12) >= 0 && v12 == 2 )
  {
    v2 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)ListEntry, -1072431098);
    PrintDebugMessage(184, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)&ListEntry[5].Next + 1) = 0LL;
    restarted = -1072431098;
    FreeContext(ListEntry);
  }
  else
  {
    byte_1C0074540 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v4);
    if ( ThreadCurrentContext )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)ListEntry, -1072431098);
      PrintDebugMessage(182, 0LL, 0LL, 0LL, 0LL);
      *((_QWORD *)&ListEntry[5].Next + 1) = 0LL;
      restarted = -1072431098;
      FreeContext(ListEntry);
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      LODWORD(ListEntry[4].Next) |= 0x200u;
      *((_QWORD *)&ListEntry[10].Next + 1) = EvalMethodComplete;
      *((_QWORD *)&ListEntry[11].Next + 1) = &v9;
      restarted = RestartContext(ListEntry, 0);
      while ( restarted == 32772 )
      {
        v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v8 = (const void *)v7;
        if ( v7 )
        {
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)ListEntry, -1072431098);
          PrintDebugMessage(183, v8, 0LL, 0LL, 0LL);
          restarted = -1072431098;
        }
        else
        {
          restarted = v9;
          if ( v9 == 32771 )
            restarted = RestartContext(ListEntrya, 0);
        }
      }
    }
    if ( v2 )
      _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  }
  return restarted;
}
