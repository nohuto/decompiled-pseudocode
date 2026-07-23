/*
 * XREFs of RtlReleasePrivilege @ 0x1404C801C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14015A390 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x14015AA10 (ZwAdjustPrivilegesToken.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall RtlReleasePrivilege(PVOID ReturnedState)
{
  void *v2; // rcx
  char *v3; // rcx

  if ( (*((_DWORD *)ReturnedState + 8) & 3) != 1 )
    ZwAdjustPrivilegesToken(*(HANDLE *)ReturnedState, 0, *((PTOKEN_PRIVILEGES *)ReturnedState + 2), 0, 0LL, 0LL);
  if ( (*((_DWORD *)ReturnedState + 8) & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)ReturnedState + 8, 8u);
    v2 = (void *)*((_QWORD *)ReturnedState + 1);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (char *)*((_QWORD *)ReturnedState + 2);
  if ( v3 != (char *)ReturnedState + 36 )
    ExFreePoolWithTag(v3, 0);
  ZwClose(*(HANDLE *)ReturnedState);
  ExFreePoolWithTag(ReturnedState, 0);
}
