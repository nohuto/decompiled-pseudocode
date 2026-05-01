/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180029C70
 * Callers:
 *     <none>
 * Callees:
 *     RmpPolicyGetCurrentUsageLimits @ 0x180006F48 (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x18000A190 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     RmpPolicyComputeUsageLimits @ 0x18000A5B0 (RmpPolicyComputeUsageLimits.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800417F8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180041B8C (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x180041BAC (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(char *Parameter)
{
  char *v1; // r13
  struct _RM_SERVICE_GLOBALS *v2; // rsi
  char *v3; // r15
  int v4; // r12d
  DWORD v5; // ebx
  unsigned int v6; // r8d
  int v7; // eax
  void **v8; // r9
  void *v9; // rcx
  __int64 v10; // rdx
  DWORD v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  int v14; // edx
  int i; // eax
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  DWORD v20; // edi
  unsigned int *v21; // rbx
  int v22; // eax
  unsigned __int64 v23; // rsi
  int v24; // eax
  HANDLE ProcessHeap; // rax
  ULONG v26; // edi
  HANDLE v27; // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rcx
  __int64 j; // rax
  unsigned __int64 v31; // rax
  ULONG v32; // edi
  HANDLE v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rbx
  __int64 v37; // rdi
  int v39; // eax
  struct _TP_WORK *v40; // rcx
  _QWORD *v41; // rdi
  DWORD TickCount; // eax
  const struct _TlgProvider_t *v43; // rcx
  _QWORD *v44; // rbx
  DWORD v45; // r14d
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // r9
  const GUID *v49; // r8
  const GUID *v50; // r9
  const struct _TlgProvider_t *v51; // rcx
  const GUID *v52; // r8
  const GUID *v53; // r9
  const struct _TlgProvider_t *v54; // rcx
  int v55; // ebx
  const struct _TlgProvider_t *v56; // rcx
  const GUID *v57; // r8
  const GUID *v58; // r9
  const GUID *v59; // r8
  const GUID *v60; // r9
  const struct _TlgProvider_t *v61; // rcx
  const GUID *v62; // r8
  const GUID *v63; // r9
  __int16 v65; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v67; // [rsp+38h] [rbp-C8h] BYREF
  int v68; // [rsp+3Ch] [rbp-C4h] BYREF
  int v69; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_SERVICE_GLOBALS *v70; // [rsp+48h] [rbp-B8h]
  int v71; // [rsp+50h] [rbp-B0h] BYREF
  int v72; // [rsp+54h] [rbp-ACh] BYREF
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  int v74; // [rsp+5Ch] [rbp-A4h] BYREF
  int v75; // [rsp+60h] [rbp-A0h] BYREF
  int v76; // [rsp+64h] [rbp-9Ch] BYREF
  int v77; // [rsp+68h] [rbp-98h] BYREF
  int v78; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v79; // [rsp+70h] [rbp-90h]
  int v80; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v81; // [rsp+80h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  __int64 v83; // [rsp+98h] [rbp-68h] BYREF
  char *v84; // [rsp+A0h] [rbp-60h]
  EVENT_DESCRIPTOR v85; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v87; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v88[40]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v89; // [rsp+F8h] [rbp-8h]
  __int128 v90; // [rsp+100h] [rbp+0h] BYREF
  __int128 v91; // [rsp+110h] [rbp+10h]
  __m128i v92; // [rsp+120h] [rbp+20h]
  _OWORD v93[2]; // [rsp+130h] [rbp+30h] BYREF
  __m128i v94; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v95[22]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v96[88]; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int64 v97; // [rsp+268h] [rbp+168h]
  char v98[8]; // [rsp+290h] [rbp+190h] BYREF
  unsigned int v99; // [rsp+298h] [rbp+198h]
  unsigned int v100; // [rsp+29Ch] [rbp+19Ch]
  char SystemInformation[12]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v102; // [rsp+2DCh] [rbp+1DCh]
  char v103[48]; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v104; // [rsp+340h] [rbp+240h]
  unsigned int v105; // [rsp+344h] [rbp+244h]
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+470h] [rbp+370h] BYREF
  void *v107; // [rsp+480h] [rbp+380h]
  int v108; // [rsp+488h] [rbp+388h]
  int v109; // [rsp+48Ch] [rbp+38Ch]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+490h] [rbp+390h] BYREF
  void *v111; // [rsp+4A0h] [rbp+3A0h]
  int v112; // [rsp+4A8h] [rbp+3A8h]
  int v113; // [rsp+4ACh] [rbp+3ACh]
  int *v114; // [rsp+4B0h] [rbp+3B0h]
  __int64 v115; // [rsp+4B8h] [rbp+3B8h]
  int *v116; // [rsp+4C0h] [rbp+3C0h]
  __int64 v117; // [rsp+4C8h] [rbp+3C8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+4D0h] [rbp+3D0h] BYREF
  void *v119; // [rsp+4E0h] [rbp+3E0h]
  int v120; // [rsp+4E8h] [rbp+3E8h]
  int v121; // [rsp+4ECh] [rbp+3ECh]
  __int16 *v122; // [rsp+4F0h] [rbp+3F0h]
  __int64 v123; // [rsp+4F8h] [rbp+3F8h]
  _DWORD *v124; // [rsp+500h] [rbp+400h]
  int v125; // [rsp+508h] [rbp+408h]
  int v126; // [rsp+50Ch] [rbp+40Ch]
  int *v127; // [rsp+510h] [rbp+410h]
  __int64 v128; // [rsp+518h] [rbp+418h]
  _DWORD v129[8]; // [rsp+520h] [rbp+420h] BYREF
  EVENT_DATA_DESCRIPTOR v130; // [rsp+540h] [rbp+440h] BYREF
  __int64 *v131; // [rsp+560h] [rbp+460h]
  __int64 v132; // [rsp+568h] [rbp+468h]
  int *v133; // [rsp+570h] [rbp+470h]
  __int64 v134; // [rsp+578h] [rbp+478h]
  int *v135; // [rsp+580h] [rbp+480h]
  __int64 v136; // [rsp+588h] [rbp+488h]
  int *v137; // [rsp+590h] [rbp+490h]
  __int64 v138; // [rsp+598h] [rbp+498h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+5A0h] [rbp+4A0h] BYREF
  int *v140; // [rsp+5C0h] [rbp+4C0h]
  __int64 v141; // [rsp+5C8h] [rbp+4C8h]
  int *v142; // [rsp+5D0h] [rbp+4D0h]
  __int64 v143; // [rsp+5D8h] [rbp+4D8h]
  int *v144; // [rsp+5E0h] [rbp+4E0h]
  __int64 v145; // [rsp+5E8h] [rbp+4E8h]
  EVENT_DATA_DESCRIPTOR v146; // [rsp+5F0h] [rbp+4F0h] BYREF
  int *v147; // [rsp+610h] [rbp+510h]
  __int64 v148; // [rsp+618h] [rbp+518h]
  __int8 *v149; // [rsp+620h] [rbp+520h]
  __int64 v150; // [rsp+628h] [rbp+528h]
  HANDLE Handles[6]; // [rsp+630h] [rbp+530h] BYREF
  EVENT_DATA_DESCRIPTOR v152; // [rsp+660h] [rbp+560h] BYREF
  EVENT_DATA_DESCRIPTOR v153; // [rsp+680h] [rbp+580h] BYREF

  v1 = Parameter + 208;
  v70 = (struct _RM_SERVICE_GLOBALS *)Parameter;
  v84 = Parameter + 208;
  v2 = (struct _RM_SERVICE_GLOBALS *)Parameter;
  v3 = Parameter + 1600;
  memset_0(v96, 0, 0x78uLL);
  RmpPolicyGetCurrentUsageLimits((__int64)v1, (__int64)(v1 + 56), (__int64)v96, 0LL);
  v4 = v68;
  while ( 1 )
  {
    v5 = 0;
    if ( WaitForSingleObjectEx(*(HANDLE *)v3, 0, 0) )
      *((_DWORD *)v3 + 24) &= ~1u;
    v6 = 0;
    v7 = 1;
    v8 = (void **)v3;
    do
    {
      if ( (v7 & 7) != 0 && (v6 || (v3[96] & 1) == 0) )
      {
        v9 = *v8;
        v10 = v5++;
        v129[v10] = v6;
        Handles[v10] = v9;
      }
      ++v6;
      v7 = __ROL4__(v7, 1);
      ++v8;
    }
    while ( v6 < 6 );
    if ( (unsigned int)dword_180071060 > 5 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v65 = v5;
      v122 = &v65;
      v125 = 4 * (unsigned __int16)v5;
      v127 = &v74;
      v123 = 2LL;
      v124 = v129;
      v126 = 0;
      v74 = -1;
      v128 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 261;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18006343B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v119 = &unk_180063446;
      UserData.Reserved = 2;
      v120 = 51;
      v121 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    v12 = WaitForMultipleObjectsEx(v5, Handles, 0, 0xFFFFFFFF, 0);
    if ( v12 >= 0x40 )
    {
      if ( v12 == 258 )
      {
        v14 = 258;
      }
      else
      {
        v4 = v129[0];
        v14 = 0;
      }
    }
    else
    {
      v14 = 0;
      v4 = v129[v12];
      if ( !v4 )
        *((_DWORD *)v3 + 24) |= 1u;
    }
    if ( (unsigned int)dword_180071060 > 5 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v75 = v14;
      v114 = &v75;
      v116 = &v77;
      v115 = 4LL;
      v77 = v4;
      v117 = 4LL;
      *(_DWORD *)&v85.Level = 517;
      v110.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&v85.Id = ((unsigned int)&unk_180063808 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v85.Keyword = 1LL;
      v110.Size = *(unsigned __int16 *)off_180071068;
      v111 = &unk_180063813;
      v110.Reserved = 2;
      v112 = 57;
      v113 = 1;
      EventWriteTransfer(RegHandle, &v85, 0LL, 0LL, 4u, &v110);
    }
    if ( v4 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64)v3, (__int64)v1, (__int64)v96, &v67);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64)v3, (__int64)v1, (__int64)v96, &v67) )
    {
      if ( i == 3 )
        break;
      v17 = 0;
      if ( i == 2 )
        goto LABEL_28;
    }
    v17 = i;
LABEL_28:
    if ( v67 )
    {
      if ( v67 == 1 )
      {
        v18 = 1;
      }
      else
      {
        v18 = 0;
        if ( v67 - 2 <= 1 )
          v18 = 2;
      }
    }
    else
    {
      v18 = 0;
    }
    if ( v18 != *((_DWORD *)v3 + 25) )
    {
      v69 = v18;
      v80 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_LEVEL, 0LL, &v69, 4LL, 0LL);
      if ( (unsigned int)dword_180071060 > 5 && TlgKeywordOn(v13, 1uLL) )
      {
        v141 = 4LL;
        v140 = &v80;
        v71 = *((_DWORD *)v3 + 25);
        v142 = &v71;
        v78 = v69;
        v144 = &v78;
        v143 = 4LL;
        v145 = 4LL;
        TlgWrite(v13, &unk_18006384D, v49, v50, 5u, &pData);
      }
      *((_DWORD *)v3 + 25) = v18;
    }
    if ( v17 == 4 )
      break;
    if ( v4 != 1 && v17 == 3 && (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v13, 1uLL) )
      TlgWrite(v51, &unk_18006389A, v52, v53, 2u, &v152);
    if ( *((_DWORD *)v1 + 22) && RmpMemoryMonitorCheckPeriod(*((_DWORD *)v3 + 20), *((_DWORD *)v3 + 21)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(v2, (struct _RM_RESOURCE_USAGE_LIMITS *)v96);
      *((_DWORD *)v3 + 21) = GetTickCount();
    }
    if ( *((_DWORD *)v1 + 23) )
    {
      v19 = *((_DWORD *)v3 + 23);
      v20 = *((_DWORD *)v3 + 22);
      if ( GetTickCount() - v19 >= v20 )
      {
        v21 = 0LL;
        v22 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
        if ( v22 < 0 )
        {
          v32 = RtlNtStatusToDosError(v22);
          v31 = v79;
        }
        else
        {
          v23 = (unsigned __int64)v102 << 12;
          v24 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, 0LL, 0, &ReturnLength);
          if ( v24 >= 0 )
          {
LABEL_43:
            if ( ReturnLength )
            {
              v29 = v21;
              v23 += (unsigned __int64)v21[9] << 12;
              for ( j = *v21; (_DWORD)j; j = *v29 )
              {
                v29 = (unsigned int *)((char *)v29 + j);
                v23 += (unsigned __int64)v29[9] << 12;
              }
            }
            v31 = v23;
            v32 = 0;
            v79 = v23;
          }
          else
          {
            while ( v24 == -1073741820 )
            {
              if ( v21 )
              {
                ProcessHeap = GetProcessHeap();
                HeapFree(ProcessHeap, 0, v21);
              }
              v26 = ReturnLength;
              v27 = GetProcessHeap();
              v28 = (unsigned int *)HeapAlloc(v27, 0, v26);
              v21 = v28;
              if ( !v28 )
              {
                v2 = v70;
                v32 = 8;
                goto LABEL_104;
              }
              v24 = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)144, v28, v26, &ReturnLength);
              if ( v24 >= 0 )
                goto LABEL_43;
            }
            v32 = RtlNtStatusToDosError(v24);
            v31 = v79;
          }
          if ( v21 )
          {
            v33 = GetProcessHeap();
            HeapFree(v33, 0, v21);
            v31 = v79;
          }
          v2 = v70;
        }
        if ( v32 )
        {
LABEL_104:
          v34 = v81;
        }
        else
        {
          v34 = v31;
          v81 = v31;
        }
        NtQuerySystemInformation(SystemBasicInformation, v98, 0x40u, 0LL);
        NtQuerySystemInformation(SystemPerformanceInformation, v103, 0x158u, 0LL);
        NtQuerySystemInformation(SystemMemoryListInformation, v95, 0xB0u, 0LL);
        v35 = v99 * (unsigned __int64)v105;
        *(_QWORD *)&v90 = v35;
        *((_QWORD *)&v91 + 1) = v99 * (unsigned __int64)v100;
        v92.m128i_i64[0] = v99
                         * (v95[0] + v95[1] + v95[12] + v95[11] + v95[10] + v95[9] + v95[8] + v95[7] + v95[5] + v95[6]);
        v92.m128i_i64[1] = *((_QWORD *)&v91 + 1) - v92.m128i_i64[0];
        *((_QWORD *)&v90 + 1) = v99 * (v105 - (unsigned __int64)v104);
        *(_QWORD *)&v91 = v35 - *((_QWORD *)&v90 + 1);
        if ( v32 || v35 > v34 )
        {
          v34 = v99 * (unsigned __int64)v105;
          v81 = v34;
        }
        RmpPolicyComputeUsageLimits((__int64)v1, (__int64)v2 + 264, (__int64)&v90, v34, (__int64)v96);
        v36 = v97;
        v93[0] = v90;
        v93[1] = v91;
        v94 = v92;
        if ( _mm_srli_si128(v92, 8).m128i_u64[0] > v97 )
        {
          memset_0(v88, 0, 0x30uLL);
          v89 = v36;
          v55 = RmpMemoryMonitorEmptyWorkingSets(v3, v1, v93, v88, 6);
          if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v54, 1uLL) )
          {
            v76 = v55;
            v147 = &v76;
            v149 = &v94.m128i_i8[8];
            v148 = 4LL;
            v150 = 8LL;
            TlgWrite(v56, &unk_180063AC5, v57, v58, 4u, &v146);
          }
          if ( !v55 )
            *((_DWORD *)v3 + 23) = GetTickCount();
        }
      }
    }
    v37 = *((_QWORD *)v2 + 262);
    if ( v37 )
    {
      if ( (unsigned int)dword_180071060 > 5 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
      {
        *(_DWORD *)&v87.Level = 5;
        *(_DWORD *)&v87.Id = ((unsigned int)&unk_180063B6F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v106.Ptr = (ULONGLONG)off_180071068;
        v87.Keyword = 1LL;
        v106.Size = *(unsigned __int16 *)off_180071068;
        v107 = &unk_180063B7A;
        v106.Reserved = 2;
        v108 = 36;
        v109 = 1;
        EventWriteTransfer(RegHandle, &v87, 0LL, 0LL, 2u, &v106);
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      v39 = *(_DWORD *)(v37 + 280);
      if ( (v39 & 1) == 0 )
      {
        v40 = *(struct _TP_WORK **)(v37 + 264);
        *(_DWORD *)(v37 + 280) = v39 | 1;
        SubmitThreadpoolWork(v40);
      }
      if ( dword_180071060 )
      {
        v41 = (_QWORD *)(*(_QWORD *)(v37 + 184) + 160LL);
        TickCount = GetTickCount();
        v44 = (_QWORD *)*v41;
        v45 = TickCount;
        while ( v44 != v41 )
        {
          v46 = v44[2];
          if ( (*(_BYTE *)(v46 + 1356) & 1) != 0
            && *(_DWORD *)(v46 + 1352)
            && (*(_BYTE *)(v46 + 1920) & 8) == 0
            && v45 - *(_DWORD *)(v46 + 1916) >= 0x2710 )
          {
            if ( (unsigned int)dword_180071060 > 4 )
            {
              if ( TlgKeywordOn(v43, 0x400000000009uLL) )
              {
                v83 = v46;
                v131 = &v83;
                v72 = *(_DWORD *)(v46 + 1408);
                v133 = &v72;
                v73 = *(_DWORD *)(v46 + 1428);
                v135 = &v73;
                v68 = *(_DWORD *)(v46 + 136);
                v137 = &v68;
                v132 = 8LL;
                v134 = 4LL;
                v136 = 4LL;
                v138 = 4LL;
                TlgWrite(v43, &unk_1800620A0, v59, v60, 6u, &v130);
              }
            }
            *(_BYTE *)(v46 + 1920) |= 8u;
          }
          v44 = (_QWORD *)*v44;
        }
        v1 = v84;
        v2 = v70;
      }
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
    if ( v4 == 1 || RmpMemoryMonitorCheckEvent(*((void **)v3 + 1)) )
    {
      RtlEnterCriticalSection(&RmpGlobalLock);
      v47 = *((_DWORD *)v2 + 436);
      if ( (v47 & 1) == 0 )
      {
        if ( (v47 & 2) != 0 )
          v48 = *((unsigned int *)v3 + 18);
        else
          v48 = 0xFFFFFFFFLL;
        v86 = -10000LL * *((unsigned int *)v3 + 17);
        TpSetTimer(*((_QWORD *)v3 + 7), &v86, 0LL, v48);
      }
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v13, 1uLL) )
    TlgWrite(v61, &unk_1800639BD, v62, v63, 2u, &v153);
  return 0LL;
}
