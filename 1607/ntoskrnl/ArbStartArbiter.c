/*
 * XREFs of ArbStartArbiter @ 0x1406E55AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x14055AE14 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1, __int64 a2)
{
  RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 40));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a1 + 280))(
           a1,
           *(unsigned int *)(a2 + 16),
           a2 + 20,
           *(_QWORD *)(a1 + 40));
}
