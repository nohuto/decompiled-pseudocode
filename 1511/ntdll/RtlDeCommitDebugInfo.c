/*
 * XREFs of RtlDeCommitDebugInfo @ 0x1800CCF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlDeCommitDebugInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  return RtlpDeCommitQueryDebugInfo(a1, a2, a3);
}
