/*
 * XREFs of MiExchangeWsle @ 0x1401329EC
 * Callers:
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 * Callees:
 *     MiReplaceWsleHash @ 0x140108E30 (MiReplaceWsleHash.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiExchangeWsle(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  ULONG_PTR v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  if ( (a2 & 0x800000000000LL) != 0 )
    v5 = a2 | 0xFFFF000000000000uLL;
  else
    v5 = a2 & 0xFFFFFFFFFFFFLL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a3 * *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 184) + 64LL)
            + *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 184) + 496LL)) = a2;
  if ( (v12 & 8) != 0 )
  {
    PteShadow = *(_QWORD *)v6;
    v8 = 2040LL;
    if ( (*(_QWORD *)v6 & 1) == 0 )
    {
      if ( (unsigned __int64)(v6 + 0x90482413000LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
      KeBugCheckEx(0x1Au, 0x61940uLL, v6 << 25 >> 16, PteShadow, 0LL);
    }
    v9 = 0x90482413000LL;
    if ( (unsigned __int64)(v6 + 0x90482413000LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
    v11 = PteShadow;
    if ( (unsigned __int64)&v11 + v9 <= v8 )
      PteShadow = MiReadPteShadow(&v11, PteShadow);
    *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = a3;
  }
  else
  {
    MiReplaceWsleHash(BugCheckParameter2, v12, a3, a4);
  }
  return MiWriteValidPteVolatile(v6, a3 | 0x80000000LL);
}
