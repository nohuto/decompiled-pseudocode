/*
 * XREFs of MiDbgReleaseAddress @ 0x1401DDCD4
 * Callers:
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x1401DFF14 (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x1401DFF40 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rsi
  __int64 LeafVa; // rax
  unsigned int v8; // edx

  v3 = *a2;
  if ( *a2 )
  {
    v6 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    _InterlockedIncrement(&dword_1402FEE14);
    *v6 = v3;
    if ( (unsigned int)MiPteInShadowRange(v6) )
      MiWritePteShadow(v6, v3);
    _InterlockedDecrement(&dword_1402FEE14);
    LeafVa = MiGetLeafVa(a1);
    v8 = MiRealVaToFlushType(LeafVa);
    if ( (a3 & 4) != 0 )
      KeFlushSingleCurrentTb(a1, v8);
    else
      KeFlushSingleTb(a1, v8, 2u);
  }
}
