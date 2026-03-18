/*
 * XREFs of MiDbgReleaseAddress @ 0x14012C7DC
 * Callers:
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleCurrentTb @ 0x14012C860 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x1401F263C (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x1401F28E4 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 LeafVa; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  char v10; // r10

  v2 = *a2;
  if ( v2 )
  {
    v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    _InterlockedIncrement(&dword_140327214);
    *v3 = v2;
    if ( (unsigned int)MiPteInShadowRange(v3, v2) )
      MiWritePteShadow(v5, v4);
    _InterlockedDecrement(&dword_140327214);
    LeafVa = MiGetLeafVa(v6);
    v8 = (unsigned int)MiRealVaToFlushType(LeafVa);
    if ( (v10 & 4) != 0 )
      KeFlushSingleCurrentTb(v9, v8);
    else
      KeFlushSingleTb(v9, v8, 2u);
  }
}
