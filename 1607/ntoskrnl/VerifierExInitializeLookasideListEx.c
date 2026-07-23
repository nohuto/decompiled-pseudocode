/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x140717250
 * Callers:
 *     <none>
 * Callees:
 *     XdvExInitializeLookasideListExInternal @ 0x140223228 (XdvExInitializeLookasideListExInternal.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x14071002C (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        ULONG_PTR a6,
        int a7,
        __int16 a8)
{
  int IsEnabled; // edi
  int v13; // esi
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    VfCheckPoolType(a4, retaddr, a7);
    if ( a6 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, (ULONG_PTR)a1, a6, 8LL);
    VfUtilSynchronizationObjectSanityChecks(a1, 96LL);
  }
  v13 = pXdvExInitializeLookasideListEx(
          (__int64)a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          IsEnabled,
          (__int64 (*)(void))ExInitializeLookasideListExInternal);
  if ( v13 >= 0 )
  {
    if ( (IsEnabled || KernelVerifier)
      && (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))a1[6] == CmpAllocatePoolWithTag
      && (void (__stdcall *)(PPRIVILEGE_SET))a1[7] == MiDeleteSubsection )
    {
      a1[6] = VerifierExAllocatePoolWithTag;
      a1[7] = VerifierExFreePoolEx;
    }
    ViLookasideAdd((int)a1);
  }
  return (unsigned int)v13;
}
