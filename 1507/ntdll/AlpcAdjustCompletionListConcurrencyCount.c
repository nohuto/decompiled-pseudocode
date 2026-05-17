/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x1800797A0
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x1800795D4 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TpCallbackIndependent @ 0x180079650 (TpCallbackIndependent.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x180094190 (NtAlpcSetInformation.c)
 */

__int64 __fastcall AlpcAdjustCompletionListConcurrencyCount(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return NtAlpcSetInformation(a1, 8LL, &v3);
}
