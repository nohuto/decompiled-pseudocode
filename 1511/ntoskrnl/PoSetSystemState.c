/*
 * XREFs of PoSetSystemState @ 0x1401ECA80
 * Callers:
 *     PoRegisterSystemState @ 0x1401EC9AC (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1400F1DD8 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
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
