/*
 * XREFs of MmUnlockLoadedModuleListExclusive @ 0x1400254F0
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x14002533C (RtlRemoveInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x1401532CC (RtlInsertInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmUnlockLoadedModuleListExclusive(unsigned __int8 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
  else
    PsLoadedModuleSpinLock = 0;
  result = a1;
  __writecr8(a1);
  return result;
}
