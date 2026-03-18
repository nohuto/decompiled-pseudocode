/*
 * XREFs of NtThawRegistry @ 0x14012F5AC
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

__int64 NtThawRegistry()
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return 3221225569LL;
}
