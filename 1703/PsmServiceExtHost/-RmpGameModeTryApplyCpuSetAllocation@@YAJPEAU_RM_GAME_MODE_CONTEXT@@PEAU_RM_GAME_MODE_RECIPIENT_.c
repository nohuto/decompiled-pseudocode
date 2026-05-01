/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800311E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FFC8 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800302FC (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x1800303D0 (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180037EE8 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180037FC8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_CPU_SET_MANAGER ***a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v3; // ebx
  char v5; // r15
  UINT32 cData; // esi
  __int64 v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v10; // r14
  unsigned int v11; // esi
  int v12; // esi
  int v13; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  const GUID *v25; // r8
  const GUID *v26; // r9
  __int64 v27; // rax
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v33; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v34[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h]
  __int128 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __int128 v41; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+E0h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  struct _RM_CPU_SET_PROCESS_REGISTRATION **v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  struct _RM_CPU_SET_PROCESS_REGISTRATION **v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]

  v33 = 0LL;
  v3 = 0;
  v5 = 1;
  RtlEnterCriticalSection(&RmpGlobalLock);
  cData = 4;
  v32 = RmpCpuSetManagerRegisterProcessWithAllocation(
          a1[4],
          *((void **)a2 + 5),
          *((struct _RM_CPU_SET_ALLOCATION **)a2 + 12),
          &v33);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v7, 1uLL) )
  {
    v47 = 4LL;
    v46 = &v32;
    v34[0] = *((_DWORD *)a2 + 14);
    v48 = (struct _RM_CPU_SET_PROCESS_REGISTRATION **)v34;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_180042250, v8, v9, 4u, &pData);
  }
  v10 = v33;
  if ( v32 >= 0 )
  {
    v11 = *((_DWORD *)a2 + 23);
    if ( (v11 & 2) != 0 || (v11 & 1) != 0 && (*((_BYTE *)a2 + 121) & 1) == 0 )
    {
      v12 = (v11 >> 3) & 1;
      v13 = RmpCpuSetManagerSetProcessDefaultMaskForGameMode(v33, v12);
      v7 = 4LL;
      v32 = v13;
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
      {
        LODWORD(v33) = v12;
        v46 = &v32;
        cData = v7;
        v34[0] = *((_DWORD *)a2 + 14);
        v48 = (struct _RM_CPU_SET_PROCESS_REGISTRATION **)v34;
        v50 = &v33;
        v47 = v7;
        v49 = v7;
        v51 = v7;
        TlgWrite((TraceLoggingHProvider)v7, &unk_180041F67, v14, v15, 5u, &pData);
      }
      else
      {
        cData = v7;
      }
      if ( v32 < 0 )
        goto LABEL_22;
      v3 = 1;
    }
    v16 = (_OWORD *)*((_QWORD *)a2 + 12);
    v17 = v16[7];
    v35 = v16[6];
    v18 = v16[8];
    v36 = v17;
    v19 = v16[9];
    v37 = v18;
    v20 = v16[10];
    v38 = v19;
    v21 = v16[11];
    v39 = v20;
    v22 = v16[12];
    v40 = v21;
    v23 = v16[14];
    v41 = v22;
    v42 = v16[13];
    v24 = v16[15];
    v43 = v23;
    v44 = v24;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v5 = 0;
    if ( (*((_BYTE *)a2 + 92) & 0x10) == 0 )
    {
      cData = 4;
LABEL_21:
      v27 = v35;
      v3 = 0;
      *((_BYTE *)a2 + 121) |= 1u;
      *((_QWORD *)a2 + 13) = v10;
      v10 = 0LL;
      *((_QWORD *)a2 + 9) = v27;
      v32 = 0;
      goto LABEL_22;
    }
    cData = 4;
    v32 = RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 1u);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v7, 1uLL) )
    {
      v47 = 4LL;
      v46 = &v32;
      LODWORD(v33) = *((_DWORD *)a2 + 14);
      v48 = &v33;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)v7, &unk_180041F26, v25, v26, 4u, &pData);
    }
    if ( v32 >= 0 )
      goto LABEL_21;
  }
LABEL_22:
  if ( v10 )
  {
    if ( !v5 )
    {
      v5 = 1;
      RtlEnterCriticalSection(&RmpGlobalLock);
    }
    RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)(*a1 + 81), v10, 1);
  }
  if ( v5 )
    RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v3 )
    v32 = RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
  if ( dword_18004D030 > cData && TlgKeywordOn((TraceLoggingHProvider)v7, 1uLL) )
  {
    v47 = 4LL;
    v46 = &v32;
    LODWORD(v33) = *((_DWORD *)a2 + 14);
    v48 = &v33;
    v49 = 4LL;
    TlgWrite(v28, &unk_1800420BD, v29, v30, cData, &pData);
  }
  return (unsigned int)v32;
}
