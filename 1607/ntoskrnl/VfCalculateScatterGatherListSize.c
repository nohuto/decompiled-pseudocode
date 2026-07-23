/*
 * XREFs of VfCalculateScatterGatherListSize @ 0x140706D50
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfCalculateScatterGatherListSize(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))ViGetRealDmaOperation(a1, 104LL);
  return RealDmaOperation(a1, a2, a3, a4);
}
