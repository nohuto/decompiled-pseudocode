/*
 * XREFs of RmpActivityHostApplyLimits @ 0x18003FA20
 * Callers:
 *     RmpEnforcementApplyLimitsProcessHost @ 0x180040168 (RmpEnforcementApplyLimitsProcessHost.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     _TlgCreateSz @ 0x1800406BC (_TlgCreateSz.c)
 */

__int64 __fastcall RmpActivityHostApplyLimits(__int64 a1, __int128 *a2)
{
  void *v3; // r12
  ULONG *ReturnLength; // r14
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  char v12; // cl
  int v13; // eax
  unsigned int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  __int64 v16; // r15
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  __int64 v19; // r14
  const struct _TlgProvider_t *v20; // rcx
  signed int LastError; // eax
  const struct _TlgProvider_t *v22; // rcx
  __int128 v23; // xmm0
  const struct _TlgProvider_t *v24; // rcx
  const GUID *v25; // r8
  const GUID *v26; // r9
  char v27; // al
  NTSTATUS InformationJobObject; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+34h] [rbp-CCh] BYREF
  __int64 JobInformation; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE ProcessHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v35[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+78h] [rbp-88h]
  _BYTE v38[16]; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE ProcessInformation[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v42; // [rsp+130h] [rbp+30h]
  ULONG *v43; // [rsp+138h] [rbp+38h]
  int v44; // [rsp+170h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B0h] [rbp+B0h] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+1C0h] [rbp+C0h] BYREF
  NTSTATUS *v50; // [rsp+1E0h] [rbp+E0h]
  __int64 v51; // [rsp+1E8h] [rbp+E8h]
  int *v52; // [rsp+1F0h] [rbp+F0h]
  __int64 v53; // [rsp+1F8h] [rbp+F8h]
  char *v54; // [rsp+200h] [rbp+100h]
  __int64 v55; // [rsp+208h] [rbp+108h]
  int *v56; // [rsp+210h] [rbp+110h]
  __int64 v57; // [rsp+218h] [rbp+118h]
  __int128 *v58; // [rsp+220h] [rbp+120h]
  __int64 v59; // [rsp+228h] [rbp+128h]
  __int64 *v60; // [rsp+230h] [rbp+130h]
  __int64 v61; // [rsp+238h] [rbp+138h]
  __int128 *v62; // [rsp+240h] [rbp+140h]
  __int64 v63; // [rsp+248h] [rbp+148h]
  __int64 v64; // [rsp+250h] [rbp+150h]
  __int64 v65; // [rsp+258h] [rbp+158h]
  HANDLE *p_ProcessHandle; // [rsp+260h] [rbp+160h]
  __int64 v67; // [rsp+268h] [rbp+168h]

  v3 = *(void **)(a1 + 712);
  ProcessHandle = *(HANDLE *)(a1 + 704);
  memset_0(v38, 0, 0x98uLL);
  LODWORD(ReturnLength) = 0;
  InformationJobObject = NtQueryInformationJobObject(
                           v3,
                           MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                           &JobInformation,
                           8u,
                           0LL);
  if ( InformationJobObject < 0 )
  {
    if ( (unsigned int)dword_180071060 <= 4 )
      goto LABEL_55;
    if ( !TlgKeywordOn(v6, 1uLL) )
      goto LABEL_52;
    v47 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    TlgCreateSz(&pDesc, "QueryJobRateControl");
    goto LABEL_50;
  }
  if ( (JobInformation & 1) != 0 )
  {
    JobInformation = 0LL;
    InformationJobObject = NtSetInformationJobObject(
                             v3,
                             MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                             &JobInformation,
                             8u);
    if ( InformationJobObject < 0 )
    {
      if ( (unsigned int)dword_180071060 <= 4 )
        goto LABEL_55;
      if ( !TlgKeywordOn(v11, 1uLL) )
        goto LABEL_52;
      v47 = 4LL;
      p_InformationJobObject = &InformationJobObject;
      TlgCreateSz(&pDesc, "DisableJobRateControl");
      goto LABEL_50;
    }
  }
  v12 = *((_BYTE *)a2 + 76);
  if ( (v12 & 2) == 0 )
  {
    v13 = 1;
    if ( (v12 & 1) != 0 )
      v13 = 5;
    LODWORD(JobInformation) = v13;
    v14 = 100 * *((_DWORD *)a2 + 18);
    if ( v14 <= 1 )
      v14 = 1;
    HIDWORD(JobInformation) = v14;
    InformationJobObject = NtSetInformationJobObject(
                             v3,
                             MaxJobObjectInfoClass|JobObjectBasicProcessIdList,
                             &JobInformation,
                             8u);
    if ( InformationJobObject < 0 )
    {
      if ( (unsigned int)dword_180071060 <= 4 )
        goto LABEL_55;
      if ( !TlgKeywordOn(v15, 1uLL) )
        goto LABEL_52;
      v47 = 4LL;
      p_InformationJobObject = &InformationJobObject;
      TlgCreateSz(&pDesc, "EnableJobRateControl");
      goto LABEL_50;
    }
  }
  ReturnLength = (ULONG *)*((_QWORD *)a2 + 6);
  v16 = -1LL;
  if ( ReturnLength )
  {
    memset_0(ProcessInformation, 0, 0x58uLL);
    v44 = 4;
    v42 = 81920LL;
    v43 = ReturnLength;
    ReturnLength = 0LL;
    InformationJobObject = NtSetInformationProcess(ProcessHandle, ProcessQuotaLimits, ProcessInformation, 0x58u);
    if ( InformationJobObject < 0 )
    {
      if ( (unsigned int)dword_180071060 <= 4 )
        goto LABEL_55;
      if ( !TlgKeywordOn(v17, 1uLL) )
        goto LABEL_52;
      v47 = 4LL;
      p_InformationJobObject = &InformationJobObject;
      TlgCreateSz(&pDesc, "SetProcessQuotaLimits");
      goto LABEL_50;
    }
  }
  InformationJobObject = NtQueryInformationJobObject(v3, JobObjectExtendedLimitInformation, v38, 0x98u, ReturnLength);
  if ( InformationJobObject < 0 )
  {
    if ( (unsigned int)dword_180071060 <= 4 )
      goto LABEL_55;
    if ( !TlgKeywordOn(v18, 1uLL) )
      goto LABEL_52;
    v47 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    TlgCreateSz(&pDesc, "QueryJobExtendedLimitInfo");
    goto LABEL_50;
  }
  v19 = *((_QWORD *)a2 + 2);
  if ( v40 != v19 )
  {
    memset_0(v38, 0, 0x98uLL);
    if ( v19 )
    {
      v39 = 512;
      v40 = v19;
    }
    else
    {
      v39 = 0;
    }
    InformationJobObject = NtSetInformationJobObject(v3, JobObjectExtendedLimitInformation, v38, 0x98u);
  }
  LODWORD(ReturnLength) = 0;
  if ( InformationJobObject < 0 )
  {
    if ( (unsigned int)dword_180071060 <= 4 )
      goto LABEL_55;
    if ( !TlgKeywordOn(v18, 1uLL) )
      goto LABEL_52;
    v47 = 4LL;
    p_InformationJobObject = &InformationJobObject;
    TlgCreateSz(&pDesc, "SetJobExtendedLimitInfo");
    goto LABEL_50;
  }
  ReturnLength = (ULONG *)*((_QWORD *)a2 + 1);
  if ( ReturnLength )
  {
    memset_0(v35, 0, 0x30uLL);
    v37 |= 0x200u;
    if ( ReturnLength != (ULONG *)-1LL )
      v16 = (__int64)ReturnLength;
    v36 = v16;
    LODWORD(ReturnLength) = 0;
    InformationJobObject = NtSetInformationJobObject(v3, MaxJobObjectInfoClass, v35, 0x30u);
    if ( InformationJobObject < 0 )
    {
      if ( (unsigned int)dword_180071060 <= 4 )
        goto LABEL_55;
      if ( !TlgKeywordOn(v20, 1uLL) )
        goto LABEL_52;
LABEL_49:
      v47 = 4LL;
      p_InformationJobObject = &InformationJobObject;
      TlgCreateSz(&pDesc, "SetCommitWarningLevel");
LABEL_50:
      TlgWrite(v8, &unk_18006268C, v9, v10, 4u, &pData);
      goto LABEL_52;
    }
  }
  if ( SetPriorityClass(ProcessHandle, *((_DWORD *)a2 + 17)) )
  {
    v23 = *a2;
    InformationJobObject = (int)ReturnLength;
    *(_OWORD *)(a1 + 624) = v23;
    *(_OWORD *)(a1 + 640) = a2[1];
    *(_OWORD *)(a1 + 656) = a2[2];
    *(_OWORD *)(a1 + 672) = a2[3];
    *(_OWORD *)(a1 + 688) = a2[4];
    goto LABEL_52;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0xC0070000;
  InformationJobObject = LastError;
  if ( (unsigned int)dword_180071060 > 4 )
  {
    if ( !TlgKeywordOn(v22, 1uLL) )
    {
LABEL_52:
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v7, 9uLL) )
      {
        v51 = 4LL;
        v50 = &InformationJobObject;
        v34 = *(_DWORD *)(a1 + 48);
        v52 = &v34;
        v27 = ~(*((_BYTE *)a2 + 76) >> 1);
        v53 = 4LL;
        v55 = 1LL;
        v30 = v27 & 1;
        v54 = &v30;
        v33 = *((_DWORD *)a2 + 18);
        v56 = &v33;
        v58 = a2 + 3;
        v60 = &v40;
        v62 = a2 + 1;
        v64 = (__int64)a2 + 8;
        LODWORD(ProcessHandle) = *((_DWORD *)a2 + 17);
        p_ProcessHandle = &ProcessHandle;
        v57 = 4LL;
        v59 = 8LL;
        v61 = 8LL;
        v63 = 8LL;
        v65 = 8LL;
        v67 = 4LL;
        TlgWrite(v24, &unk_1800627E9, v25, v26, 0xBu, &v49);
      }
      goto LABEL_55;
    }
    goto LABEL_49;
  }
LABEL_55:
  if ( InformationJobObject < (int)ReturnLength )
    NtTerminateJobObject(*(HANDLE *)(a1 + 712), 0);
  return (unsigned int)InformationJobObject;
}
