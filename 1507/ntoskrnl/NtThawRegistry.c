/*
 * XREFs of NtThawRegistry @ 0x1401DFA90
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtThawRegistry(void)
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return -1073741727;
}
