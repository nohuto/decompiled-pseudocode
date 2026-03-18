/*
 * XREFs of PopIdleCheckForUserInput @ 0x1404E420C
 * Callers:
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     PopIdleAoAcDozeToS4 @ 0x1406BCE08 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 */

char __fastcall PopIdleCheckForUserInput(__int64 a1, __int64 a2)
{
  if ( MEMORY[0xFFFFF780000002E4] == dword_14032E1B0 )
    return 0;
  dword_14032E1B0 = MEMORY[0xFFFFF780000002E4];
  PopResetIdleTime(1u, a2);
  return 1;
}
