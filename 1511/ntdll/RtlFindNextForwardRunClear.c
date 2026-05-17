/*
 * XREFs of RtlFindNextForwardRunClear @ 0x18004E750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClear(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlFindNextForwardRunClearCapped(a1, a2, a3, a3);
}
