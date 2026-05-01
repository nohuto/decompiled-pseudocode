/*
 * XREFs of RmpEnforcementInfoInitializeProcess @ 0x180040370
 * Callers:
 *     ?InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003EEE0 (-InitializeEnforcementInfo@ResourceEnforcer@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800406BC (_TlgCreateSz.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeProcess(volatile signed __int32 *P, int a2, __int64 a3)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *cData; // r9
  EVENT_DATA_DESCRIPTOR *pData; // rax
  const void *v11; // rdx
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // r9
  const struct _TlgProvider_t *v14; // rcx
  __int64 v15; // r9
  const struct _TlgProvider_t *v16; // rcx
  __int64 v17; // r9
  const struct _TlgProvider_t *v18; // rcx
  __int64 v19; // r9
  NTSTATUS v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[4]; // [rsp+34h] [rbp-CCh] BYREF
  void *JobHandle; // [rsp+38h] [rbp-C8h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD JobInformation[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char v28; // [rsp+A0h] [rbp-60h] BYREF
  NTSTATUS *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D0h] [rbp-30h] BYREF
  char v32; // [rsp+E0h] [rbp-20h] BYREF
  NTSTATUS *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+110h] [rbp+10h] BYREF
  char v36; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v40; // [rsp+160h] [rbp+60h] BYREF
  NTSTATUS *v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+90h] BYREF
  char v44; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS *v45; // [rsp+1C0h] [rbp+C0h]
  __int64 v46; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+1D0h] [rbp+D0h] BYREF

  ProcessHandle = 0LL;
  JobHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = (HANDLE)a2;
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  _InterlockedAdd(P + 4, 1u);
  v21 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v21 >= 0 )
  {
    v21 = NtCreateJobObject(&JobHandle, 0x1F001Fu, &ObjectAttributes);
    if ( v21 >= 0 )
    {
      JobInformation[0] = P;
      JobInformation[1] = a3;
      v21 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
      if ( v21 >= 0 )
      {
        v22[0] = 1;
        v21 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation|0x10, v22, 1u);
        if ( v21 >= 0 )
        {
          v21 = NtAssignProcessToJobObject(JobHandle, ProcessHandle);
          if ( v21 >= 0 )
          {
            _InterlockedAdd(P + 4, 1u);
            *((_QWORD *)P + 89) = JobHandle;
            *((_QWORD *)P + 88) = ProcessHandle;
            v21 = 0;
            JobHandle = 0LL;
            ProcessHandle = 0LL;
          }
          else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v18, 1uLL) )
          {
            v46 = v19;
            v45 = &v21;
            TlgCreateSz(&v47, "AssignProcessToJob");
            pData = (EVENT_DATA_DESCRIPTOR *)&v44;
            v11 = &unk_1800626D6;
            goto LABEL_21;
          }
        }
        else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v16, 1uLL) )
        {
          v38 = v17;
          v37 = &v21;
          TlgCreateSz(&v39, "SetJobTimerVirtualization");
          pData = (EVENT_DATA_DESCRIPTOR *)&v36;
          v11 = &unk_1800626D6;
          goto LABEL_21;
        }
      }
      else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v14, 1uLL) )
      {
        v34 = v15;
        v33 = &v21;
        TlgCreateSz(&v35, "SetJobCompletionPort");
        pData = (EVENT_DATA_DESCRIPTOR *)&v32;
        v11 = &unk_180062B1E;
        goto LABEL_21;
      }
    }
    else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v12, 1uLL) )
    {
      v30 = v13;
      v29 = &v21;
      TlgCreateSz(&v31, "CreateJobObject");
      pData = (EVENT_DATA_DESCRIPTOR *)&v28;
      v11 = &unk_1800626D6;
      goto LABEL_21;
    }
  }
  else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v42 = v6;
    v41 = &v21;
    TlgCreateSz(&pDesc, "NtOpenProcess");
    pData = &v40;
    v11 = &unk_1800626D6;
LABEL_21:
    TlgWrite(v7, v11, v8, cData, (UINT32)cData, pData);
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
  return (unsigned int)v21;
}
