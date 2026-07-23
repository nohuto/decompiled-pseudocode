/*
 * XREFs of RtlApplyRXactNoFlush @ 0x180083720
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x180083750 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x180083794 (RXactpCommit.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = RXactpCommit();
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
