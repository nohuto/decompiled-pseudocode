/*
 * XREFs of VerifierMmMapIoSpace @ 0x1407538C4
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpace @ 0x140114D44 (MmMapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     MmCheckMapIoSpace @ 0x14073613C (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

PVOID __fastcall VerifierMmMapIoSpace(__int64 a1, SIZE_T a2, MEMORY_CACHING_TYPE CacheType)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v7; // r8d
  PVOID v8; // rax
  PVOID v9; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 PhysicalAddress; // [rsp+40h] [rbp+8h]

  PhysicalAddress = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)a1, a2);
    a1 = PhysicalAddress;
  }
  MmCheckMapIoSpace(a1, a2);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    return 0LL;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v7 = 4;
    if ( CacheType != MmCached )
    {
      v7 = 516;
      if ( CacheType == MmWriteCombined )
        v7 = 1028;
    }
    v8 = (PVOID)MmMapIoSpaceEx(PhysicalAddress, a2, v7);
  }
  else
  {
    v8 = pXdvMmMapIoSpace((PHYSICAL_ADDRESS)PhysicalAddress, a2, CacheType);
  }
  v9 = v8;
  if ( VfPoolTraces )
    ViPoolLogStackTrace((__int64)v8, a2);
  if ( v9 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 184LL, 0xC0u, a2);
  }
  return v9;
}
