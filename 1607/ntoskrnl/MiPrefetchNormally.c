/*
 * XREFs of MiPrefetchNormally @ 0x1400C0210
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400C0250 (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x1400C02D4 (MiCommitmentAvailable.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d

  return *(__int64 *)(a1 + 6528) >= 160
      && (unsigned __int64)MiCommitmentAvailable(a1, a2, (unsigned int)a2) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v2, v3) != 0;
}
