/*
 * XREFs of MmGetSharedCommit @ 0x1400ABE54
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_140327958;
}
