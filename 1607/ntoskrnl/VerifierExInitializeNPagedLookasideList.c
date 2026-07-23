/*
 * XREFs of VerifierExInitializeNPagedLookasideList @ 0x140717390
 * Callers:
 *     <none>
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x1406FE394 (XdvExInitializePagedLookasideListInternal.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x14071002C (VfTargetDriversIsEnabled.c)
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
