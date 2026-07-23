/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140534E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return (PopFullWake & 3) == 0;
}
