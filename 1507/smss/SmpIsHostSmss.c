/*
 * XREFs of SmpIsHostSmss @ 0x140004D48
 * Callers:
 *     wmain @ 0x140004718 (wmain.c)
 *     SmpGetFirstSessionId @ 0x140004D28 (SmpGetFirstSessionId.c)
 * Callees:
 *     <none>
 */

bool SmpIsHostSmss()
{
  int v0; // eax
  int JobInformation; // [rsp+40h] [rbp+8h] BYREF

  JobInformation = 0;
  v0 = NtQueryInformationJobObject(0LL, JobObjectAssociateCompletionPortInformation|0x20, &JobInformation, 4u, 0LL);
  if ( v0 >= 0 )
    return JobInformation == 0;
  if ( v0 == -1073741790 || v0 == -1073740535 )
    return 1;
  NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v0);
  return 0;
}
