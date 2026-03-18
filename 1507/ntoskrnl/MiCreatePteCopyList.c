/*
 * XREFs of MiCreatePteCopyList @ 0x1400597DC
 * Callers:
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiGetPteMappingPair @ 0x140231378 (MiGetPteMappingPair.c)
 *     MmRelocatePfnList @ 0x1406A8654 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x1406AA87C (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // zf

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 <= a2 >> 1 )
    *(_DWORD *)(a3 + 4) = 2 * a1;
  else
    *(_DWORD *)(a3 + 4) = a2 & 0xFFFFFFFE;
  do
  {
    result = MiReservePtes(&qword_14034FC70, *(unsigned int *)(a3 + 4));
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v5 = *(_DWORD *)(a3 + 4) == 2;
    *(_DWORD *)(a3 + 4) -= 2;
  }
  while ( !v5 );
  return result;
}
