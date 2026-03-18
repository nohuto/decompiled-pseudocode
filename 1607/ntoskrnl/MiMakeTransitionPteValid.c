/*
 * XREFs of MiMakeTransitionPteValid @ 0x1401F27C4
 * Callers:
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x140036D30 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
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
