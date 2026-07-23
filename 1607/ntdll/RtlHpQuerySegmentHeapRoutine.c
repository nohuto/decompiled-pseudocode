/*
 * XREFs of RtlHpQuerySegmentHeapRoutine @ 0x18008A390
 * Callers:
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180096350 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlpHpConvertSegmentFlagsToFlags @ 0x1800F7494 (RtlpHpConvertSegmentFlagsToFlags.c)
 */

__int64 __fastcall RtlHpQuerySegmentHeapRoutine(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r8

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return 3221225485LL;
  *a2 = a1;
  v2 = RtlpHpConvertSegmentFlagsToFlags(*(unsigned int *)(a1 + 20), a2, a1, a2);
  *(_DWORD *)(v3 + 8) = v2;
  result = 0LL;
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v5 + 8) << 12;
  *(_QWORD *)(v3 + 24) += *(_QWORD *)(v5 + 80) << 12;
  return result;
}
