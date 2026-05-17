/*
 * XREFs of RtlHpQuerySegmentHeapRoutine @ 0x180078338
 * Callers:
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180094BA0 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlpHpConvertSegmentFlagsToFlags @ 0x1800EE78C (RtlpHpConvertSegmentFlagsToFlags.c)
 */

__int64 __fastcall RtlHpQuerySegmentHeapRoutine(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r9

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return 3221225485LL;
  *a2 = a1;
  v3 = RtlpHpConvertSegmentFlagsToFlags(*(unsigned int *)(a1 + 20), a2, a3, a1);
  *(_DWORD *)(v4 + 8) = v3;
  result = 0LL;
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v6 + 8) << 12;
  *(_QWORD *)(v4 + 24) += *(_QWORD *)(v6 + 80) << 12;
  return result;
}
