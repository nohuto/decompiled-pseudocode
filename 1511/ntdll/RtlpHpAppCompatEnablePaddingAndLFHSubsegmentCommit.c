/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800EE770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
}
