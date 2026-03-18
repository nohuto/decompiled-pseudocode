/*
 * XREFs of MmFreeMappingAddress @ 0x140563DF0
 * Callers:
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x14068FDFC (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x140690220 (PnprInitializeMappingReserve.c)
 * Callees:
 *     MiValidateReservedMapping @ 0x1401398E0 (MiValidateReservedMapping.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiRemovePteTracker @ 0x140226DF4 (MiRemovePteTracker.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // r15
  __int64 *v4; // rdi
  _QWORD *v5; // r12
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 *v7; // r14
  __int64 PteShadow; // rbx

  v2 = PoolTag;
  v4 = (__int64 *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = (_QWORD *)((((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL);
  BugCheckParameter4 = MiValidateReservedMapping((ULONG_PTR)BaseAddress, *(__int64 *)&PoolTag) - 2;
  v7 = &v4[BugCheckParameter4];
  while ( v4 < v7 )
  {
    PteShadow = *v4;
    if ( MiPteInShadowRange((__int64)v4) )
      PteShadow = MiReadPteShadow((__int64)v4, PteShadow);
    if ( PteShadow )
      KeBugCheckEx(0xDAu, 0x103uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
    ++v4;
  }
  if ( (dword_1403D00E0 & 1) != 0 )
    MiRemovePteTracker(0LL, (unsigned __int64)BaseAddress, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_14034FC70, v5, BugCheckParameter4 + 2);
}
