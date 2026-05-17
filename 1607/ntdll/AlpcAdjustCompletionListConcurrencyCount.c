/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800653F0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D460 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x180065190 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x180065374 (TppFastAlpcAdjustConcurrencyCount.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A7530 (NtAlpcSetInformation.c)
 */

__int64 __fastcall AlpcAdjustCompletionListConcurrencyCount(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return NtAlpcSetInformation(a1, 8LL, &v3);
}
