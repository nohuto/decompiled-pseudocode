/*
 * XREFs of KeSelectIdealProcessor @ 0x14007D1B0
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x14007D128 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1400CA9BC (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400F2060 (KiComputeThreadAffinity.c)
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     ExpCreateSystemThreadForNode @ 0x1403E4644 (ExpCreateSystemThreadForNode.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x14007D1D4 (KiSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  v3 = a3;
  if ( !a3 )
    v3 = (_DWORD *)(a1 + 92);
  result = KiSelectIdealProcessor(a1, (unsigned int)*v3, a2);
  *v3 = result;
  return result;
}
