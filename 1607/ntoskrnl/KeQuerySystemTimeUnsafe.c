/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1400F2020
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
