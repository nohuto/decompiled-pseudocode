/*
 * XREFs of ?RmpActivityHostApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180031DC8
 * Callers:
 *     ?RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180032758 (-RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _TlgCreateSz @ 0x180033048 (_TlgCreateSz.c)
 */

__int64 __fastcall RmpActivityHostApplyLimits(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  void *v2; // r15
  void *v4; // r12
  unsigned __int64 v5; // rcx
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // rcx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  unsigned int v12; // eax
  TraceLoggingHProvider v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // rsi
  TraceLoggingHProvider v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  TraceLoggingHProvider v20; // rcx
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  __int64 v23; // rsi
  unsigned int v24; // eax
  TraceLoggingHProvider v25; // rcx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  TraceLoggingHProvider v30; // rcx
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  signed int LastError; // eax
  int InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  __int64 JobInformation; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v37[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+70h] [rbp-90h]
  _BYTE ProcessInformation[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+D0h] [rbp-30h]
  _BYTE v45[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  int *p_InformationJobObject; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 92);
  v4 = (void *)*((_QWORD *)a1 + 91);
  memset_0(v45, 0, 0x98uLL);
  InformationJobObject = NtQueryInformationJobObject(
                           v2,
                           MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                           &JobInformation,
                           8u,
                           0LL);
  LODWORD(v5) = InformationJobObject;
  if ( InformationJobObject >= 0 )
  {
    if ( (JobInformation & 1) != 0
      && (JobInformation = 0LL,
          InformationJobObject = NtSetInformationJobObject(
                                   v2,
                                   MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                                   &JobInformation,
                                   8u),
          LODWORD(v5) = InformationJobObject,
          InformationJobObject < 0) )
    {
      if ( (unsigned int)dword_18004D030 > 4
        && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
      {
        v50 = 4LL;
        p_InformationJobObject = &InformationJobObject;
        TlgCreateSz(&pDesc, "DisableJobRateControl");
        TlgWrite(v9, &unk_18004267E, v10, v11, 4u, &pData);
        goto LABEL_5;
      }
    }
    else
    {
      if ( *((_DWORD *)a2 + 12) == 100 )
        goto LABEL_20;
      JobInformation = 1LL;
      if ( (*((_BYTE *)a2 + 52) & 1) != 0 )
        LODWORD(JobInformation) = 5;
      v12 = 100 * *((_DWORD *)a2 + 12);
      if ( v12 <= 1 )
        v12 = 1;
      HIDWORD(JobInformation) = v12;
      InformationJobObject = NtSetInformationJobObject(
                               v2,
                               MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                               &JobInformation,
                               8u);
      LODWORD(v5) = InformationJobObject;
      if ( InformationJobObject >= 0 )
      {
LABEL_20:
        v16 = *((_QWORD *)a2 + 3);
        if ( v16
          && (memset_0(ProcessInformation, 0, 0x58uLL),
              v44 = 4,
              v42 = 81920LL,
              v43 = v16,
              InformationJobObject = NtSetInformationProcess(v4, ProcessQuotaLimits, ProcessInformation, 0x58u),
              LODWORD(v5) = InformationJobObject,
              InformationJobObject < 0) )
        {
          if ( (unsigned int)dword_18004D030 > 4
            && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
          {
            v50 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            TlgCreateSz(&pDesc, "SetProcessQuotaLimits");
            TlgWrite(v17, &unk_18004267E, v18, v19, 4u, &pData);
            goto LABEL_5;
          }
        }
        else
        {
          InformationJobObject = NtQueryInformationJobObject(v2, JobObjectExtendedLimitInformation, v45, 0x98u, 0LL);
          v5 = (unsigned int)InformationJobObject;
          if ( InformationJobObject >= 0 )
          {
            v23 = *((_QWORD *)a2 + 2);
            if ( v23 == -1 )
              v23 = 0LL;
            if ( v47 != v23 )
            {
              memset_0(v45, 0, 0x98uLL);
              if ( v23 )
              {
                v46 = 512;
                v47 = v23;
              }
              else
              {
                v46 = 0;
              }
              v24 = NtSetInformationJobObject(v2, JobObjectExtendedLimitInformation, v45, 0x98u);
              v5 = v24;
              InformationJobObject = v24;
            }
            if ( (v5 & 0x80000000) == 0LL )
            {
              InformationJobObject = NtQueryInformationJobObject(v2, MaxJobObjectInfoClass, v37, 0x38u, 0LL);
              memset_0(v37, 0, 0x38uLL);
              if ( (unsigned __int64)(*((_QWORD *)a2 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
              {
                v28 = v40 & 0xFFFFFDFF;
                v39 = 0LL;
              }
              else
              {
                v28 = v40 | 0x200;
                v39 = *((_QWORD *)a2 + 1);
              }
              if ( (unsigned __int64)(*(_QWORD *)a2 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
              {
                v29 = v28 & 0xFFFF7FFF;
                v38 = 0LL;
              }
              else
              {
                v29 = v28 | 0x8000;
                v38 = *(_QWORD *)a2;
              }
              v40 = v29 | 0x200000;
              InformationJobObject = NtSetInformationJobObject(v2, MaxJobObjectInfoClass, v37, 0x38u);
              LODWORD(v5) = InformationJobObject;
              if ( InformationJobObject >= 0 )
              {
                if ( SetPriorityClass(v4, *((_DWORD *)a2 + 11)) )
                {
                  LODWORD(v5) = 0;
                  InformationJobObject = 0;
                  goto LABEL_58;
                }
                LastError = GetLastError();
                v5 = (unsigned int)LastError;
                if ( LastError > 0 )
                {
                  v5 = (unsigned __int16)LastError | 0xC0070000;
                  InformationJobObject = (unsigned __int16)LastError | 0xC0070000;
                }
                else
                {
                  InformationJobObject = LastError;
                }
                if ( (unsigned int)dword_18004D030 <= 4 || !TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
                  goto LABEL_58;
              }
              else if ( (unsigned int)dword_18004D030 <= 4
                     || !TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
              {
                goto LABEL_58;
              }
              v50 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              TlgCreateSz(&pDesc, "SetCommitWarningLevel");
              TlgWrite(v30, &unk_18004267E, v31, v32, 4u, &pData);
              goto LABEL_5;
            }
            if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
            {
              v50 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              TlgCreateSz(&pDesc, "SetJobExtendedLimitInfo");
              TlgWrite(v25, &unk_18004267E, v26, v27, 4u, &pData);
              goto LABEL_5;
            }
          }
          else if ( (unsigned int)dword_18004D030 > 4
                 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
          {
            v50 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            TlgCreateSz(&pDesc, "QueryJobExtendedLimitInfo");
            TlgWrite(v20, &unk_18004267E, v21, v22, 4u, &pData);
            goto LABEL_5;
          }
        }
      }
      else if ( (unsigned int)dword_18004D030 > 4
             && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
      {
        v50 = 4LL;
        p_InformationJobObject = &InformationJobObject;
        TlgCreateSz(&pDesc, "EnableJobRateControl");
        TlgWrite(v13, &unk_18004267E, v14, v15, 4u, &pData);
        goto LABEL_5;
      }
    }
  }
  else if ( (unsigned int)dword_18004D030 > 4
         && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
  {
    v50 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    TlgCreateSz(&pDesc, "QueryJobRateControl");
    TlgWrite(v6, &unk_18004267E, v7, v8, 4u, &pData);
LABEL_5:
    LODWORD(v5) = InformationJobObject;
  }
LABEL_58:
  if ( (v5 & 0x80000000) != 0LL )
  {
    NtTerminateJobObject(v2, -1073740662);
    LODWORD(v5) = InformationJobObject;
  }
  return (unsigned int)v5;
}
