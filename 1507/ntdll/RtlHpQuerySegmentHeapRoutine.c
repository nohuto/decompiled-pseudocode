/*
 * XREFs of RtlHpQuerySegmentHeapRoutine @ 0x1800EA660
 * Callers:
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800C4270 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlpHpConvertSegmentFlagsToFlags @ 0x1800EA6DC (RtlpHpConvertSegmentFlagsToFlags.c)
 */

__int64 __fastcall RtlHpQuerySegmentHeapRoutine(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // r10
  __int64 v6; // r9

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return 3221225485LL;
  *a2 = a1;
  v4 = RtlpHpConvertSegmentFlagsToFlags(*(unsigned int *)(a1 + 20), a2, a3, a1);
  *(_DWORD *)(v5 + 8) = v4;
  result = 0LL;
  *(_DWORD *)(v5 + 12) = 0;
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(v6 + 8) << 12;
  *(_QWORD *)(v5 + 24) += *(_QWORD *)(v6 + 80) << 12;
  return result;
}
