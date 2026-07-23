/*
 * XREFs of RtlGetTickCount @ 0x1800DF0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 RtlGetTickCount()
{
  return (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
}
