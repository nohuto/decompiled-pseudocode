/*
 * XREFs of SessionIsInteractive @ 0x140096EAC
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140452BD8 (PopCreateUserPowerRequest.c)
 *     NtSetThreadExecutionState @ 0x1404E9D00 (NtSetThreadExecutionState.c)
 *     PopSetWin32kInputTimeout @ 0x14063C684 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall SessionIsInteractive(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( ((a1 + 1) & 0xFFFFFFFE) != 0 || !a1 && !MEMORY[0xFFFFF780000002D8] )
    return 1;
  return v1;
}
