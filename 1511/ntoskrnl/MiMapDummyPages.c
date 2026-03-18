/*
 * XREFs of MiMapDummyPages @ 0x140771604
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 ValidKernelPte; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx

  result = MiReservePtes((__int64)&qword_1402FF7B0, 2u, a3);
  v5 = result;
  if ( result )
  {
    ValidKernelPte = MiMakeValidKernelPte(qword_1402FF250, 1, result, v4);
    *(_QWORD *)v5 = ValidKernelPte;
    v7 = ValidKernelPte;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, v7);
    v8 = v5 << 25;
    v9 = v5 + 8;
    qword_1402FF258 = v8 >> 16;
    v10 = (v7 ^ (qword_1402FF238 << 12)) & 0xFFFFFFFFF000LL ^ v7;
    *(_QWORD *)v9 = v10;
    if ( MiPteInShadowRange(v9) )
      MiWritePteShadow(v9, v10);
    result = 1LL;
    qword_1402FF260 = (PVOID)(v9 << 25 >> 16);
  }
  return result;
}
