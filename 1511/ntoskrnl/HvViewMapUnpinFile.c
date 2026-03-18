/*
 * XREFs of HvViewMapUnpinFile @ 0x1401AAC50
 * Callers:
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401AAC78 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401AB048 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinFile(unsigned int *a1)
{
  HvpViewMapAcquireLockExclusive();
  HvpViewMapUnpinForFileOffset(a1, 0LL, *a1);
  return HvpViewMapReleaseLockExclusive(a1);
}
