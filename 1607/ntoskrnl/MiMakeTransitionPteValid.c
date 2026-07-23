/*
 * XREFs of MiMakeTransitionPteValid @ 0x1401F25F0
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r10
  __int64 v5; // r11

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  MiReverseSwizzleInvalidPte(v1, v2, v3, v1);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v4) )
    return v5 | 0x100;
  return v5;
}
