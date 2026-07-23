/*
 * XREFs of NtFreezeRegistry @ 0x14012F37C
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmFreezeRegistry(TimeOutInSeconds);
  return -1073741727;
}
