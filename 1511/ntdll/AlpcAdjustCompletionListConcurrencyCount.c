/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x18006BD10
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x18006BAA0 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18006BC94 (TppFastAlpcAdjustConcurrencyCount.c)
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A61D0 (NtAlpcSetInformation.c)
 */

__int64 __fastcall AlpcAdjustCompletionListConcurrencyCount(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return NtAlpcSetInformation(a1, 8LL, &v3);
}
