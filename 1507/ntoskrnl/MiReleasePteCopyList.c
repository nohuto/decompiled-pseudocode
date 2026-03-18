/*
 * XREFs of MiReleasePteCopyList @ 0x140128890
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MmRelocatePfnList @ 0x1406A8654 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x1406AA918 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_14034FC70, *(_QWORD **)(a1 + 16), v1);
  return result;
}
