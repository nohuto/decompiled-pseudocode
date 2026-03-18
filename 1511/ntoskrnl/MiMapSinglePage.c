/*
 * XREFs of MiMapSinglePage @ 0x1400FE59C
 * Callers:
 *     MiInitializeForkMaps @ 0x1400F4304 (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 *     MiFillCombinePage @ 0x14012B61C (MiFillCombinePage.c)
 *     MmMapErrataPage @ 0x140784E48 (MmMapErrataPage.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v6; // rsi
  ULONG_PTR result; // rax
  _QWORD *v8; // rdi
  int v9; // ecx
  int ProtectionPfnCompatible; // eax
  __int64 v11; // r9
  unsigned __int64 ValidKernelPte; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx

  v3 = a3;
  v4 = 48 * a2 - 0x58000000000LL;
  v6 = a1;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v8 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v8) )
      MiWritePteShadow(v8, 0LL);
    KeFlushSingleTb(v6, 0, 1u);
  }
  else
  {
    result = MiReservePtes((__int64)&qword_1402FF7B0, 1u, a3);
    v8 = (_QWORD *)result;
    if ( !result )
      return result;
    v6 = (__int64)(result << 25) >> 16;
  }
  v9 = v3 < 0 ? 1 : 4;
  if ( (v3 & 0x40000000) == 0 )
    LOBYTE(v9) = v9 | 2;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, v4);
  ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, (unsigned __int64)v8, v11);
  v13 = ValidKernelPte;
  if ( (ValidKernelPte & 0x800) != 0 )
    v13 = ValidKernelPte | 0x42;
  v14 = (v13 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ v13;
  *v8 = v14;
  if ( (unsigned int)MiPteInShadowRange(v8) )
    MiWritePteShadow(v8, v14);
  return v6;
}
