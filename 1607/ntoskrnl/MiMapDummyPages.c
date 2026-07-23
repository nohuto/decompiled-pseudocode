/*
 * XREFs of MiMapDummyPages @ 0x14078EE84
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiComputeHash64 @ 0x1400B0EC4 (MiComputeHash64.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapDummyPages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r11
  unsigned __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r11

  result = MiReservePtes((__int64)&qword_1403278B0, 2uLL, a3);
  v4 = result;
  if ( result )
  {
    *(_QWORD *)result = MiMakeValidKernelPte(qword_1403276E0, 1, result);
    if ( MiPteInShadowRange(v4) )
      MiWritePteShadow(v5, v6);
    qword_1403276E8 = (__int64)(v4 << 25) >> 16;
    qword_1403276F8 = MiComputeHash64((__int64)(v4 << 25) >> 16);
    v7 = v4 + 8;
    *(_QWORD *)v7 = (v8 ^ (qword_1403276C8 << 12)) & 0xFFFFFFFFF000LL ^ v8;
    if ( MiPteInShadowRange(v7) )
      MiWritePteShadow(v9, v10);
    qword_1403276F0 = (__int64)(v7 << 25) >> 16;
    qword_140327700 = MiComputeHash64(qword_1403276F0);
    return 1LL;
  }
  return result;
}
