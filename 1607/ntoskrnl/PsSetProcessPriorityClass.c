/*
 * XREFs of PsSetProcessPriorityClass @ 0x14020F030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessPriorityClass(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 1119) = a2;
}
