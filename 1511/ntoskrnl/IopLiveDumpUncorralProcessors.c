/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x1403AF83C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1403AE820 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1403AEB54 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403AEDC4 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     IopLiveDumpUnLockPages @ 0x1401BD4C4 (IopLiveDumpUnLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403AEFB8 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpUncorralProcessors(__int64 a1, char a2)
{
  IopLiveDumpInitiateCorralStateChange(a1, 5);
  IopLiveDumpInitiateCorralStateChange(a1, 6);
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange(a1, -1);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(a1 + 96));
  if ( a2 == 1 )
    __writecr8(*(unsigned __int8 *)(a1 + 88));
  IopLiveDumpUnLockPages();
  *(_DWORD *)(a1 + 8) &= ~1u;
  return IopLiveDumpTraceSystemQuiesceEnd();
}
