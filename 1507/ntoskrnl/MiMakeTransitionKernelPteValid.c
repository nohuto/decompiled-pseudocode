/*
 * XREFs of MiMakeTransitionKernelPteValid @ 0x140225C7C
 * Callers:
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiMakeTransitionKernelPteValid(__int64 *a1, __int64 a2)
{
  __int64 PteShadow; // r8
  __int64 *v3; // r9
  unsigned __int64 v4; // r9
  __int64 v5; // rdx

  PteShadow = *a1;
  v3 = a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a1, *a1);
  MiReverseSwizzleInvalidPte(PteShadow, a2, PteShadow, v3);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v4) )
    v5 |= 0x100uLL;
  return v5 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
}
