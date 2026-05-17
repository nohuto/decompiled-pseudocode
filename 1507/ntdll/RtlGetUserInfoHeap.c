/*
 * XREFs of RtlGetUserInfoHeap @ 0x180057CD0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpHpVirtGetUserInfoHeap @ 0x1800EAD04 (RtlpHpVirtGetUserInfoHeap.c)
 */

__int64 __fastcall RtlGetUserInfoHeap(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtGetUserInfoHeap(a1);
  else
    return RtlpGetUserInfoHeapInternal(a1, a2, a3, a4, a5);
}
