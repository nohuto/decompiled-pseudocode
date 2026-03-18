/*
 * XREFs of MmSizeOfMdl @ 0x1400FE044
 * Callers:
 *     PopMarkHiberPhase @ 0x14039F3F4 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
