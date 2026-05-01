/*
 * XREFs of RmpEnforcementInfoInitializeProcess @ 0x18002B260
 * Callers:
 *     ?InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A220 (-InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18002B6A4 (_TlgCreateSz.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeProcess(volatile signed __int32 *P, int a2, __int64 a3)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *cData; // r9
  const void *v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // r9
  const struct _TlgProvider_t *v13; // rcx
  __int64 v14; // r9
  const struct _TlgProvider_t *v15; // rcx
  __int64 v16; // r9
  const struct _TlgProvider_t *v17; // rcx
  __int64 v18; // r9
  NTSTATUS v20; // [rsp+30h] [rbp-79h] BYREF
  char v21[4]; // [rsp+34h] [rbp-75h] BYREF
  void *JobHandle; // [rsp+38h] [rbp-71h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD JobInformation[2]; // [rsp+48h] [rbp-61h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  NTSTATUS *v28; // [rsp+C0h] [rbp+17h]
  __int64 v29; // [rsp+C8h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+27h] BYREF

  ProcessHandle = 0LL;
  JobHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = (HANDLE)a2;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  RmpObjectAddRef((__int64)P);
  v20 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v20 >= 0 )
  {
    v20 = NtCreateJobObject(&JobHandle, 0x1F001Fu, &ObjectAttributes);
    if ( v20 >= 0 )
    {
      JobInformation[0] = P;
      JobInformation[1] = a3;
      v20 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
      if ( v20 >= 0 )
      {
        v21[0] = 1;
        v20 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation|0x10, v21, 1u);
        if ( v20 >= 0 )
        {
          v20 = NtAssignProcessToJobObject(JobHandle, ProcessHandle);
          if ( v20 >= 0 )
          {
            RmpObjectAddRef((__int64)P);
            *((_QWORD *)P + 92) = JobHandle;
            *((_QWORD *)P + 91) = ProcessHandle;
            v20 = 0;
            JobHandle = 0LL;
            ProcessHandle = 0LL;
          }
          else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v17, 1uLL) )
          {
            v29 = v18;
            v28 = &v20;
            TlgCreateSz(&pDesc, "AssignProcessToJob");
            v10 = &unk_18003F33E;
            goto LABEL_5;
          }
        }
        else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v15, 1uLL) )
        {
          v29 = v16;
          v28 = &v20;
          TlgCreateSz(&pDesc, "SetJobTimerVirtualization");
          v10 = &unk_18003F33E;
          goto LABEL_5;
        }
      }
      else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v13, 1uLL) )
      {
        v29 = v14;
        v28 = &v20;
        TlgCreateSz(&pDesc, "SetJobCompletionPort");
        v10 = &unk_18003F2E9;
        goto LABEL_5;
      }
    }
    else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v11, 1uLL) )
    {
      v29 = v12;
      v28 = &v20;
      TlgCreateSz(&pDesc, "CreateJobObject");
      v10 = &unk_18003F33E;
      goto LABEL_5;
    }
  }
  else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v29 = v6;
    v28 = &v20;
    TlgCreateSz(&pDesc, "NtOpenProcess");
    v10 = &unk_18003F33E;
LABEL_5:
    TlgWrite(v7, v10, v8, cData, (UINT32)cData, &pData);
  }
  RmpObjectRelease(P);
  if ( JobHandle )
  {
    NtTerminateJobObject(JobHandle, 0);
    CloseHandle(JobHandle);
  }
  if ( ProcessHandle )
  {
    NtTerminateProcess(ProcessHandle, 0);
    CloseHandle(ProcessHandle);
  }
  return (unsigned int)v20;
}
