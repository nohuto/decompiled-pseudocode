/*
 * XREFs of RmpActivityHostApplyLimits @ 0x18002AAB0
 * Callers:
 *     RmpEnforcementApplyLimitsProcessHost @ 0x18002B048 (RmpEnforcementApplyLimitsProcessHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpCommitValueToEnforcerValue @ 0x18002A06C (RmpCommitValueToEnforcerValue.c)
 *     _TlgCreateSz @ 0x18002B6A4 (_TlgCreateSz.c)
 */

__int64 __fastcall RmpActivityHostApplyLimits(__int64 a1, __int64 a2)
{
  void *v2; // r15
  void *v4; // r12
  const struct _TlgProvider_t *v5; // rcx
  int v6; // r8d
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const struct _TlgProvider_t *v10; // rcx
  unsigned int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // r14
  const struct _TlgProvider_t *v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  const struct _TlgProvider_t *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // edx
  const struct _TlgProvider_t *v22; // rcx
  signed int LastError; // eax
  const struct _TlgProvider_t *v24; // rcx
  NTSTATUS InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  __int64 JobInformation; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v28[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+70h] [rbp-90h]
  _BYTE ProcessInformation[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+D0h] [rbp-30h]
  _BYTE v36[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = *(void **)(a1 + 736);
  v4 = *(void **)(a1 + 728);
  memset_0(v36, 0, 0x98uLL);
  InformationJobObject = NtQueryInformationJobObject(
                           v2,
                           MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                           &JobInformation,
                           8u,
                           0LL);
  v6 = InformationJobObject;
  if ( InformationJobObject >= 0 )
  {
    if ( (JobInformation & 1) != 0
      && (JobInformation = 0LL,
          InformationJobObject = NtSetInformationJobObject(
                                   v2,
                                   MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                                   &JobInformation,
                                   8u),
          v6 = InformationJobObject,
          InformationJobObject < 0) )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 1uLL) )
      {
        v41 = 4LL;
        p_InformationJobObject = &InformationJobObject;
        TlgCreateSz(&pDesc, "DisableJobRateControl");
        goto LABEL_5;
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 48) == 100 )
        goto LABEL_20;
      JobInformation = 1LL;
      if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
        LODWORD(JobInformation) = 5;
      v11 = 100 * *(_DWORD *)(a2 + 48);
      if ( v11 <= 1 )
        v11 = 1;
      HIDWORD(JobInformation) = v11;
      InformationJobObject = NtSetInformationJobObject(
                               v2,
                               MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                               &JobInformation,
                               8u);
      v6 = InformationJobObject;
      if ( InformationJobObject >= 0 )
      {
LABEL_20:
        v13 = *(_QWORD *)(a2 + 24);
        if ( v13
          && (memset_0(ProcessInformation, 0, 0x58uLL),
              v35 = 4,
              v33 = 81920LL,
              v34 = v13,
              InformationJobObject = NtSetInformationProcess(v4, ProcessQuotaLimits, ProcessInformation, 0x58u),
              v6 = InformationJobObject,
              InformationJobObject < 0) )
        {
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v14, 1uLL) )
          {
            v41 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            TlgCreateSz(&pDesc, "SetProcessQuotaLimits");
            goto LABEL_5;
          }
        }
        else
        {
          InformationJobObject = NtQueryInformationJobObject(v2, JobObjectExtendedLimitInformation, v36, 0x98u, 0LL);
          v6 = InformationJobObject;
          if ( InformationJobObject >= 0 )
          {
            v17 = RmpCommitValueToEnforcerValue(*(_QWORD *)(a2 + 16));
            if ( v38 != v17 )
            {
              memset_0(v36, 0, 0x98uLL);
              if ( v17 )
              {
                v37 = 512;
                v38 = v17;
              }
              else
              {
                v37 = 0;
              }
              v6 = NtSetInformationJobObject(v2, JobObjectExtendedLimitInformation, v36, 0x98u);
              InformationJobObject = v6;
            }
            if ( v6 >= 0 )
            {
              InformationJobObject = NtQueryInformationJobObject(v2, MaxJobObjectInfoClass, v28, 0x38u, 0LL);
              memset_0(v28, 0, 0x38uLL);
              v18 = RmpCommitValueToEnforcerValue(*(_QWORD *)(a2 + 8));
              if ( v18 )
                v30 = v18;
              else
                v30 = 0LL;
              v19 = RmpCommitValueToEnforcerValue(*(_QWORD *)a2);
              if ( v19 )
              {
                v21 = v20 | 0x8000;
                v29 = v19;
              }
              else
              {
                v21 = v20 & 0xFFFF7FFF;
                v29 = 0LL;
              }
              v31 = v21 | 0x200000;
              InformationJobObject = NtSetInformationJobObject(v2, MaxJobObjectInfoClass, v28, 0x38u);
              v6 = InformationJobObject;
              if ( InformationJobObject >= 0 )
              {
                if ( SetPriorityClass(v4, *(_DWORD *)(a2 + 44)) )
                {
                  v6 = 0;
                  InformationJobObject = 0;
                  goto LABEL_56;
                }
                LastError = GetLastError();
                v6 = LastError;
                if ( LastError > 0 )
                {
                  v6 = (unsigned __int16)LastError | 0xC0070000;
                  InformationJobObject = v6;
                }
                else
                {
                  InformationJobObject = LastError;
                }
                if ( (unsigned int)dword_18004C030 <= 4 || !TlgKeywordOn(v24, 1uLL) )
                  goto LABEL_56;
              }
              else if ( (unsigned int)dword_18004C030 <= 4 || !TlgKeywordOn(v22, 1uLL) )
              {
                goto LABEL_56;
              }
              v41 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              TlgCreateSz(&pDesc, "SetCommitWarningLevel");
              goto LABEL_5;
            }
            if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v16, 1uLL) )
            {
              v41 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              TlgCreateSz(&pDesc, "SetJobExtendedLimitInfo");
              goto LABEL_5;
            }
          }
          else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v15, 1uLL) )
          {
            v41 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            TlgCreateSz(&pDesc, "QueryJobExtendedLimitInfo");
            goto LABEL_5;
          }
        }
      }
      else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v12, 1uLL) )
      {
        v41 = 4LL;
        p_InformationJobObject = &InformationJobObject;
        TlgCreateSz(&pDesc, "EnableJobRateControl");
        goto LABEL_5;
      }
    }
  }
  else if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    v41 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    TlgCreateSz(&pDesc, "QueryJobRateControl");
LABEL_5:
    TlgWrite(v7, &unk_18003F6C8, v8, v9, 4u, &pData);
    v6 = InformationJobObject;
  }
LABEL_56:
  if ( v6 < 0 )
  {
    NtTerminateJobObject(v2, -1073740662);
    return (unsigned int)InformationJobObject;
  }
  return (unsigned int)v6;
}
