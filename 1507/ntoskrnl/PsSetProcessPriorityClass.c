/*
 * XREFs of PsSetProcessPriorityClass @ 0x140243800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessPriorityClass(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 1111) = a2;
}
