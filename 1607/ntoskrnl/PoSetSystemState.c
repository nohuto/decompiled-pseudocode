/*
 * XREFs of PoSetSystemState @ 0x1402056F0
 * Callers:
 *     PoRegisterSystemState @ 0x14020561C (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1400B2BC4 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(Flags);
    v2 = 1;
  }
  PopSetSystemState(Flags, 7u);
  if ( v2 )
    PopReleasePolicyLock();
}
