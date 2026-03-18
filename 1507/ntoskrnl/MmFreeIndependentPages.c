/*
 * XREFs of MmFreeIndependentPages @ 0x14055E3E4
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x14026219C (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140670600 (HvlDeleteProcessor.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x1406A5A44 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

signed __int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // r12
  BOOL v5; // r13d
  unsigned __int64 PteShadow; // rbx
  BOOL v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+10h]
  _QWORD *v18; // [rsp+90h] [rbp+18h]

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v17 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v12 = v17;
  v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v15 = v17;
  v18 = v3;
  v4 = &v3[v17];
  v5 = MiPteInShadowRange((__int64)&v16);
  do
  {
    PteShadow = *v3;
    v7 = MiPteInShadowRange((__int64)v3);
    if ( v7 )
      PteShadow = MiReadPteShadow((__int64)v3, PteShadow);
    v16 = PteShadow;
    if ( v5 )
      PteShadow = MiReadPteShadow((__int64)&v16, PteShadow);
    v8 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL;
    *v3 = 0LL;
    v10 = 48 * v9 - 0x58000000000LL;
    if ( v7 )
      MiWritePteShadow((__int64)v3, 0LL);
    if ( (unsigned int)MiLockAndDecrementShareCount(v8, 1) == 3 )
      v13 = ++v2;
    MiLockAndDecrementShareCount(v10, 0);
    ++v3;
  }
  while ( v3 < v4 );
  MiReleasePtes((__int64)&qword_14034FC70, v18, v17);
  return MiReturnNonPagedPoolCharges(&v12);
}
