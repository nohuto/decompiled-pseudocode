/*
 * XREFs of MiUnlockProbePacketWorkingSet @ 0x1401207B0
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x140120768 (MiProbeAndLockComplete.c)
 *     MmStoreProbeAndLockPages @ 0x140145CAC (MmStoreProbeAndLockPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockProbePacketWorkingSet(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx
  unsigned __int8 v3; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = a1;
  v2 = *(volatile signed __int32 **)(a1 + 88);
  if ( v2 != MmBadPointer )
  {
    if ( *(_BYTE *)(result + 60) == 1 )
    {
      return MiUnlockWorkingSetExclusive((__int64)v2, *(_BYTE *)(result + 80));
    }
    else
    {
      v3 = *(_BYTE *)(result + 80);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
      }
      else
      {
        _InterlockedAnd(v2, 0xBFFFFFFF);
        _InterlockedDecrement(v2);
      }
      result = v3;
      __writecr8(v3);
    }
  }
  return result;
}
