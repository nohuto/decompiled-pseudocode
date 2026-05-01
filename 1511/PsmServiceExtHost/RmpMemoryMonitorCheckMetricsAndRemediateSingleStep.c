/*
 * XREFs of RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180004330 (TraceLoggingProviderEnabled.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180006E30 (RmpSystemMemoryMetricsQuery.c)
 *     RmpPolicyComputeUsageLimits @ 0x18000A5B0 (RmpPolicyComputeUsageLimits.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x180041BD8 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800423AC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180042CE4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  void *v5; // rcx
  unsigned int *v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rdi
  int v12; // eax
  HANDLE ProcessHeap; // rax
  ULONG v14; // r14d
  HANDLE v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rcx
  __int64 i; // rax
  ULONG v19; // r14d
  HANDLE v20; // rax
  unsigned __int64 v21; // r11
  int v22; // edi
  unsigned int v23; // edx
  int *v24; // r8
  unsigned int v25; // r11d
  const struct _TlgProvider_t **v26; // rax
  unsigned __int64 v27; // xmm2_8
  const struct _TlgProvider_t *v28; // rcx
  unsigned int v29; // ebx
  ULONG v31; // eax
  int v32; // r13d
  const struct _TlgProvider_t *v33; // rcx
  const GUID *v34; // r8
  const GUID *v35; // r9
  UCHAR v36; // dl
  const struct _TlgProvider_t *v37; // rcx
  unsigned int v38; // eax
  const struct _TlgProvider_t *v39; // rcx
  const struct _TlgProvider_t *v40; // rcx
  const GUID *v41; // r8
  const GUID *v42; // r9
  ULONG ReturnLength; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v48; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v49; // [rsp+68h] [rbp-98h]
  __int128 v50; // [rsp+78h] [rbp-88h]
  __int128 v51; // [rsp+88h] [rbp-78h] BYREF
  __m128i v52; // [rsp+98h] [rbp-68h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v57[22]; // [rsp+F0h] [rbp-10h] BYREF
  char v58[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v59; // [rsp+1A8h] [rbp+A8h]
  unsigned int v60; // [rsp+1ACh] [rbp+ACh]
  char SystemInformation[12]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v62; // [rsp+1ECh] [rbp+ECh]
  char v63[48]; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v64; // [rsp+250h] [rbp+150h]
  unsigned int v65; // [rsp+254h] [rbp+154h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+380h] [rbp+280h] BYREF
  __int128 v67; // [rsp+390h] [rbp+290h]
  __int128 v68; // [rsp+3A0h] [rbp+2A0h]
  char *v69; // [rsp+3B0h] [rbp+2B0h]
  __int64 v70; // [rsp+3B8h] [rbp+2B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3C0h] [rbp+2C0h] BYREF
  int *v72; // [rsp+3E0h] [rbp+2E0h]
  __int64 v73; // [rsp+3E8h] [rbp+2E8h]
  int *v74; // [rsp+3F0h] [rbp+2F0h]
  __int64 v75; // [rsp+3F8h] [rbp+2F8h]
  __m128i *v76; // [rsp+400h] [rbp+300h]
  __int64 v77; // [rsp+408h] [rbp+308h]
  char *v78; // [rsp+410h] [rbp+310h]
  __int64 v79; // [rsp+418h] [rbp+318h]
  __int128 *v80; // [rsp+420h] [rbp+320h]
  __int64 v81; // [rsp+428h] [rbp+328h]
  char *v82; // [rsp+430h] [rbp+330h]
  __int64 v83; // [rsp+438h] [rbp+338h]
  EVENT_DATA_DESCRIPTOR v84; // [rsp+440h] [rbp+340h] BYREF
  __int64 *v85; // [rsp+460h] [rbp+360h]
  __int64 v86; // [rsp+468h] [rbp+368h]
  __m128i *v87; // [rsp+470h] [rbp+370h]
  __int64 v88; // [rsp+478h] [rbp+378h]
  char *v89; // [rsp+480h] [rbp+380h]
  __int64 v90; // [rsp+488h] [rbp+388h]

  *(_QWORD *)&EventDescriptor.Id = a3;
  v5 = *(void **)(a1 + 32);
  v44 = a2;
  ResetEvent(v5);
  ResetEvent(*(HANDLE *)(a1 + 40));
  v9 = 0LL;
  v10 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( v10 < 0 )
  {
    v11 = *(_QWORD *)&EventDescriptor.Id;
    v19 = RtlNtStatusToDosError(v10);
  }
  else
  {
    v11 = (unsigned __int64)v62 << 12;
    v12 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, 0LL, 0, &ReturnLength);
    if ( v12 >= 0 )
    {
LABEL_8:
      if ( ReturnLength )
      {
        v17 = v9;
        v11 += (unsigned __int64)v9[9] << 12;
        for ( i = *v9; (_DWORD)i; i = *v17 )
        {
          v17 = (unsigned int *)((char *)v17 + i);
          v11 += (unsigned __int64)v17[9] << 12;
        }
      }
      v19 = 0;
    }
    else
    {
      while ( v12 == -1073741820 )
      {
        if ( v9 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v9);
        }
        v14 = ReturnLength;
        v15 = GetProcessHeap();
        v16 = (unsigned int *)HeapAlloc(v15, 0, v14);
        v9 = v16;
        if ( !v16 )
        {
          v19 = 8;
          goto LABEL_29;
        }
        v12 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, v16, v14, &ReturnLength);
        if ( v12 >= 0 )
          goto LABEL_8;
      }
      v31 = RtlNtStatusToDosError(v12);
      v11 = *(_QWORD *)&EventDescriptor.Id;
      v19 = v31;
    }
    if ( v9 )
    {
      v20 = GetProcessHeap();
      HeapFree(v20, 0, v9);
    }
  }
  if ( v19 )
LABEL_29:
    v11 = *(_QWORD *)&EventDescriptor.Id;
  NtQuerySystemInformation(SystemBasicInformation, v58, 0x40u, 0LL);
  NtQuerySystemInformation(SystemPerformanceInformation, v63, 0x158u, 0LL);
  NtQuerySystemInformation(SystemMemoryListInformation, v57, 0xB0u, 0LL);
  v21 = v59 * (unsigned __int64)v65;
  *(_QWORD *)&v48 = v21;
  v49.m128i_i64[1] = v59 * (unsigned __int64)v60;
  *(_QWORD *)&v50 = v59 * (v57[0] + v57[1] + v57[12] + v57[11] + v57[10] + v57[9] + v57[8] + v57[7] + v57[5] + v57[6]);
  *((_QWORD *)&v50 + 1) = v49.m128i_i64[1] - v50;
  *((_QWORD *)&v48 + 1) = v59 * (v65 - (unsigned __int64)v64);
  v49.m128i_i64[0] = v21 - *((_QWORD *)&v48 + 1);
  if ( v19 || v21 > v11 )
    v11 = v59 * (unsigned __int64)v65;
  RmpPolicyComputeUsageLimits(a2, a2 + 56, &v48, v11, a3);
  v22 = 0;
  v23 = 3;
  *(_QWORD *)&UserData.Size = 0LL;
  *(_QWORD *)&v67 = 0LL;
  v68 = 0uLL;
  v24 = (int *)(a2 + 84);
  v25 = 0;
  v52 = v49;
  v26 = (const struct _TlgProvider_t **)(*(_QWORD *)&EventDescriptor.Id + 72LL);
  UserData.Ptr = v48;
  v27 = _mm_srli_si128(v49, 8).m128i_u64[0];
  v51 = v48;
  *((_QWORD *)&v67 + 1) = v27;
  v53 = v50;
  while ( 1 )
  {
    v28 = *(v26 - 4);
    if ( v49.m128i_i64[0] >= (unsigned __int64)v28 )
    {
      v32 = *(v24 - 4);
      if ( v25 <= v23 )
        v25 = v23;
      if ( v32 )
      {
        *(_QWORD *)&v67 = *(v26 - 4);
        *(_QWORD *)&UserData.Size = v48 - (_QWORD)v28;
        v29 = 2;
        goto LABEL_42;
      }
    }
    v28 = *v26;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)*v26 )
    {
      v32 = *v24;
      if ( v25 <= v23 )
        v25 = v23;
      if ( v32 )
        break;
    }
    --v26;
    --v24;
    if ( !--v23 )
    {
      v29 = 2;
      goto LABEL_21;
    }
  }
  v29 = 2;
  *((_QWORD *)&v68 + 1) = *v26;
  *(_QWORD *)&v68 = v27 - (_QWORD)v28;
LABEL_42:
  v22 = v32;
  v54 = UserData;
  v55 = v67;
  v56 = v68;
LABEL_21:
  *a4 = v25;
  if ( !v22 )
  {
    *(_DWORD *)(a1 + 96) &= ~2u;
    if ( (unsigned int)dword_180071060 > 5 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      *((_QWORD *)&v68 + 1) = 8LL;
      *(_QWORD *)&v68 = &v52;
      v69 = (char *)&v53 + 8;
      v70 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180063C20 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      UserData.Ptr = (ULONGLONG)off_180071068;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      *(_QWORD *)&v67 = &unk_180063C2B;
      UserData.Reserved = 2;
      *((_QWORD *)&v67 + 1) = 0x100000045LL;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v28, 9uLL) )
  {
    v47 = v22;
    v72 = &v47;
    v74 = &v46;
    v76 = &v52;
    v78 = (char *)&v53 + 8;
    v80 = &v55;
    v82 = (char *)&v56 + 8;
    v73 = 4LL;
    v46 = (int)v35;
    v75 = 4LL;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 8LL;
    v83 = 8LL;
    TlgWrite(v33, &unk_1800638C3, v34, v35, 8u, &pData);
  }
  ResetEvent(*(HANDLE *)(a1 + 24));
  if ( v22 == 2 )
  {
    v38 = RmpMemoryMonitorEmptyWorkingSets(a1, v44, &v51, &v54, 0);
    goto LABEL_56;
  }
  if ( v22 != 3 )
  {
    v37 = (const struct _TlgProvider_t *)(unsigned int)(v22 - 4);
    if ( v22 != 4 )
    {
      if ( v22 == 6 )
      {
        v29 = RmpMemoryMonitorRevokeAnyHost(a1, v44, &v51, &v54, *(_QWORD *)&EventDescriptor.Id);
        if ( v29 == 2 )
          goto LABEL_58;
      }
      goto LABEL_57;
    }
    v38 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, v44, &v51, &v54);
    goto LABEL_56;
  }
  v29 = RmpMemoryMonitorEmptyWorkingSets(a1, v44, &v51, &v54, 1);
  if ( v29 == 2 )
  {
    *((_QWORD *)&v56 + 1) = *(_QWORD *)(*(_QWORD *)&EventDescriptor.Id + 96LL);
    v38 = RmpMemoryMonitorEmptySystemStore(a1, &v51, &v54);
LABEL_56:
    v29 = v38;
  }
LABEL_57:
  *(_DWORD *)(a1 + 96) &= ~2u;
LABEL_58:
  if ( TraceLoggingProviderEnabled(v37, v36, 0LL) )
  {
    RmpSystemMemoryMetricsQuery((__int64 *)&v51);
    if ( (unsigned int)dword_180071060 > 4 )
    {
      if ( TlgKeywordOn(v39, 9uLL) )
      {
        LODWORD(v44) = v29;
        v85 = &v44;
        v87 = &v52;
        v89 = (char *)&v53 + 8;
        v86 = 4LL;
        v88 = 8LL;
        v90 = 8LL;
        TlgWrite(v40, &unk_18006357A, v41, v42, 5u, &v84);
      }
    }
  }
  return v29;
}
