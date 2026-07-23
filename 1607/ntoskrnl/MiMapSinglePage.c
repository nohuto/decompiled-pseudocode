/*
 * XREFs of MiMapSinglePage @ 0x140107F04
 * Callers:
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x14010A2F4 (MiInitializeForkMaps.c)
 *     MiFillCombinePage @ 0x1401F9994 (MiFillCombinePage.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // r14d
  __int64 v5; // rdi
  __int64 v6; // rbp
  ULONG_PTR result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidKernelPte; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx

  v3 = a3;
  v5 = a1;
  v6 = 48 * a2 - 0x58000000000LL;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v8 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v8, a2) )
      MiWritePteShadow(v9, 0LL);
    KeFlushSingleTb(v5, 0LL, 1LL);
  }
  else
  {
    result = MiReservePtes((__int64)&qword_1403278B0, 1uLL, a3);
    v8 = (_QWORD *)result;
    if ( !result )
      return result;
    v5 = (__int64)(result << 25) >> 16;
  }
  v10 = v3 < 0 ? 1 : 4;
  if ( (v3 & 0x40000000) == 0 )
    v10 = (unsigned int)v10 | 2;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, v6);
  ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, (unsigned __int64)v8);
  v13 = ValidKernelPte;
  if ( (ValidKernelPte & 0x800) != 0 )
    v13 = ValidKernelPte | 0x42;
  v14 = (v13 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ v13;
  *v8 = v14;
  if ( (unsigned int)MiPteInShadowRange(v8, v14) )
    MiWritePteShadow(v16, v15);
  return v5;
}
