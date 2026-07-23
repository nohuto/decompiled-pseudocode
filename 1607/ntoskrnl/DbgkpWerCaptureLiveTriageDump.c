/*
 * XREFs of DbgkpWerCaptureLiveTriageDump @ 0x14061BF68
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x14061C580 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     WerLiveKernelSubmitReport_0 @ 0x140001310 (WerLiveKernelSubmitReport_0.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     DbgkpWerInvokeCallbacks @ 0x14061C4D4 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerWriteTriageDump @ 0x14061C7B0 (DbgkpWerWriteTriageDump.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveTriageDump(__int64 a1)
{
  PVOID PoolWithTag; // rax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  DbgPrintEx(5u, 3u, "DBGK: Creating mini live dump. ComponentName %ws\n", a1);
  *(_DWORD *)(a1 + 92) = 1048572;
  memset(&ContextRecord, 0, sizeof(ContextRecord));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40000uLL, 0x57676244u);
  *(_QWORD *)(a1 + 144) = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCaptureContext(&ContextRecord);
    v4 = KeCapturePersistentThreadState(
           (__int64)&ContextRecord,
           0LL,
           *(_DWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56),
           *(_QWORD *)(a1 + 64),
           *(_QWORD *)(a1 + 144));
    if ( v4 )
    {
      *(_DWORD *)(a1 + 152) = v4;
      v5 = DbgkpWerInvokeCallbacks(a1);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = DbgkpWerWriteTriageDump(a1);
        v3 = v6;
        if ( v6 >= 0 )
        {
          v7 = WerLiveKernelSubmitReport_0();
          v3 = v7;
          if ( v7 >= 0 )
            *(_DWORD *)(a1 + 112) |= 1u;
          else
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveTriageDump: WerLiveKernelSubmitReport failed with status 0x%X\n",
              (unsigned int)v7);
        }
        else
        {
          DbgPrintEx(5u, 0, "DBGK: DbgkpWerWriteTriageDump failed, status 0x%X\n", (unsigned int)v6);
        }
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: DbgkpWerInvokeCallbacks failed, status 0x%X\n", (unsigned int)v5);
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: KeCapturePersistentThreadState failed\n");
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
