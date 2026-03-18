/*
 * XREFs of MmSizeOfMdl @ 0x140086AE0
 * Callers:
 *     PopMarkHiberPhase @ 0x1403CAC58 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x140499420 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14067F428 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140696C6C (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
