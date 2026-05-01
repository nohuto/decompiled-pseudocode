/*
 * XREFs of ?RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z @ 0x180032AF0
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180033048 (_TlgCreateSz.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeProcess(struct _RM_ACTIVITY_HOST *a1, int a2, void *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  TraceLoggingHProvider v7; // rcx
  LPCGUID v8; // r8
  LPCGUID cData; // r9
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // r9
  TraceLoggingHProvider v12; // rcx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  const struct _TlgProvider_t *v15; // rcx
  __int64 v16; // r9
  TraceLoggingHProvider v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  const struct _TlgProvider_t *v20; // rcx
  __int64 v21; // r9
  TraceLoggingHProvider v22; // rcx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  const struct _TlgProvider_t *v25; // rcx
  __int64 v26; // r9
  TraceLoggingHProvider v27; // rcx
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  NTSTATUS v31; // [rsp+30h] [rbp-79h] BYREF
  char v32[4]; // [rsp+34h] [rbp-75h] BYREF
  void *JobHandle; // [rsp+38h] [rbp-71h] BYREF
  void *ProcessHandle; // [rsp+40h] [rbp-69h] BYREF
  _QWORD JobInformation[2]; // [rsp+48h] [rbp-61h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  NTSTATUS *v39; // [rsp+C0h] [rbp+17h]
  __int64 v40; // [rsp+C8h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+27h] BYREF

  ProcessHandle = 0LL;
  JobHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = (HANDLE)a2;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  RmpObjectAddRef(a1);
  v31 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v31 >= 0 )
  {
    v31 = NtCreateJobObject(&JobHandle, 0x1F003Fu, &ObjectAttributes);
    if ( v31 >= 0 )
    {
      JobInformation[0] = a1;
      JobInformation[1] = a3;
      v31 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
      if ( v31 >= 0 )
      {
        v32[0] = 1;
        v31 = NtSetInformationJobObject(JobHandle, JobObjectAssociateCompletionPortInformation|0x10, v32, 1u);
        if ( v31 >= 0 )
        {
          v31 = NtAssignProcessToJobObject(JobHandle, ProcessHandle);
          if ( v31 >= 0 )
          {
            RmpObjectAddRef(a1);
            *((_QWORD *)a1 + 92) = JobHandle;
            *((_QWORD *)a1 + 91) = ProcessHandle;
            v31 = 0;
            JobHandle = 0LL;
            ProcessHandle = 0LL;
          }
          else if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v25, 1uLL) )
          {
            v40 = v26;
            v39 = &v31;
            TlgCreateSz(&pDesc, "AssignProcessToJob");
            TlgWrite(v27, &unk_1800429DC, v28, v29, (UINT32)v29, &pData);
          }
        }
        else if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v20, 1uLL) )
        {
          v40 = v21;
          v39 = &v31;
          TlgCreateSz(&pDesc, "SetJobTimerVirtualization");
          TlgWrite(v22, &unk_1800429DC, v23, v24, (UINT32)v24, &pData);
        }
      }
      else if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v15, 1uLL) )
      {
        v40 = v16;
        v39 = &v31;
        TlgCreateSz(&pDesc, "SetJobCompletionPort");
        TlgWrite(v17, &unk_180042987, v18, v19, (UINT32)v19, &pData);
      }
    }
    else if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 1uLL) )
    {
      v40 = v11;
      v39 = &v31;
      TlgCreateSz(&pDesc, "CreateJobObject");
      TlgWrite(v12, &unk_1800429DC, v13, v14, (UINT32)v14, &pData);
    }
  }
  else if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v40 = v6;
    v39 = &v31;
    TlgCreateSz(&pDesc, "NtOpenProcess");
    TlgWrite(v7, &unk_1800429DC, v8, cData, (UINT32)cData, &pData);
  }
  RmpObjectRelease(a1);
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
  return (unsigned int)v31;
}
