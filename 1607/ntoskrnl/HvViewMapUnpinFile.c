/*
 * XREFs of HvViewMapUnpinFile @ 0x1401B673C
 * Callers:
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6764 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6B34 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinFile(unsigned int *a1)
{
  HvpViewMapAcquireLockExclusive();
  HvpViewMapUnpinForFileOffset(a1, 0LL, *a1);
  return HvpViewMapReleaseLockExclusive(a1);
}
