/*
 * XREFs of MmAddRangeToCrashDump @ 0x140218688
 * Callers:
 *     MmGetDumpRange @ 0x140218834 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x140262078 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1403FF4D4 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1403FF52C (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1403FF614 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1403FF6CC (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403FF7D8 (IopLiveDumpMarkRequiredDumpData.c)
 *     MmAddPrivateDataToCrashDump @ 0x14040308C (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiAddRangeToCrashDump @ 0x1402180C8 (MiAddRangeToCrashDump.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // si
  int v10; // ett
  unsigned int v11; // ebx
  _BYTE v13[64]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-58h]
  unsigned __int64 v15; // [rsp+78h] [rbp-50h]
  int v16; // [rsp+80h] [rbp-48h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v16 = 0;
  v4 = a2;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v5 = v16;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager )
      v5 = 1;
    v16 = v5;
  }
  v14 = a2;
  v6 = a2 + a3 - 1;
  v7 = (unsigned __int64 *)v13;
  v15 = v6;
  v8 = 4LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *v7 = v4;
    v7[1] = v6;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  CurrentIrql = 17;
  if ( (KiBugCheckActive & 3) == 0 && (struct _KTHREAD *)qword_14034F148 != KeGetCurrentThread() )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
    }
    else
    {
      _m_prefetchw(&dword_14034EE88);
      v10 = dword_14034EE88 & 0x7FFFFFFF;
      if ( v10 != _InterlockedCompareExchange(
                    &dword_14034EE88,
                    (dword_14034EE88 & 0x7FFFFFFF) + 1,
                    dword_14034EE88 & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
    }
  }
  v11 = MiAddRangeToCrashDump(a1, v4, v6, (__int64)v13, 3u);
  if ( CurrentIrql != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
    }
    __writecr8(CurrentIrql);
  }
  return v11;
}
