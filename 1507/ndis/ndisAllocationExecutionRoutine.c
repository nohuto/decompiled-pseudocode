/*
 * XREFs of ndisAllocationExecutionRoutine @ 0x1C0057500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocationExecutionRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(*(_QWORD *)(a4 + 136) + 16LL * *(unsigned __int16 *)(a4 + 152)) = a3;
  KeSetEvent(*(PRKEVENT *)(a4 + 144), 0, 0);
  return 3LL;
}
