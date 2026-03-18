/*
 * XREFs of MiMakeTransitionPteValid @ 0x140225E1C
 * Callers:
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeTransitionPteValid(__int64 *a1, __int64 a2)
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
    return v5 | 0x100;
  return v5;
}
