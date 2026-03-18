/*
 * XREFs of HvViewMapPinFile @ 0x1401B6704
 * Callers:
 *     HvpApplyLogEntry @ 0x140612610 (HvpApplyLogEntry.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6764 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401B68C8 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401B6ABC (HvpViewMapReleaseLockExclusive.c)
 */

__int64 __fastcall HvViewMapPinFile(unsigned int *a1)
{
  unsigned int v2; // ebx

  HvpViewMapAcquireLockExclusive();
  v2 = HvpViewMapPinForFileOffset(a1, 0LL, *a1);
  HvpViewMapReleaseLockExclusive(a1);
  return v2;
}
