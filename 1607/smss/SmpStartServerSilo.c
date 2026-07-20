/*
 * XREFs of SmpStartServerSilo @ 0x1400135F0
 * Callers:
 *     <none>
 * Callees:
 *     SmpExecuteImage @ 0x140002660 (SmpExecuteImage.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpStartServerSilo(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  NTSTATUS InformationJobObject; // ebx
  int v5; // r9d
  void *ThreadHandle; // rcx
  int v7; // eax
  void *TargetHandle; // [rsp+40h] [rbp-49h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v9; // [rsp+50h] [rbp-39h] BYREF
  _BYTE JobInformation[16]; // [rsp+C0h] [rbp+37h] BYREF

  result = NtDuplicateObject(
             *(HANDLE *)(a2 + 32),
             *(HANDLE *)(a1 + 48),
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x1F001Fu,
             0,
             0);
  if ( result >= 0 )
  {
    InformationJobObject = NtQueryInformationJobObject(
                             TargetHandle,
                             JobObjectEndOfJobTimeInformation|0x20,
                             JobInformation,
                             0xCu,
                             0LL);
    if ( InformationJobObject >= 0 )
    {
      v7 = SmpExecuteImage(&SmpHelperCmd, 0LL, 0LL, v5, 4128, (struct _RTL_USER_PROCESS_PARAMETERS *)&v9);
      ThreadHandle = TargetHandle;
      InformationJobObject = v7;
      if ( v7 >= 0 )
      {
        InformationJobObject = NtAssignProcessToJobObject(TargetHandle, v9.ProcessHandle);
        if ( InformationJobObject >= 0 && !*(_BYTE *)(a1 + 56) )
        {
          InformationJobObject = NtResumeThread(v9.ThreadHandle, 0LL);
          if ( InformationJobObject < 0 )
            NtTerminateProcess(v9.ProcessHandle, 0);
        }
        NtClose(TargetHandle);
        NtClose(v9.ProcessHandle);
        ThreadHandle = v9.ThreadHandle;
      }
    }
    else
    {
      ThreadHandle = TargetHandle;
    }
    NtClose(ThreadHandle);
    return InformationJobObject;
  }
  return result;
}
