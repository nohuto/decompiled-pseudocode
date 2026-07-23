/*
 * XREFs of MiReleasePteCopyList @ 0x140104DB4
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140664E68 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_1403278B0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
