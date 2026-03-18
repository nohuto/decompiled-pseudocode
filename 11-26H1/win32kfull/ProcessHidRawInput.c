/*
 * XREFs of ProcessHidRawInput @ 0x14001F510
 * Callers:
 *     <none>
 * Callees:
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14001EA8C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     xxxProcessHidInput @ 0x14001EB20 (xxxProcessHidInput.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1, void *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  __int64 *v13; // [rsp+58h] [rbp+20h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck(v11);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, "RawHidInput", 0LL);
  xxxProcessHidInput(a1, a2, a3);
  v7 = v13;
  if ( v13 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      v10 = *CurrentThreadWin32Thread;
    else
      v10 = 0LL;
    *(_QWORD *)(v10 + 376) = v7[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(&v13, v9);
  }
  if ( v11[0] )
    --*(_DWORD *)(v12 + 28);
}
