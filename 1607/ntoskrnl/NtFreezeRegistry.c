/*
 * XREFs of NtFreezeRegistry @ 0x1401B2E94
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmFreezeRegistry(TimeOutInSeconds);
  return -1073741727;
}
