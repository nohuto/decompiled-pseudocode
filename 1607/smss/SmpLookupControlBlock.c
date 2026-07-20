/*
 * XREFs of SmpLookupControlBlock @ 0x1400044DC
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003F40 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x140004E90 (SmpStopCsr.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x140004520 (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}
