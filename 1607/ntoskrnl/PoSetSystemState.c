/*
 * XREFs of PoSetSystemState @ 0x1402058C4
 * Callers:
 *     PoRegisterSystemState @ 0x1402057F0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1400B4D8C (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(Flags);
    v2 = 1;
  }
  PopSetSystemState(Flags, 7u);
  if ( v2 )
    PopReleasePolicyLock(v4, v3, v5);
}
