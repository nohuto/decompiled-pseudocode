/*
 * XREFs of MI_IS_PFN_COMMIT_NOT_CHARGED @ 0x1400AA2E4
 * Callers:
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiChargeForLockedPage @ 0x1400AA160 (MiChargeForLockedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PFN_COMMIT_NOT_CHARGED(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    || v1 < 0xFFFFF68000000000uLL )
  {
    return 0LL;
  }
  else
  {
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  }
}
