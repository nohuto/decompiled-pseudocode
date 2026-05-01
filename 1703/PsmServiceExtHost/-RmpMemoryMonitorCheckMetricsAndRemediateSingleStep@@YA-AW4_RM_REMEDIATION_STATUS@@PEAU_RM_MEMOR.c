/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012B40
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18000B500 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeDesiredRemediationAction@@YA?AW4_RM_REMEDIATION_ACTION@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAW4_RM_ACTIVITY_HOST_METRIC@@2PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180012E70 (-RmpPolicyComputeDesiredRemediationAction@@YA-AW4_RM_REMEDIATION_ACTION@@PEAU_RM_RESOURCE_USAGE_.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x1800360B0 (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180036158 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003686C (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180036A38 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800371B4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(HANDLE *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  struct _RM_PARTITION *v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  int v9; // r15d
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  UCHAR v14; // dl
  const struct _TlgProvider_t *v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  const struct _TlgProvider_t *v18; // rcx
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v31; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v33[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v34; // [rsp+100h] [rbp+0h]
  __int128 v35; // [rsp+110h] [rbp+10h]
  __int128 v36; // [rsp+120h] [rbp+20h]
  __int128 v37; // [rsp+130h] [rbp+30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  void *v39; // [rsp+150h] [rbp+50h]
  int v40; // [rsp+158h] [rbp+58h]
  int v41; // [rsp+15Ch] [rbp+5Ch]
  _OWORD *v42; // [rsp+160h] [rbp+60h]
  __int64 v43; // [rsp+168h] [rbp+68h]
  char *v44; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  int *v47; // [rsp+1B0h] [rbp+B0h]
  __int64 v48; // [rsp+1B8h] [rbp+B8h]
  int *v49; // [rsp+1C0h] [rbp+C0h]
  __int64 v50; // [rsp+1C8h] [rbp+C8h]
  _OWORD *v51; // [rsp+1D0h] [rbp+D0h]
  __int64 v52; // [rsp+1D8h] [rbp+D8h]
  char *v53; // [rsp+1E0h] [rbp+E0h]
  __int64 v54; // [rsp+1E8h] [rbp+E8h]
  char *v55; // [rsp+1F0h] [rbp+F0h]
  __int64 v56; // [rsp+1F8h] [rbp+F8h]
  __int64 *v57; // [rsp+200h] [rbp+100h]
  __int64 v58; // [rsp+208h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+220h] [rbp+120h] BYREF
  unsigned int *v60; // [rsp+240h] [rbp+140h]
  __int64 v61; // [rsp+248h] [rbp+148h]
  _OWORD *v62; // [rsp+250h] [rbp+150h]
  __int64 v63; // [rsp+258h] [rbp+158h]
  char *v64; // [rsp+260h] [rbp+160h]
  __int64 v65; // [rsp+268h] [rbp+168h]

  ResetEvent(a1[5]);
  ResetEvent(a1[6]);
  v6 = *((_QWORD *)*a1 + 3);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v33);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v6 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v6 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v33,
    v33[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v7 = (struct _RM_PARTITION *)*a1;
  v27 = *(_OWORD *)v33;
  v28[1] = v35;
  v28[0] = v34;
  v29[1] = v37;
  v29[0] = v36;
  v9 = RmpPolicyComputeDesiredRemediationAction(a2, *((_QWORD *)v7 + 3) + 456LL, &v27, &v23, v30, a3);
  if ( !v9 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( (unsigned int)dword_18004D030 > 5 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      v43 = 8LL;
      v42 = v28;
      v44 = (char *)v29 + 8;
      v45 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800438C3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004D038;
      v39 = &unk_1800438CE;
      UserData.Reserved = 2;
      v40 = 69;
      v41 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v9 != 4 && (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v22 = v9;
    v47 = &v22;
    v24 = v23;
    v49 = &v24;
    v51 = v28;
    v53 = (char *)v29 + 8;
    v55 = &v31;
    v57 = &v32;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 8LL;
    TlgWrite(v11, &unk_180043A04, v12, v13, 8u, &pData);
  }
  ResetEvent(a1[4]);
  switch ( v9 )
  {
    case 2:
      v17 = RmpMemoryMonitorEmptyWorkingSets(a1, &v27, v30, 0LL);
      goto LABEL_24;
    case 3:
      v16 = RmpMemoryMonitorEmptyWorkingSets(a1, &v27, v30, 1LL);
      if ( v16 != 2 )
        goto LABEL_25;
      v32 = *(_QWORD *)(a2 + 112);
      v17 = RmpMemoryMonitorEmptySystemStore(a1, &v27, v30);
LABEL_24:
      v16 = v17;
      goto LABEL_25;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      v16 = 3;
      goto LABEL_25;
  }
  v15 = (const struct _TlgProvider_t *)(unsigned int)(v9 - 5);
  if ( v9 == 5 )
  {
    v17 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v27, v30);
    goto LABEL_24;
  }
  if ( v9 != 7 )
  {
    v16 = 2;
LABEL_25:
    *((_DWORD *)a1 + 23) &= ~2u;
    goto LABEL_26;
  }
  v16 = RmpMemoryMonitorRevokeAnyHost(a1, &v27, v30, a2);
  if ( v16 != 2 )
    goto LABEL_25;
LABEL_26:
  if ( TraceLoggingProviderEnabled(v15, v14, 0LL) )
  {
    if ( v9 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v27);
      if ( (unsigned int)dword_18004D030 > 4 )
      {
        if ( TlgKeywordOn(v18, 9uLL) )
        {
          v25 = v16;
          v60 = &v25;
          v62 = v28;
          v64 = (char *)v29 + 8;
          v61 = 4LL;
          v63 = 8LL;
          v65 = 8LL;
          TlgWrite(v19, &unk_18004404A, v20, v21, 5u, &v59);
        }
      }
    }
  }
  return v16;
}
