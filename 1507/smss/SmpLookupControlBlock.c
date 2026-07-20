/*
 * XREFs of SmpLookupControlBlock @ 0x14000763C
 * Callers:
 *     SmpStopCsr @ 0x140001110 (SmpStopCsr.c)
 *     SmpHandleConnectionRequest @ 0x140006620 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x140007680 (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}
