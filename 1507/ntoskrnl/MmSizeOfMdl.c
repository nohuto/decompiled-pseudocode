/*
 * XREFs of MmSizeOfMdl @ 0x1400628C0
 * Callers:
 *     PopMarkHiberPhase @ 0x1403F1E98 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
