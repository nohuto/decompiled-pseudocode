/*
 * XREFs of RmpEnforcementInfoInitializeProcess @ 0x18003AF94
 * Callers:
 *     ?InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180039AD0 (-InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18003B2E0 (_TlgCreateSz.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeProcess(volatile signed __int32 *P, int a2, __int64 a3)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *cData; // r9
  EVENT_DATA_DESCRIPTOR *pData; // rax
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // r9
  const struct _TlgProvider_t *v13; // rcx
  __int64 v14; // r9
  const struct _TlgProvider_t *v15; // rcx
  __int64 v16; // r9
  const struct _TlgProvider_t *v17; // rcx
  __int64 v18; // r9
  NTSTATUS v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[4]; // [rsp+34h] [rbp-CCh] BYREF
  void *JobHandle; // [rsp+38h] [rbp-C8h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD JobInformation[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char v27; // [rsp+A0h] [rbp-60h] BYREF
  NTSTATUS *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+D0h] [rbp-30h] BYREF
  char v31; // [rsp+E0h] [rbp-20h] BYREF
  NTSTATUS *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+110h] [rbp+10h] BYREF
  char v35; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+160h] [rbp+60h] BYREF
  NTSTATUS *v40; // [rsp+180h] [rbp+80h]
  __int64 v41; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+90h] BYREF
  char v43; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS *v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+1D0h] [rbp+D0h] BYREF

  ProcessHandle = 0LL;
  JobHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = (HANDLE)a2;
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  _InterlockedAdd(P + 4, 1u);
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
            _InterlockedAdd(P + 4, 1u);
            *((_QWORD *)P + 88) = JobHandle;
            *((_QWORD *)P + 87) = ProcessHandle;
            v20 = 0;
            JobHandle = 0LL;
            ProcessHandle = 0LL;
          }
          else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v17, 1uLL) )
          {
            v45 = v18;
            v44 = &v20;
            TlgCreateSz(&v46, "AssignProcessToJob");
            pData = (EVENT_DATA_DESCRIPTOR *)&v43;
            goto LABEL_21;
          }
        }
        else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v15, 1uLL) )
        {
          v37 = v16;
          v36 = &v20;
          TlgCreateSz(&v38, "SetJobTimerVirtualization");
          pData = (EVENT_DATA_DESCRIPTOR *)&v35;
          goto LABEL_21;
        }
      }
      else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v13, 1uLL) )
      {
        v33 = v14;
        v32 = &v20;
        TlgCreateSz(&v34, "SetJobCompletionPort");
        pData = (EVENT_DATA_DESCRIPTOR *)&v31;
        goto LABEL_21;
      }
    }
    else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v11, 1uLL) )
    {
      v29 = v12;
      v28 = &v20;
      TlgCreateSz(&v30, "CreateJobObject");
      pData = (EVENT_DATA_DESCRIPTOR *)&v27;
      goto LABEL_21;
    }
  }
  else if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v41 = v6;
    v40 = &v20;
    TlgCreateSz(&pDesc, "NtOpenProcess");
    pData = &v39;
LABEL_21:
    TlgWrite(v7, &unk_18005B042, v8, cData, (UINT32)cData, pData);
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
