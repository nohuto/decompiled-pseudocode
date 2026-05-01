/*
 * XREFs of RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     MemUtilQueryMaxCommit @ 0x180008AC0 (MemUtilQueryMaxCommit.c)
 *     RmpPolicyComputeUsageLimits @ 0x180008C00 (RmpPolicyComputeUsageLimits.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003270C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800327B0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVI.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180032EA8 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033800 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_S.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(HANDLE *a1, __int64 a2, unsigned int *a3)
{
  HANDLE *v3; // rdi
  int v6; // eax
  unsigned __int64 v7; // rsi
  int v8; // r14d
  __int64 v9; // rbx
  unsigned __int64 v10; // r10
  int v11; // r13d
  unsigned int v12; // ecx
  __int64 v13; // rsi
  int *v14; // rdx
  unsigned int v15; // r11d
  __int64 *v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rcx
  int v21; // ebx
  const struct _TlgProvider_t *v22; // rcx
  const GUID *v23; // r8
  const GUID *v24; // r9
  UCHAR v25; // dl
  const struct _TlgProvider_t *v26; // rcx
  unsigned int v27; // ebx
  unsigned int v28; // eax
  const struct _TlgProvider_t *v29; // rcx
  const struct _TlgProvider_t *v30; // rcx
  const GUID *v31; // r8
  const GUID *v32; // r9
  TraceLoggingHProvider hProvider; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+80h] [rbp-80h]
  __int128 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-40h]
  __int128 v45; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int128 v48; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v49[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF
  __int64 v51; // [rsp+140h] [rbp+40h]
  __int128 v52; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v53[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v54; // [rsp+180h] [rbp+80h] BYREF
  __int64 v55; // [rsp+190h] [rbp+90h]
  _QWORD v56[22]; // [rsp+1A0h] [rbp+A0h] BYREF
  char SystemInformation[12]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v58; // [rsp+25Ch] [rbp+15Ch]
  char v59[48]; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v60; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v61; // [rsp+2C4h] [rbp+1C4h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3F0h] [rbp+2F0h] BYREF
  void *v63; // [rsp+400h] [rbp+300h]
  int v64; // [rsp+408h] [rbp+308h]
  int v65; // [rsp+40Ch] [rbp+30Ch]
  char *v66; // [rsp+410h] [rbp+310h]
  __int64 v67; // [rsp+418h] [rbp+318h]
  __int128 *v68; // [rsp+420h] [rbp+320h]
  __int64 v69; // [rsp+428h] [rbp+328h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+430h] [rbp+330h] BYREF
  TraceLoggingHProvider *p_hProvider; // [rsp+450h] [rbp+350h]
  __int64 v72; // [rsp+458h] [rbp+358h]
  __int64 *v73; // [rsp+460h] [rbp+360h]
  __int64 v74; // [rsp+468h] [rbp+368h]
  char *v75; // [rsp+470h] [rbp+370h]
  __int64 v76; // [rsp+478h] [rbp+378h]
  __int128 *v77; // [rsp+480h] [rbp+380h]
  __int64 v78; // [rsp+488h] [rbp+388h]
  char *v79; // [rsp+490h] [rbp+390h]
  __int64 v80; // [rsp+498h] [rbp+398h]
  __int128 *v81; // [rsp+4A0h] [rbp+3A0h]
  __int64 v82; // [rsp+4A8h] [rbp+3A8h]
  EVENT_DATA_DESCRIPTOR v83; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 *v84; // [rsp+4D0h] [rbp+3D0h]
  __int64 v85; // [rsp+4D8h] [rbp+3D8h]
  char *v86; // [rsp+4E0h] [rbp+3E0h]
  __int64 v87; // [rsp+4E8h] [rbp+3E8h]
  __int128 *v88; // [rsp+4F0h] [rbp+3F0h]
  __int64 v89; // [rsp+4F8h] [rbp+3F8h]

  v3 = a1 + 41;
  v34 = a2;
  ResetEvent(a1[45]);
  ResetEvent(v3[5]);
  v6 = MemUtilQueryMaxCommit(&v35);
  v7 = v35;
  v8 = v6;
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  NtQuerySystemInformation(SystemPerformanceInformation, v59, 0x158u, 0LL);
  NtQuerySystemInformation(SystemMemoryListInformation, v56, 0xB0u, 0LL);
  v9 = v61;
  memset_0(&v43, 0, 0x48uLL);
  *((_QWORD *)&v46 + 1) += v56[20] + v56[19] + v56[18] + v56[17] + v56[16] + v56[15] + v56[14] + v56[13];
  v10 = RmpPageSize * (unsigned int)v9;
  *(_QWORD *)&v43 = v10;
  *(_QWORD *)&v45 = RmpPageSize * v58;
  *((_QWORD *)&v45 + 1) = RmpPageSize * (v56[0] + v56[1] + v56[10] + v56[9] + v56[8] + v56[7] + v56[5] + v56[6]);
  *(_QWORD *)&v46 = v45 - *((_QWORD *)&v45 + 1);
  *((_QWORD *)&v43 + 1) = RmpPageSize * (v9 - v60);
  *((_QWORD *)&v44 + 1) = v10 - *((_QWORD *)&v43 + 1);
  if ( v8 || v10 > v7 )
    v7 = RmpPageSize * (unsigned int)v9;
  RmpPolicyComputeUsageLimits(a1 + 53, a1 + 61, &v43, v7, v34);
  v48 = v43;
  v11 = 0;
  v49[0] = v44;
  v49[1] = v45;
  v50 = v46;
  v51 = v47;
  memset_0(&v38, 0, 0x48uLL);
  v12 = 4;
  v13 = v34;
  v14 = (int *)a1 + 131;
  v15 = 0;
  v35 = v43;
  *(_QWORD *)&v38 = v43;
  v16 = (__int64 *)(v34 + 88);
  v36 = v45;
  *(_QWORD *)&v40 = v45;
  while ( 1 )
  {
    v17 = *(v16 - 5);
    if ( *((_QWORD *)&v44 + 1) >= v17 )
    {
      v21 = *(v14 - 5);
      if ( v15 <= v12 )
        v15 = v12;
      if ( v21 )
      {
        v19 = 1LL;
        *((_QWORD *)&v39 + 1) = *(v16 - 5);
        *((_QWORD *)&v38 + 1) = v35 - v17;
        goto LABEL_23;
      }
    }
    v18 = *v16;
    if ( (unsigned __int64)v46 >= *v16 )
    {
      v21 = *v14;
      if ( v15 <= v12 )
        v15 = v12;
      if ( v21 )
        break;
    }
    --v16;
    --v14;
    if ( !--v12 )
    {
      v19 = (unsigned int)hProvider;
      goto LABEL_8;
    }
  }
  v19 = 3LL;
  *(_QWORD *)&v41 = *v16;
  *((_QWORD *)&v40 + 1) = v36 - v18;
LABEL_23:
  v11 = v21;
  v52 = v38;
  v53[1] = v40;
  v53[0] = v39;
  v55 = v42;
  v54 = v41;
LABEL_8:
  *a3 = v15;
  if ( !v11 )
  {
    *((_DWORD *)v3 + 22) &= ~2u;
    if ( (unsigned int)dword_18004C030 > 5 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
    {
      v67 = 8LL;
      v66 = (char *)v49 + 8;
      v68 = &v50;
      v69 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800418C7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      v63 = &unk_1800418D2;
      UserData.Reserved = 2;
      v64 = 69;
      v65 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v11 != 4 && (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v19, 9uLL) )
  {
    LODWORD(hProvider) = v11;
    p_hProvider = &hProvider;
    v73 = &v36;
    v75 = (char *)v49 + 8;
    v77 = &v50;
    v79 = (char *)v53 + 8;
    v81 = &v54;
    v72 = 4LL;
    LODWORD(v36) = (_DWORD)v22;
    v74 = 4LL;
    v76 = 8LL;
    v78 = 8LL;
    v80 = 8LL;
    v82 = 8LL;
    TlgWrite(v22, &unk_180041CB2, v23, v24, 8u, &pData);
  }
  ResetEvent(v3[3]);
  switch ( v11 )
  {
    case 2:
      v28 = RmpMemoryMonitorEmptyWorkingSets(a1, &v48, &v52, 0LL);
      goto LABEL_41;
    case 3:
      v27 = RmpMemoryMonitorEmptyWorkingSets(a1, &v48, &v52, 1LL);
      if ( v27 != 2 )
        goto LABEL_42;
      *(_QWORD *)&v54 = *(_QWORD *)(v13 + 112);
      v28 = RmpMemoryMonitorEmptySystemStore(v3, &v48, &v52);
LABEL_41:
      v27 = v28;
      goto LABEL_42;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_SERVICE_GLOBALS *)a1);
      v27 = 3;
      goto LABEL_42;
  }
  v26 = (const struct _TlgProvider_t *)(unsigned int)(v11 - 5);
  if ( v11 == 5 )
  {
    v28 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v48, &v52);
    goto LABEL_41;
  }
  if ( v11 != 7 )
  {
    v27 = 2;
LABEL_42:
    *((_DWORD *)v3 + 22) &= ~2u;
    goto LABEL_43;
  }
  v27 = RmpMemoryMonitorRevokeAnyHost(a1, &v48, &v52, v13);
  if ( v27 != 2 )
    goto LABEL_42;
LABEL_43:
  if ( TraceLoggingProviderEnabled(v26, v25, 0LL) )
  {
    if ( v11 != 4 )
    {
      RmpSystemMemoryMetricsQuery(&v48);
      if ( (unsigned int)dword_18004C030 > 4 )
      {
        if ( TlgKeywordOn(v29, 9uLL) )
        {
          LODWORD(v34) = v27;
          v84 = &v34;
          v86 = (char *)v49 + 8;
          v88 = &v50;
          v85 = 4LL;
          v87 = 8LL;
          v89 = 8LL;
          TlgWrite(v30, &unk_180041EB8, v31, v32, 5u, &v83);
        }
      }
    }
  }
  return v27;
}
