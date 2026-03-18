/*
 * XREFs of NtThawRegistry @ 0x1401DFA90
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 */

__int64 NtThawRegistry()
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return 3221225569LL;
}
