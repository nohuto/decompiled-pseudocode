/*
 * XREFs of SmpStartServerSilo @ 0x140013000
 * Callers:
 *     <none>
 * Callees:
 *     SmpExecuteImage @ 0x140003C84 (SmpExecuteImage.c)
 */

NTSTATUS __fastcall SmpStartServerSilo(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  NTSTATUS InformationJobObject; // ebx
  int v5; // r9d
  int v6; // eax
  void *ThreadHandle; // rcx
  _BYTE JobInformation[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h]
  char v10; // [rsp+58h] [rbp-21h]
  struct _RTL_USER_PROCESS_INFORMATION v11; // [rsp+60h] [rbp-19h] BYREF
  void *TargetHandle; // [rsp+E0h] [rbp+67h] BYREF

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
    InformationJobObject = NtQueryInformationJobObject(TargetHandle, (JOBOBJECTINFOCLASS)36, JobInformation, 0x20u, 0LL);
    if ( InformationJobObject < 0 || !v10 || v9 )
    {
      ThreadHandle = TargetHandle;
    }
    else
    {
      v6 = SmpExecuteImage(&SmpHelperCmd, 0LL, 0LL, v5, 0x20u, (struct _RTL_USER_PROCESS_PARAMETERS *)&v11);
      ThreadHandle = TargetHandle;
      InformationJobObject = v6;
      if ( v6 >= 0 )
      {
        InformationJobObject = NtAssignProcessToJobObject(TargetHandle, v11.ProcessHandle);
        if ( InformationJobObject >= 0 && !*(_BYTE *)(a1 + 56) )
        {
          InformationJobObject = NtResumeThread(v11.ThreadHandle, 0LL);
          if ( InformationJobObject < 0 )
            NtTerminateProcess(v11.ProcessHandle, 0);
        }
        NtClose(TargetHandle);
        NtClose(v11.ProcessHandle);
        ThreadHandle = v11.ThreadHandle;
      }
    }
    NtClose(ThreadHandle);
    return InformationJobObject;
  }
  return result;
}
