/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x14020EA9C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14001F3E0 (RtlpxLookupFunctionTable.c)
 *     MiSplitDriverPage @ 0x14020E560 (MiSplitDriverPage.c)
 *     RtlPcToFileName @ 0x14024A240 (RtlPcToFileName.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(&PsLoadedModuleSpinLock);
  }
  result = a1;
  __writecr8(a1);
  return result;
}
