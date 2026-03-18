/*
 * XREFs of HvViewMapPinFile @ 0x1401AAC18
 * Callers:
 *     HvpApplyLogEntry @ 0x1405EDD44 (HvpApplyLogEntry.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401AAC78 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401AADDC (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401AAFD0 (HvpViewMapReleaseLockExclusive.c)
 */

__int64 __fastcall HvViewMapPinFile(unsigned int *a1)
{
  unsigned int v2; // ebx

  HvpViewMapAcquireLockExclusive();
  v2 = HvpViewMapPinForFileOffset(a1, 0LL, *a1);
  HvpViewMapReleaseLockExclusive(a1);
  return v2;
}
