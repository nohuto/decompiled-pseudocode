/*
 * XREFs of PoSetSystemState @ 0x14023AD3C
 * Callers:
 *     PoRegisterSystemState @ 0x14023AC68 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x14012DEA8 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
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
    PopAcquirePolicyLock();
    v2 = 1;
  }
  PopSetSystemState(Flags, 7u);
  if ( v2 )
    PopReleasePolicyLock(v4, v3, v5);
}
