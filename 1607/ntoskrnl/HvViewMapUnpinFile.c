/*
 * XREFs of HvViewMapUnpinFile @ 0x1401B6620
 * Callers:
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6648 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6A18 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinFile(unsigned int *a1)
{
  HvpViewMapAcquireLockExclusive();
  HvpViewMapUnpinForFileOffset(a1, 0LL, *a1);
  return HvpViewMapReleaseLockExclusive(a1);
}
