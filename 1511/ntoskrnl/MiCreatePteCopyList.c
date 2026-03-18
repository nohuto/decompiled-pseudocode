/*
 * XREFs of MiCreatePteCopyList @ 0x1400BFE3C
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiGetPteMappingPair @ 0x1401E4DC8 (MiGetPteMappingPair.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MmRelocatePfnList @ 0x14062AA8C (MmRelocatePfnList.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 *     MiInitializeScrubPacket @ 0x14062CDC8 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
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
    result = MiReservePtes((__int64)&qword_1402FF7B0, *(_DWORD *)(a3 + 4), a3);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v5 = *(_DWORD *)(a3 + 4) == 2;
    *(_DWORD *)(a3 + 4) -= 2;
  }
  while ( !v5 );
  return result;
}
