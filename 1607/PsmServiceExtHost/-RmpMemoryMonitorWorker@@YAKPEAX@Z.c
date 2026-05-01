/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x18000705C (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     MemUtilQueryMaxCommit @ 0x180008AC0 (MemUtilQueryMaxCommit.c)
 *     RmpPolicyComputeUsageLimits @ 0x180008C00 (RmpPolicyComputeUsageLimits.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x1800326C0 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x1800326E0 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(HANDLE *Parameter)
{
  char *v1; // rsi
  char *v3; // r15
  int v4; // r12d
  int v5; // edi
  int i; // eax
  const struct _TlgProvider_t *v7; // rcx
  int v8; // ebx
  int v9; // r13d
  int v10; // ebx
  DWORD v11; // edi
  ULONG v12; // edi
  __int64 v13; // rbx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _DWORD *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  DWORD TickCount; // eax
  const struct _TlgProvider_t *v22; // rcx
  _QWORD *v23; // rbx
  DWORD v24; // r13d
  __int64 v25; // rsi
  int v26; // eax
  int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  const GUID *v32; // r9
  const struct _TlgProvider_t *v33; // rcx
  const GUID *v34; // r8
  const GUID *v35; // r9
  const struct _TlgProvider_t *v36; // rcx
  int v37; // ebx
  const struct _TlgProvider_t *v38; // rcx
  const GUID *v39; // r8
  const GUID *v40; // r9
  TraceLoggingHProvider v41; // rcx
  LPCGUID v42; // r8
  LPCGUID v43; // r9
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v45; // r8
  const GUID *v46; // r9
  int v48; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v50; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-C0h] BYREF
  int v52; // [rsp+50h] [rbp-B8h] BYREF
  int v53; // [rsp+54h] [rbp-B4h] BYREF
  int v54; // [rsp+58h] [rbp-B0h] BYREF
  int v55; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v56; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v57; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+70h] [rbp-98h] BYREF
  __int64 v59; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v60[48]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR v62; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v63; // [rsp+E8h] [rbp-20h]
  __int128 v64; // [rsp+F8h] [rbp-10h]
  __int128 v65; // [rsp+108h] [rbp+0h]
  __int64 *v66; // [rsp+118h] [rbp+10h]
  _QWORD v67[22]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v68[104]; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned __int64 v69; // [rsp+240h] [rbp+138h]
  char SystemInformation[12]; // [rsp+268h] [rbp+160h] BYREF
  unsigned int v71; // [rsp+274h] [rbp+16Ch]
  char v72[48]; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned int v73; // [rsp+2D8h] [rbp+1D0h]
  unsigned int v74; // [rsp+2DCh] [rbp+1D4h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+408h] [rbp+300h] BYREF
  __int128 v76; // [rsp+418h] [rbp+310h]
  __int128 v77; // [rsp+428h] [rbp+320h]
  __int128 v78; // [rsp+438h] [rbp+330h] BYREF
  __int64 *v79; // [rsp+448h] [rbp+340h]
  __int64 v80; // [rsp+450h] [rbp+348h]
  __int64 *v81; // [rsp+458h] [rbp+350h]
  __int64 v82; // [rsp+460h] [rbp+358h]
  EVENT_DATA_DESCRIPTOR v83; // [rsp+468h] [rbp+360h] BYREF
  __int64 *v84; // [rsp+488h] [rbp+380h]
  __int64 v85; // [rsp+490h] [rbp+388h]
  __int128 *v86; // [rsp+498h] [rbp+390h]
  __int64 v87; // [rsp+4A0h] [rbp+398h]

  v1 = (char *)(Parameter + 53);
  v3 = (char *)(Parameter + 41);
  memset_0(v68, 0, 0x88uLL);
  RmpPolicyGetCurrentUsageLimits((__int64)v1, (__int64)(v1 + 64), (__int64)v68, 0LL);
  RmpMemoryMonitorWaitForEvents((HANDLE *)v3, 7, 0xFFFFFFFF, (enum _RM_MEMORY_MONITOR_EVENT *)&v48);
  v4 = v48;
  if ( v48 != 2 )
  {
    v5 = 1;
    do
    {
      for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(Parameter, (__int64)v68, &v49);
            i != 4;
            i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(Parameter, (__int64)v68, &v49) )
      {
        if ( i == 3 )
          break;
        v8 = 0;
        if ( i == 2 )
          goto LABEL_6;
      }
      v8 = i;
LABEL_6:
      v9 = v49;
      if ( v49 > 1 )
      {
        if ( v49 != 2 )
        {
          v5 = 0;
          if ( v49 - 3 <= 1 )
            v5 = 2;
        }
      }
      else
      {
        v5 = 0;
      }
      if ( v5 != *((_DWORD *)v3 + 23) )
      {
        LODWORD(v50) = v5;
        v52 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_LEVEL, 0LL, &v50, 4LL, 0LL);
        if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(v7, 1uLL) )
        {
          *((_QWORD *)&v77 + 1) = 4LL;
          *(_QWORD *)&v77 = &v52;
          v53 = *((_DWORD *)v3 + 23);
          *(_QWORD *)&v78 = &v53;
          LODWORD(v51) = v50;
          v79 = &v51;
          *((_QWORD *)&v78 + 1) = 4LL;
          v80 = 4LL;
          TlgWrite(v7, &unk_180041C65, v31, v32, 5u, &pData);
        }
        *((_DWORD *)v3 + 23) = v5;
      }
      if ( v8 == 4 )
        break;
      if ( v4 != 1 && v8 == 3 && (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
        TlgWrite(v33, &unk_180042061, v34, v35, 2u, &v83);
      if ( *((_DWORD *)v1 + 26) && RmpMemoryMonitorCheckPeriod(*((_DWORD *)v3 + 18), *((_DWORD *)v3 + 19)) )
      {
        RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
          (struct _RM_SERVICE_GLOBALS *)Parameter,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v68);
        *((_DWORD *)v3 + 19) = GetTickCount();
      }
      if ( *((_DWORD *)v1 + 27) )
      {
        v10 = *((_DWORD *)v3 + 21);
        v11 = *((_DWORD *)v3 + 20);
        if ( GetTickCount() - v10 >= v11 )
        {
          v12 = MemUtilQueryMaxCommit(&v58);
          if ( !v12 )
            v57 = v58;
          NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
          NtQuerySystemInformation(SystemPerformanceInformation, v72, 0x158u, 0LL);
          NtQuerySystemInformation(SystemMemoryListInformation, v67, 0xB0u, 0LL);
          v13 = v74;
          memset_0(&v62, 0, 0x48uLL);
          *((_QWORD *)&v65 + 1) += v67[20] + v67[19] + v67[18] + v67[17] + v67[16] + v67[15] + v67[14] + v67[13];
          v14 = RmpPageSize * (unsigned int)v13;
          v62.Ptr = v14;
          *(_QWORD *)&v64 = RmpPageSize * v71;
          *((_QWORD *)&v64 + 1) = RmpPageSize * (v67[0] + v67[1] + v67[10] + v67[9] + v67[8] + v67[7] + v67[5] + v67[6]);
          *(_QWORD *)&v65 = v64 - *((_QWORD *)&v64 + 1);
          *(_QWORD *)&v62.Size = RmpPageSize * (v13 - v73);
          *((_QWORD *)&v63 + 1) = v14 - *(_QWORD *)&v62.Size;
          if ( v12 || (v15 = v57, v14 > v57) )
          {
            v15 = RmpPageSize * (unsigned int)v13;
            v57 = v15;
          }
          RmpPolicyComputeUsageLimits((__int64)v1, (__int64)(Parameter + 61), (__int64)&v62, v15, (__int64)v68);
          v16 = v69;
          pData = v62;
          v76 = v63;
          v77 = v64;
          v79 = v66;
          v78 = v65;
          if ( (unsigned __int64)v65 > v69 )
          {
            memset_0(v60, 0, 0x48uLL);
            v61 = v16;
            v37 = RmpMemoryMonitorEmptyWorkingSets(Parameter, &pData, v60, 6LL);
            if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v36, 1uLL) )
            {
              LODWORD(v51) = v37;
              v84 = &v51;
              v86 = &v78;
              v85 = 4LL;
              v87 = 8LL;
              TlgWrite(v38, &unk_18004187A, v39, v40, 4u, &v83);
            }
            if ( !v37 )
              *((_DWORD *)v3 + 21) = GetTickCount();
          }
        }
      }
      v17 = Parameter[418];
      if ( v17 )
      {
        RtlEnterCriticalSection(&RmpGlobalLock);
        v18 = v17[64];
        if ( (v18 & 3) == 0 )
        {
          v19 = *((_QWORD *)v17 + 30);
          v17[64] = v18 | 1;
          TpPostWork(v19);
        }
        if ( dword_18004C030 )
        {
          v20 = (_QWORD *)(*((_QWORD *)v17 + 15) + 160LL);
          TickCount = GetTickCount();
          v23 = (_QWORD *)*v20;
          v24 = TickCount;
          while ( v23 != v20 )
          {
            v25 = v23[2];
            if ( (*(_BYTE *)(v25 + 1356) & 1) != 0
              && *(_DWORD *)(v25 + 1352)
              && (*(_BYTE *)(v25 + 1412) & 8) == 0
              && v24 - *(_DWORD *)(v25 + 1928) >= 0x2710 )
            {
              if ( (unsigned int)dword_18004C030 > 4 )
              {
                if ( TlgKeywordOn(v22, 0x400000000009uLL) )
                {
                  v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v25 + 1368) + 64LL))(v25 + 1368);
                  *(_QWORD *)&v77 = &v59;
                  v54 = *(_DWORD *)(v25 + 1416);
                  *(_QWORD *)&v78 = &v54;
                  v55 = *(_DWORD *)(v25 + 1432);
                  v79 = (__int64 *)&v55;
                  LODWORD(v56) = *(_DWORD *)(v25 + 136);
                  v81 = &v56;
                  *((_QWORD *)&v77 + 1) = 8LL;
                  *((_QWORD *)&v78 + 1) = 4LL;
                  v80 = 4LL;
                  v82 = 4LL;
                  TlgWrite(v41, &unk_18003FD52, v42, v43, 6u, &pData);
                }
              }
              *(_DWORD *)(v25 + 1412) |= 8u;
            }
            v23 = (_QWORD *)*v23;
          }
          v4 = v48;
          v1 = (char *)(Parameter + 53);
          v9 = v49;
        }
        RtlLeaveCriticalSection(&RmpGlobalLock);
      }
      if ( v4 == 1 || RmpMemoryMonitorCheckEvent(*((void **)v3 + 1)) )
      {
        RtlEnterCriticalSection(&RmpGlobalLock);
        v26 = *((_DWORD *)Parameter + 480);
        v5 = 1;
        if ( (v26 & 1) == 0 )
        {
          v27 = 2;
          if ( (v26 & 2) == 0 )
            v27 = 1;
          if ( (*((_BYTE *)Parameter + 3340) & 2) == 0 )
          {
            if ( v27 == 1 )
            {
              v28 = 0xFFFFFFFFLL;
            }
            else
            {
              v28 = 1000LL;
              if ( v9 <= 0 )
                v28 = 1000LL;
            }
            v29 = -10000000LL;
            if ( v9 <= 0 )
              v29 = -50000000LL;
            v30 = *((_QWORD *)v3 + 7);
            v51 = v29;
            TpSetTimer(v30, &v51, 0LL, v28);
          }
        }
        RtlLeaveCriticalSection(&RmpGlobalLock);
      }
      else
      {
        v5 = 1;
      }
      RmpMemoryMonitorWaitForEvents((HANDLE *)v3, 7, 0xFFFFFFFF, (enum _RM_MEMORY_MONITOR_EVENT *)&v48);
      v4 = v48;
    }
    while ( v48 != 2 );
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)2, 1uLL) )
    TlgWrite(cData, &unk_180041E38, v45, v46, (UINT32)cData, &v83);
  return 0LL;
}
