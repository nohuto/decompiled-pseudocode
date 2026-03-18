/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x14074B434
 * Callers:
 *     <none>
 * Callees:
 *     XdvExInitializeLookasideListExInternal @ 0x14025AFDC (XdvExInitializeLookasideListExInternal.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x140738750 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140745810 (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        ULONG_PTR a1,
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
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, a1, a6, 8LL);
    VfUtilSynchronizationObjectSanityChecks((char *)a1, 96LL);
  }
  v13 = pXdvExInitializeLookasideListEx(
          a1,
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
      && *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48) == ExAllocatePoolEx
      && *(void (__stdcall **)(PPRIVILEGE_SET))(a1 + 56) == ExFreePoolEx )
    {
      *(_QWORD *)(a1 + 48) = VerifierExAllocatePoolWithTag;
      *(_QWORD *)(a1 + 56) = VerifierExFreePoolEx;
    }
    ViLookasideAdd(a1);
  }
  return (unsigned int)v13;
}
