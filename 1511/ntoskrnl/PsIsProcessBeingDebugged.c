/*
 * XREFs of PsIsProcessBeingDebugged @ 0x14063EA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessBeingDebugged(__int64 a1)
{
  return *(_QWORD *)(a1 + 1056) != 0LL;
}
