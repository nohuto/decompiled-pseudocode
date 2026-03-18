/*
 * XREFs of HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C0018200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership(__int64 a1)
{
  return HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(*(_QWORD *)(a1 + 960));
}
