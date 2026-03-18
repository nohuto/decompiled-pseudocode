/*
 * XREFs of NtThawRegistry @ 0x1401B3194
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 */

__int64 NtThawRegistry()
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return 3221225569LL;
}
