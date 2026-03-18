/*
 * XREFs of MiReleasePteCopyList @ 0x140107034
 * Callers:
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiAddPagesToEnclave @ 0x14065E1EC (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140661E34 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406646F8 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140664D84 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140327870, *(_QWORD *)(a1 + 16), v1);
  return result;
}
