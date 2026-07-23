/*
 * XREFs of NtThawRegistry @ 0x1401B3078
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtThawRegistry(void)
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return -1073741727;
}
