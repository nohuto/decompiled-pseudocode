/*
 * XREFs of KeSelectIdealProcessor @ 0x1400937E0
 * Callers:
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140093758 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     ExpWorkerHotAddProcessor @ 0x1403B3244 (ExpWorkerHotAddProcessor.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     ExpCreateSystemThreadForNode @ 0x1404D1234 (ExpCreateSystemThreadForNode.c)
 *     ExpWorkerInitialization @ 0x14076B754 (ExpWorkerInitialization.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x140093804 (KiSelectIdealProcessor.c)
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
