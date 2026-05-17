/*
 * XREFs of AlpcUnregisterCompletionList @ 0x18008A2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcUnregisterCompletionList(__int64 a1)
{
  return NtAlpcSetInformation(a1, 7LL, 0LL);
}
