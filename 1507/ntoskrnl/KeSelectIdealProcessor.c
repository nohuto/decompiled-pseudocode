/*
 * XREFs of KeSelectIdealProcessor @ 0x14002B7F8
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x14002B770 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     ExpWorkerHotAddProcessor @ 0x1404045E4 (ExpWorkerHotAddProcessor.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     ExpCreateSystemThreadForNode @ 0x1404FA334 (ExpCreateSystemThreadForNode.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x14000DB6C (KiSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, __int64 a2, int *a3)
{
  int *v3; // rbx
  __int64 result; // rax

  v3 = a3;
  if ( !a3 )
    v3 = (int *)(a1 + 92);
  result = KiSelectIdealProcessor(a1, *v3, a2);
  *v3 = result;
  return result;
}
