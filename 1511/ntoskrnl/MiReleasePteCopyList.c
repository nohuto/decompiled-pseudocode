/*
 * XREFs of MiReleasePteCopyList @ 0x1400BFE9C
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MmRelocatePfnList @ 0x14062AA8C (MmRelocatePfnList.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x14062CE70 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_1402FF7B0, *(_QWORD **)(a1 + 16), v1);
  return result;
}
