/*
 * XREFs of HvViewMapPinFile @ 0x1401B65E8
 * Callers:
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
 * Callees:
 *     HvpViewMapAcquireLockExclusive @ 0x1401B6648 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401B67AC (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapReleaseLockExclusive @ 0x1401B69A0 (HvpViewMapReleaseLockExclusive.c)
 */

__int64 __fastcall HvViewMapPinFile(unsigned int *a1)
{
  unsigned int v2; // ebx

  HvpViewMapAcquireLockExclusive();
  v2 = HvpViewMapPinForFileOffset(a1, 0LL, *a1);
  HvpViewMapReleaseLockExclusive(a1);
  return v2;
}
