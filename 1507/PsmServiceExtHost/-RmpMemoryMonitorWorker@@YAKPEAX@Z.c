/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180022DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180002F60 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003C5D8 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18003C970 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x18003C990 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(struct _RM_SERVICE_GLOBALS *Parameter)
{
  int Ptr; // r12d
  char *v2; // r14
  char *v4; // rsi
  DWORD v5; // ebx
  void *v6; // rcx
  const GUID *v7; // r8
  int v8; // eax
  const GUID *v9; // r9
  __int64 v10; // rdx
  DWORD v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // edx
  int v18; // eax
  const GUID *v19; // r8
  const GUID *v20; // r9
  int v21; // ebx
  DWORD v22; // edi
  unsigned __int64 v23; // rbx
  __int64 v24; // rsi
  int v26; // eax
  struct _TP_WORK *v27; // rcx
  _QWORD *v28; // rsi
  DWORD TickCount; // eax
  const struct _TlgProvider_t *v30; // rcx
  _QWORD *v31; // rbx
  DWORD v32; // r15d
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // r9
  int v36; // ebx
  const GUID *v37; // r8
  const GUID *v38; // r9
  const struct _TlgProvider_t *v39; // rcx
  const GUID *v40; // r8
  const GUID *v41; // r9
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v45; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+3Ch] [rbp-C4h] BYREF
  int v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v49[40]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+80h] [rbp-80h] BYREF
  const GUID *v52; // [rsp+90h] [rbp-70h]
  unsigned __int64 v53; // [rsp+98h] [rbp-68h]
  const struct _TlgProvider_t *v54; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handles; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v57; // [rsp+B8h] [rbp-48h]
  unsigned int v58; // [rsp+BCh] [rbp-44h]
  _QWORD v59[22]; // [rsp+F0h] [rbp-10h] BYREF
  char SystemInformation[48]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v61; // [rsp+1D0h] [rbp+D0h]
  unsigned int v62; // [rsp+1D4h] [rbp+D4h]
  EVENT_DATA_DESCRIPTOR v63; // [rsp+300h] [rbp+200h] BYREF
  __int64 *v64; // [rsp+320h] [rbp+220h]
  __int64 v65; // [rsp+328h] [rbp+228h]
  unsigned __int64 *v66; // [rsp+330h] [rbp+230h]
  __int64 v67; // [rsp+338h] [rbp+238h]
  int *v68; // [rsp+340h] [rbp+240h]
  __int64 v69; // [rsp+348h] [rbp+248h]
  int *v70; // [rsp+350h] [rbp+250h]
  __int64 v71; // [rsp+358h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+360h] [rbp+260h] BYREF
  __int16 *v73; // [rsp+380h] [rbp+280h]
  __int64 v74; // [rsp+388h] [rbp+288h]
  EVENT_DATA_DESCRIPTOR *v75; // [rsp+390h] [rbp+290h]
  int v76; // [rsp+398h] [rbp+298h]
  int v77; // [rsp+39Ch] [rbp+29Ch]
  int *v78; // [rsp+3A0h] [rbp+2A0h]
  __int64 v79; // [rsp+3A8h] [rbp+2A8h]

  Ptr = v46;
  v2 = (char *)Parameter + 1672;
  v4 = (char *)Parameter + 208;
  while ( 1 )
  {
    v5 = 0;
    if ( WaitForSingleObjectEx(*(HANDLE *)v2, 0, 0) )
      *((_DWORD *)v2 + 24) &= ~1u;
    LODWORD(v7) = 0;
    v8 = 1;
    v9 = (const GUID *)v2;
    do
    {
      if ( (v8 & 7) != 0 && ((_DWORD)v7 || (v2[96] & 1) == 0) )
      {
        v6 = *(void **)&v9->Data1;
        v10 = v5++;
        *((_DWORD *)&v51.Ptr + v10) = (_DWORD)v7;
        *(&Handles + v10) = v6;
      }
      v7 = (const GUID *)(unsigned int)((_DWORD)v7 + 1);
      v8 = __ROL4__(v8, 1);
      v9 = (const GUID *)((char *)v9 + 8);
    }
    while ( (unsigned int)v7 < 6 );
    if ( (unsigned int)dword_1800690A0 > 5 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      v45 = v5;
      v73 = &v45;
      v75 = &v51;
      v76 = 4 * (unsigned __int16)v5;
      v78 = &v47;
      v74 = 2LL;
      v77 = 0;
      v47 = -1;
      v79 = 4LL;
      TlgWrite((TraceLoggingHProvider)v6, &unk_18005BA06, v7, v9, 5u, &pData);
    }
    v12 = WaitForMultipleObjectsEx(v5, &Handles, 0, 0xFFFFFFFF, 0);
    if ( v12 >= 0x40 )
    {
      if ( v12 == 258 )
      {
        v16 = 258;
      }
      else
      {
        Ptr = v51.Ptr;
        v16 = 0;
      }
    }
    else
    {
      v16 = 0;
      Ptr = *((_DWORD *)&v51.Ptr + v12);
      if ( !Ptr )
        *((_DWORD *)v2 + 24) |= 1u;
    }
    if ( (unsigned int)dword_1800690A0 > 5 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
    {
      v44 = v16;
      v64 = (__int64 *)&v44;
      v66 = (unsigned __int64 *)&v43;
      v65 = 4LL;
      v43 = Ptr;
      v67 = 4LL;
      TlgWrite(v13, &unk_18005BD6D, v14, v15, 4u, &v63);
    }
    if ( Ptr == 2 )
      break;
    v18 = RmpMemoryMonitorCheckMetricsAndRemediate((__int64)Parameter);
    if ( v18 == 4 )
      break;
    if ( Ptr != 1 && v18 == 3 && (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v13, 1uLL) )
      TlgWrite(v13, &unk_18005BDFF, v19, v20, 2u, &v51);
    if ( *((_DWORD *)v4 + 34) && RmpMemoryMonitorCheckPeriod(*((_DWORD *)v2 + 20), *((_DWORD *)v2 + 21)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(Parameter);
      *((_DWORD *)v2 + 21) = GetTickCount();
    }
    if ( *((_DWORD *)v4 + 38) )
    {
      v21 = *((_DWORD *)v2 + 23);
      v22 = *((_DWORD *)v2 + 22);
      if ( GetTickCount() - v21 >= v22 )
      {
        NtQuerySystemInformation(SystemBasicInformation, &Handles, 0x40u, 0LL);
        NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x158u, 0LL);
        NtQuerySystemInformation(SystemMemoryListInformation, v59, 0xB0u, 0LL);
        v23 = *((_QWORD *)v4 + 18);
        v13 = (const struct _TlgProvider_t *)(v57
                                            * (v59[0]
                                             + v59[1]
                                             + v59[12]
                                             + v59[11]
                                             + v59[10]
                                             + v59[9]
                                             + v59[8]
                                             + v59[7]
                                             + v59[5]
                                             + v59[6]));
        v51.Ptr = v57 * (unsigned __int64)v62;
        v53 = v57 * (unsigned __int64)v58;
        v19 = (const GUID *)(v53 - (_QWORD)v13);
        v54 = v13;
        v55 = v53 - (_QWORD)v13;
        v20 = (const GUID *)(v51.Ptr - v57 * (v62 - (unsigned __int64)v61));
        *(_QWORD *)&v51.Size = v57 * (v62 - (unsigned __int64)v61);
        v52 = v20;
        if ( v53 - (unsigned __int64)v13 > v23 )
        {
          memset_0(v49, 0, 0x30uLL);
          v50 = v23;
          v36 = RmpMemoryMonitorEmptyWorkingSets(v2, v4, &v51, v49, 6);
          if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v13, 1uLL) )
          {
            v43 = v36;
            v64 = (__int64 *)&v43;
            v66 = &v55;
            v65 = 4LL;
            v67 = 8LL;
            TlgWrite(v13, &unk_18005B8B8, v19, v20, 4u, &v63);
          }
          if ( !v36 )
            *((_DWORD *)v2 + 23) = GetTickCount();
        }
      }
    }
    v24 = *((_QWORD *)Parameter + 260);
    if ( v24 )
    {
      if ( (unsigned int)dword_1800690A0 > 5 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
        TlgWrite(v13, &unk_18005C014, v19, v20, 2u, &v51);
      RtlEnterCriticalSection(&RmpGlobalLock);
      v26 = *(_DWORD *)(v24 + 264);
      if ( (v26 & 1) == 0 )
      {
        v27 = *(struct _TP_WORK **)(v24 + 248);
        *(_DWORD *)(v24 + 264) = v26 | 1;
        SubmitThreadpoolWork(v27);
      }
      if ( dword_1800690A0 )
      {
        v28 = (_QWORD *)(*(_QWORD *)(v24 + 184) + 160LL);
        TickCount = GetTickCount();
        v31 = (_QWORD *)*v28;
        v32 = TickCount;
        while ( v31 != v28 )
        {
          v33 = v31[2];
          if ( (*(_BYTE *)(v33 + 1356) & 1) != 0
            && *(_DWORD *)(v33 + 1352)
            && (*(_BYTE *)(v33 + 1912) & 8) == 0
            && v32 - *(_DWORD *)(v33 + 1908) >= 0x2710 )
          {
            if ( (unsigned int)dword_1800690A0 > 4 )
            {
              if ( TlgKeywordOn(v30, 0x400000000009uLL) )
              {
                v48 = v33;
                v64 = &v48;
                v43 = *(_DWORD *)(v33 + 1408);
                v66 = (unsigned __int64 *)&v43;
                v44 = *(_DWORD *)(v33 + 1428);
                v68 = &v44;
                v46 = *(_DWORD *)(v33 + 136);
                v70 = &v46;
                v65 = 8LL;
                v67 = 4LL;
                v69 = 4LL;
                v71 = 4LL;
                TlgWrite(v30, &unk_18005A881, v37, v38, 6u, &v63);
              }
            }
            *(_BYTE *)(v33 + 1912) |= 8u;
          }
          v31 = (_QWORD *)*v31;
        }
        v2 = (char *)Parameter + 1672;
      }
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
    if ( Ptr != 1 )
    {
      v4 = (char *)Parameter + 208;
      if ( !RmpMemoryMonitorCheckEvent(*((void **)v2 + 1)) )
        continue;
    }
    RtlEnterCriticalSection(&RmpGlobalLock);
    v34 = *((_DWORD *)Parameter + 454);
    if ( (v34 & 1) == 0 )
    {
      if ( (v34 & 2) != 0 )
        v35 = *((unsigned int *)v2 + 18);
      else
        v35 = 0xFFFFFFFFLL;
      v48 = -10000LL * *((unsigned int *)v2 + 17);
      TpSetTimer(*((_QWORD *)v2 + 7), &v48, 0LL, v35);
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v4 = (char *)Parameter + 208;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v13, 1uLL) )
    TlgWrite(v39, &unk_18005BEE0, v40, v41, 2u, &v51);
  return 0LL;
}
