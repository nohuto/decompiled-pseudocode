/*
 * XREFs of MmSizeOfMdl @ 0x1400883D0
 * Callers:
 *     PopMarkHiberPhase @ 0x1403CAC58 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140696D50 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
