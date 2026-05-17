/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F7470
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 */

__int64 RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  __int64 result; // rax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
