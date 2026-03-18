/*
 * XREFs of VerifierExInitializeNPagedLookasideList @ 0x1406C89E8
 * Callers:
 *     <none>
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x1406B2618 (XdvExInitializePagedLookasideListInternal.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1406C3F5C (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall VerifierExInitializeNPagedLookasideList(
        void *a1,
        int a2,
        int a3,
        int a4,
        ULONG_PTR a5,
        unsigned int a6,
        __int16 a7)
{
  unsigned int v11; // ebx
  int IsEnabled; // ebp
  __int16 v13; // ax
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0;
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    VfCheckPoolType(a4, retaddr, a6);
    if ( a5 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, (ULONG_PTR)a1, a5, 8LL);
    VfUtilSynchronizationObjectSanityChecks(a1, 128LL);
    v13 = 0;
  }
  else
  {
    v13 = a7;
  }
  pXdvExInitializeNPagedLookasideList(
    (_DWORD)a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    v13,
    IsEnabled,
    (__int64)ExInitializeNPagedLookasideListInternal);
  if ( IsEnabled || KernelVerifier )
    v11 = 1;
  return ViLookasideTrackList(a1, v11);
}
