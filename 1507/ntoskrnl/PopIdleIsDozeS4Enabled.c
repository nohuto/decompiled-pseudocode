/*
 * XREFs of PopIdleIsDozeS4Enabled @ 0x1404E41F4
 * Callers:
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIdleIsDozeS4Enabled(_BYTE *a1)
{
  return *((_DWORD *)PopPolicy + 22) && FileObject && a1[6] && a1[22] == 2 && a1[7];
}
