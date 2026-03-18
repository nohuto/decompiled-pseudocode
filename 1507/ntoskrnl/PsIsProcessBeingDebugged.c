/*
 * XREFs of PsIsProcessBeingDebugged @ 0x1406BF4F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessBeingDebugged(__int64 a1)
{
  return *(_QWORD *)(a1 + 1056) != 0LL;
}
