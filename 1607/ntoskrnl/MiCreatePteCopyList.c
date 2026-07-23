/*
 * XREFs of MiCreatePteCopyList @ 0x140104EF8
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiGetPteMappingPair @ 0x1401FCA20 (MiGetPteMappingPair.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140664DC0 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  bool v5; // zf

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 > a2 >> 1 )
    *(_DWORD *)(a3 + 4) = a2 & 0xFFFFFFFE;
  else
    *(_DWORD *)(a3 + 4) = 2 * a1;
  do
  {
    result = MiReservePtes((__int64)&qword_1403278B0, *(unsigned int *)(a3 + 4), a3);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v5 = *(_DWORD *)(a3 + 4) == 2;
    *(_DWORD *)(a3 + 4) -= 2;
  }
  while ( !v5 );
  return result;
}
