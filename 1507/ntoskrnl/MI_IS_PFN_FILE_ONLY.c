/*
 * XREFs of MI_IS_PFN_FILE_ONLY @ 0x14005AC60
 * Callers:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiActivePageClaimCandidate @ 0x14005CD70 (MiActivePageClaimCandidate.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 *     MiIsStrongCodeImagePage @ 0x1402311FC (MiIsStrongCodeImagePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PFN_FILE_ONLY(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v1 & 0x10000000000000LL) == 0 )
      return 0LL;
  }
  else if ( (v1 & 0x10000000000000LL) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
