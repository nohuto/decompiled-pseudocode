/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x1406C7FE4
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x1406B6590 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x14020BF08 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14020BF40 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x1406B73C8 (VfUtilAddressRangeFitNoLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x1406C82F0 (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR a1)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+48h] [rbp+10h] BYREF

  if ( VfIrpDatabaseInitialized
    && VfUtilAddressRangeFitNoLock(
         (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
         a1,
         a1 + 1) )
  {
    ViIrpDatabaseAcquireLockShared(&v3);
    Pointer = ViIrpDatabaseFindPointer(a1);
    ViIrpDatabaseReleaseLockShared(v3);
    if ( Pointer )
      VerifierBugCheckIfAppropriate(0xC4u, 0x105uLL, a1, 0LL, 0LL);
  }
}
