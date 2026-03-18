/*
 * XREFs of PopIdleIsDozeS4Enabled @ 0x140457388
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIdleIsDozeS4Enabled(_BYTE *a1)
{
  return (*((_DWORD *)PopPolicy + 22) || qword_1402DEAE8 > MEMORY[0xFFFFF78000000014])
      && FileObject
      && a1[6]
      && a1[22] == 2
      && a1[7];
}
