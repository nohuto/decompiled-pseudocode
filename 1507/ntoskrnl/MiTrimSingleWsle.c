/*
 * XREFs of MiTrimSingleWsle @ 0x140122378
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 * Callees:
 *     MiRemoveSingleWsle @ 0x1401224EC (MiRemoveSingleWsle.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiTrimSingleWsle(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r9
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 *v9; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a2 * *(unsigned int *)(v2 + 64) + *(_QWORD *)(v2 + 496));
  if ( (v5 & 0x800000000000LL) != 0 )
    v6 = v5 | 0xFFFF000000000000uLL;
  else
    v6 = v5 & 0xFFFFFFFFFFFFLL;
  v7 = 0x90482413000LL;
  v8 = 2040LL;
  v9 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v9;
  if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v9, *v9);
  v14 = PteShadow;
  if ( (unsigned __int64)&v14 + v7 <= v8 )
    PteShadow = MiReadPteShadow(&v14, PteShadow);
  v11 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 >= 0 )
    MiDemoteCombinedPte(v9, v12 | 0x8000000000000000uLL);
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0
    || (*(_BYTE *)(a1 + 216) & 7) != 0 && *(_WORD *)(v11 + 32) > 1u
    || (unsigned int)MiRemoveSingleWsle(a1, a2) != 1 )
  {
    return 0LL;
  }
  result = 1LL;
  *(_QWORD *)(v2 + 24) = a2 + 1;
  return result;
}
