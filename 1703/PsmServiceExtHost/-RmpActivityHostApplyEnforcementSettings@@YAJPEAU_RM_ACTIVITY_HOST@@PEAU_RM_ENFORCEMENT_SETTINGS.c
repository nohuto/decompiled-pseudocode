/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60
 * Callers:
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002374 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000101C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180002994 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000ABDC (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18000AF30 (-PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000C588 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800217D6 (memcmp_0.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x18002DBA8 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EC4C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180032758 (-RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035710 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800358A4 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        char a3)
{
  char *v4; // r12
  struct _RM_ACTIVITY_HOST *v6; // rsi
  char v7; // r8
  char v8; // dl
  int v9; // ecx
  unsigned __int8 v10; // dl
  char v11; // r8
  int v12; // edx
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int16 *v15; // rdi
  union _RM_SID *v16; // rbx
  unsigned __int64 v17; // rax
  __int64 *v18; // rsi
  struct _RTL_CRITICAL_SECTION *v19; // rax
  ULONG v20; // eax
  WCHAR *v21; // rbx
  unsigned __int64 v22; // rdi
  unsigned __int8 *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r14
  unsigned __int64 v29; // rax
  struct EnforcerApplicationState *ApplicationState; // rax
  union _RM_SID *v31; // rbx
  ModernResourceEnforcer *v32; // r14
  __int16 v33; // cx
  int *v34; // rdi
  __int64 (__fastcall *v35)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // ecx
  int v40; // ecx
  unsigned __int64 v41; // rax
  int v42; // ebx
  char v43; // cl
  char v44; // cl
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r8
  int v47; // ecx
  __int64 **v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // r11
  __int64 FirstResourceSet; // rcx
  int i; // r10d
  unsigned int v55; // edi
  __int128 *v56; // rax
  __int64 v57; // r8
  unsigned __int16 *v58; // rcx
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  int v67; // r8d
  int v68; // edx
  __int128 v69; // xmm1
  int v70; // r9d
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  int v74; // eax
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int64 v77; // rax
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int64 v80; // rax
  int v82; // eax
  bool v83; // al
  __int64 v85; // r8
  __int64 v86; // r10
  __int64 v87; // r11
  int v88; // r10d
  int v89; // eax
  __int64 (__fastcall *v90)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v91; // eax
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  char v97; // [rsp+70h] [rbp-90h] BYREF
  bool v98; // [rsp+71h] [rbp-8Fh] BYREF
  unsigned int v99; // [rsp+74h] [rbp-8Ch]
  unsigned int v100; // [rsp+78h] [rbp-88h]
  unsigned int v101; // [rsp+7Ch] [rbp-84h] BYREF
  int v102; // [rsp+80h] [rbp-80h]
  WCHAR v103; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v104; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v105; // [rsp+90h] [rbp-70h]
  int v106; // [rsp+98h] [rbp-68h] BYREF
  int v107; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v108; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v109; // [rsp+A8h] [rbp-58h]
  union _RM_SID *v110; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v111; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v112; // [rsp+C0h] [rbp-40h] BYREF
  int v113; // [rsp+C8h] [rbp-38h] BYREF
  int v114; // [rsp+CCh] [rbp-34h] BYREF
  int v115; // [rsp+D0h] [rbp-30h] BYREF
  int v116; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 *v117; // [rsp+D8h] [rbp-28h]
  struct _RM_ACTIVITY_HOST *v118; // [rsp+E0h] [rbp-20h]
  ModernResourceEnforcer *v119; // [rsp+E8h] [rbp-18h]
  PRTL_CRITICAL_SECTION CriticalSection; // [rsp+F0h] [rbp-10h]
  __int64 v121; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v122; // [rsp+100h] [rbp+0h] BYREF
  __int64 v123; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+110h] [rbp+10h] BYREF
  __int64 v125; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v126; // [rsp+128h] [rbp+28h]
  unsigned __int64 v127; // [rsp+130h] [rbp+30h]
  unsigned __int64 v128; // [rsp+138h] [rbp+38h]
  __int64 v129; // [rsp+140h] [rbp+40h]
  unsigned __int64 v130; // [rsp+148h] [rbp+48h]
  unsigned __int16 v131[232]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v132; // [rsp+320h] [rbp+220h] BYREF
  __int128 v133; // [rsp+330h] [rbp+230h]
  __int128 v134; // [rsp+340h] [rbp+240h]
  __int128 v135; // [rsp+350h] [rbp+250h]
  int v136; // [rsp+360h] [rbp+260h]
  int v137; // [rsp+364h] [rbp+264h]
  int v138; // [rsp+368h] [rbp+268h]
  __int64 v139; // [rsp+370h] [rbp+270h] BYREF
  int v140; // [rsp+378h] [rbp+278h]
  wchar_t Destination[232]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD Buf1[8]; // [rsp+550h] [rbp+450h] BYREF
  int v143; // [rsp+590h] [rbp+490h]
  unsigned int v144; // [rsp+594h] [rbp+494h]
  unsigned int v145; // [rsp+598h] [rbp+498h]
  unsigned __int64 v146; // [rsp+5A0h] [rbp+4A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+5B0h] [rbp+4B0h] BYREF
  void *v148; // [rsp+5C0h] [rbp+4C0h]
  int v149; // [rsp+5C8h] [rbp+4C8h]
  int v150; // [rsp+5CCh] [rbp+4CCh]
  unsigned int *v151; // [rsp+5D0h] [rbp+4D0h]
  __int64 v152; // [rsp+5D8h] [rbp+4D8h]
  unsigned __int16 *v153; // [rsp+5E0h] [rbp+4E0h]
  int v154; // [rsp+5E8h] [rbp+4E8h]
  int v155; // [rsp+5ECh] [rbp+4ECh]
  __int128 *v156; // [rsp+5F0h] [rbp+4F0h]
  int v157; // [rsp+5F8h] [rbp+4F8h]
  int v158; // [rsp+5FCh] [rbp+4FCh]
  int *v159; // [rsp+600h] [rbp+500h]
  __int64 v160; // [rsp+608h] [rbp+508h]
  int *v161; // [rsp+610h] [rbp+510h]
  __int64 v162; // [rsp+618h] [rbp+518h]
  __int64 *v163; // [rsp+620h] [rbp+520h]
  __int64 v164; // [rsp+628h] [rbp+528h]
  int *v165; // [rsp+630h] [rbp+530h]
  __int64 v166; // [rsp+638h] [rbp+538h]
  int *v167; // [rsp+640h] [rbp+540h]
  __int64 v168; // [rsp+648h] [rbp+548h]
  char *v169; // [rsp+650h] [rbp+550h]
  __int64 v170; // [rsp+658h] [rbp+558h]
  char *v171; // [rsp+660h] [rbp+560h]
  __int64 v172; // [rsp+668h] [rbp+568h]
  char *v173; // [rsp+670h] [rbp+570h]
  __int64 v174; // [rsp+678h] [rbp+578h]
  char *v175; // [rsp+680h] [rbp+580h]
  __int64 v176; // [rsp+688h] [rbp+588h]
  bool *v177; // [rsp+690h] [rbp+590h]
  __int64 v178; // [rsp+698h] [rbp+598h]
  __int64 *v179; // [rsp+6A0h] [rbp+5A0h]
  __int64 v180; // [rsp+6A8h] [rbp+5A8h]

  v118 = a1;
  v4 = (char *)a1 + 672;
  v6 = a1;
  if ( !memcmp_0(a2, (char *)a1 + 672, 0x38uLL) && (a3 & 1) == 0 )
    return 0LL;
  v7 = *((_BYTE *)a2 + 52) & 2;
  v8 = v4[52] & 2;
  if ( v7 != 0 && v8 == 0 )
  {
    RmpGpuMonitorEnableForHost(v6);
  }
  else if ( v7 == 0 && v8 != 0 )
  {
    RmpGpuMonitorDisableForHost(v6);
  }
  if ( (((unsigned __int8)v4[52] ^ *((_BYTE *)a2 + 52)) & 8) != 0 )
  {
    v89 = RmpQoSEnableDisableForHost(v6, (*((unsigned __int8 *)a2 + 52) >> 3) & 1);
    v101 = v89;
    v42 = v89;
    if ( v89 == -1073741822 )
    {
      *((_BYTE *)a2 + 52) ^= (v4[52] ^ *((_BYTE *)a2 + 52)) & 8;
    }
    else if ( v89 < 0 )
    {
      goto LABEL_80;
    }
  }
  v9 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)v4 + 12) == v9 )
  {
    v10 = *((_BYTE *)a2 + 52);
    v11 = v4[52];
    if ( (((unsigned __int8)v11 ^ v10) & 1) == 0
      && *((_QWORD *)v4 + 4) == *((_QWORD *)a2 + 4)
      && *((_DWORD *)v4 + 11) == *((_DWORD *)a2 + 11)
      && *((_QWORD *)v4 + 2) == *((_QWORD *)a2 + 2)
      && *((_QWORD *)v4 + 1) == *((_QWORD *)a2 + 1)
      && *(_QWORD *)v4 == *(_QWORD *)a2
      && *((_DWORD *)v4 + 10) == *((_DWORD *)a2 + 10)
      && (((unsigned __int8)v11 ^ v10) & 4) == 0
      && (a3 & 1) == 0 )
    {
LABEL_79:
      v42 = 0;
      v101 = 0;
      goto LABEL_80;
    }
  }
  v12 = *((_DWORD *)v6 + 14);
  if ( !v12 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 56LL);
    v119 = (ModernResourceEnforcer *)v13;
    if ( v9 == 100 )
    {
      v102 = -1;
    }
    else
    {
      v102 = v9;
      if ( v9 != -1 )
        v102 = 100 * v9;
    }
    if ( *((_QWORD *)v6 + 88) == *((_QWORD *)a2 + 4) )
    {
      v108 = 0LL;
    }
    else
    {
      v121 = *((_QWORD *)a2 + 4);
      v108 = (unsigned __int64 *)&v121;
    }
    v14 = *((_QWORD *)a2 + 2);
    v111 = *((_QWORD *)a2 + 1);
    v112 = *(_QWORD *)a2;
    v122 = v14;
    if ( v14 )
      v109 = (unsigned __int64 *)&v122;
    else
      v109 = 0LL;
    v15 = (unsigned __int16 *)((char *)v6 + 64);
    v100 = *((_DWORD *)v6 + 149);
    v16 = (struct _RM_ACTIVITY_HOST *)((char *)v6 + 528);
    v99 = *((_DWORD *)v6 + 150);
    v17 = *((_QWORD *)v6 + 3);
    v18 = (__int64 *)(v13 + 240);
    v104 = v17;
    v19 = (struct _RTL_CRITICAL_SECTION *)(v13 + 16);
    CriticalSection = (PRTL_CRITICAL_SECTION)(v13 + 16);
    v106 = -1;
    v105 = v15;
    v110 = v16;
    v107 = 0;
    v117 = (__int64 *)(v13 + 240);
    while ( 1 )
    {
      RtlEnterCriticalSection(v19);
      memset_0(Destination, 0, 0x228uLL);
      wcscpy_s(Destination, 0xE8uLL, v15);
      memset(Buf1, 0, sizeof(Buf1));
      v143 = 0;
      v20 = RtlLengthSid(v16);
      memcpy_0(Buf1, v16, v20);
      v144 = v100;
      v145 = v99;
      v146 = v104;
      if ( v18[2] )
      {
        v21 = Destination;
        v22 = 314159LL;
        do
        {
          v103 = RtlUpcaseUnicodeChar(*v21++);
          v22 = HIBYTE(v103) + 37 * ((unsigned __int8)v103 + 37 * v22);
        }
        while ( v21 < (WCHAR *)Buf1 );
        v23 = (unsigned __int8 *)Buf1;
        v24 = 11LL;
        do
        {
          v25 = *v23;
          v23 += 8;
          v22 = *(v23 - 1)
              + 37
              * (*(v23 - 2)
               + 37
               * (*(v23 - 3)
                + 37 * (*(v23 - 4) + 37 * (*(v23 - 5) + 37 * (*(v23 - 6) + 37 * (*(v23 - 7) + 37 * (v25 + 37 * v22)))))));
          --v24;
        }
        while ( v24 );
        v26 = v18[2] + 16 * (v22 & ((8LL << *((_BYTE *)v18 + 32)) - 1));
        v27 = *(__int64 **)v26;
        if ( *(_QWORD *)v26 )
        {
          v28 = **(__int64 ***)(v26 + 8);
          if ( v27 != v28 )
          {
            do
            {
              v29 = v27[2];
              if ( v29 >= v22 )
              {
                if ( v29 > v22 )
                  break;
                if ( !_wcsicmp(Destination, (const wchar_t *)v27 + 12) && !memcmp_0(Buf1, v27 + 61, 0x58uLL) )
                {
                  v18 = v117;
                  goto LABEL_32;
                }
              }
              v27 = (__int64 *)*v27;
            }
            while ( v27 != v28 );
            v18 = v117;
          }
        }
      }
      v27 = v18;
LABEL_32:
      if ( v27 == v18 )
        ApplicationState = 0LL;
      else
        ApplicationState = (struct EnforcerApplicationState *)(v27 + 72);
      v31 = v110;
      v32 = v119;
      if ( !ApplicationState )
      {
        ApplicationState = ModernResourceEnforcer::CreateApplicationState(v119, v105, v110, v100, v99, v104);
        if ( !ApplicationState )
        {
          RtlLeaveCriticalSection(CriticalSection);
          v42 = -1073741801;
          goto LABEL_56;
        }
      }
      *(_BYTE *)ApplicationState |= 0x80u;
      v33 = v102;
      if ( v102 == -1 )
        v33 = -1;
      *((_WORD *)ApplicationState + 1) = v33;
      if ( (*(_BYTE *)ApplicationState & 1) != 0 )
      {
        v34 = 0LL;
      }
      else
      {
        v34 = &v106;
        v106 = v102;
      }
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)v32 + 16));
      v35 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v32 + 32LL);
      if ( v35 == ModernResourceEnforcer::PsmSetApplicationProperties )
      {
        v125 = 0LL;
        v36 = 0;
        v126 = 0LL;
        v127 = 0LL;
        v128 = 0LL;
        v129 = 0LL;
        v130 = 0LL;
        if ( v34 )
        {
          v36 = 1;
          HIDWORD(v125) = *v34;
        }
        if ( v109 )
        {
          v37 = *v109;
          v36 |= 2u;
          if ( *v109 == -1LL )
            v37 = 0LL;
          v126 = v37;
        }
        v38 = v112;
        v39 = v36 | 4;
        if ( v112 == -1LL )
          v38 = 0LL;
        v127 = v38;
        v40 = v39 | 8;
        v41 = v111;
        LODWORD(v125) = v40;
        if ( v111 == -1LL )
          v41 = 0LL;
        v128 = v41;
        if ( v108 )
        {
          v92 = *v108;
          LODWORD(v125) = v40 | 0x20;
          v130 = v92;
        }
        v42 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))v32
               + 11))(
                v31,
                v100,
                v105,
                v99,
                v104,
                &v125);
        if ( v42 >= 0 )
          v42 = 0;
      }
      else
      {
        UserDataCount[0] = v99;
        v42 = v35(
                v32,
                v105,
                v31,
                v100,
                *(_QWORD *)UserDataCount,
                v104,
                (unsigned int *)v34,
                v109,
                &v112,
                &v111,
                0LL,
                v108);
      }
      if ( v42 >= 0 )
        goto LABEL_55;
      if ( !v34 || v42 != -1073741776 )
        break;
      if ( (unsigned int)++v107 > 2 )
        goto LABEL_133;
      v16 = v110;
      v19 = CriticalSection;
      v15 = v105;
    }
    if ( v42 != -1073741637 && v42 != -1073741776 )
      goto LABEL_124;
LABEL_133:
    v90 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v32 + 32LL);
    if ( v90 == ModernResourceEnforcer::PsmSetApplicationProperties )
      v91 = ModernResourceEnforcer::PsmSetApplicationProperties(
              v32,
              v105,
              v110,
              v100,
              v99,
              v104,
              0LL,
              v109,
              &v112,
              &v111,
              0LL,
              v108);
    else
      v91 = v90(v32, v105, v110, v100, v99, v104, 0LL, v109, &v112, &v111, 0LL, v108);
    v42 = v91;
LABEL_124:
    if ( v42 < 0 )
      goto LABEL_125;
LABEL_55:
    v42 = 0;
    goto LABEL_56;
  }
  if ( v12 != 1 )
  {
    v42 = -1073741811;
    goto LABEL_65;
  }
  v42 = RmpEnforcementApplyLimitsProcessHost(v6, a2);
  if ( v42 >= 0 )
    goto LABEL_55;
LABEL_56:
  if ( v42 < 0 )
  {
LABEL_125:
    v6 = v118;
    goto LABEL_65;
  }
  v43 = v4[52];
  *(_QWORD *)v4 = *(_QWORD *)a2;
  *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
  *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)v4 + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)v4 + 4) = *((_QWORD *)a2 + 4);
  *((_DWORD *)v4 + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)v4 + 12) = *((_DWORD *)a2 + 12);
  v44 = v4[52] ^ (*((_BYTE *)a2 + 52) ^ v43) & 1;
  v4[52] = v44;
  if ( *((_DWORD *)v4 + 10) != *((_DWORD *)a2 + 10) || ((*((_BYTE *)a2 + 52) ^ (unsigned __int8)v44) & 4) != 0 )
  {
    v6 = v118;
    v42 = RmpActivityHostApplyExecutionSpeed(v118, a2);
    if ( v42 < 0 )
      goto LABEL_65;
  }
  else
  {
    v6 = v118;
  }
  v45 = *((_QWORD *)a2 + 2);
  if ( !*((_DWORD *)v6 + 14) )
  {
    v46 = *((_QWORD *)v6 + 128);
    if ( *((_QWORD *)v6 + 125) < v45 )
      v45 = *((_QWORD *)v6 + 125);
    if ( v45 != v46
      && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
                *(ExecutionModel::ResourceManager **)(*((_QWORD *)v6 + 5) + 1528LL),
                (struct _RM_ACTIVITY_HOST *)((char *)v6 + 64),
                v46,
                v45) >= 0 )
    {
      *((_QWORD *)v6 + 128) = v45;
    }
  }
  v42 = 0;
LABEL_65:
  v101 = v42;
  if ( v42 >= 0 )
  {
    v47 = 0;
    v48 = (__int64 **)((char *)v6 + 616);
    while ( 1 )
    {
      if ( ((1 << v47) & 2) != 0 && *v48 != (__int64 *)v48 )
      {
        v49 = (__int64)(*v48 - 171);
        if ( *v48 != (__int64 *)1368 )
          break;
      }
      ++v47;
      v48 += 3;
      if ( v47 >= 2 )
        goto LABEL_79;
    }
    v50 = **v48;
    v51 = *(int *)(v49 + 1400);
    v52 = *(_QWORD *)(v49 + 1392);
    FirstResourceSet = 0LL;
    if ( v50 != v52 + 8 * (v51 + 2 * v51 + 77) )
      FirstResourceSet = v50 - 1368;
    if ( !FirstResourceSet )
    {
      for ( i = v51 + 1; i < 2; ++i )
      {
        if ( ((1 << i) & 2) != 0 )
        {
          FirstResourceSet = RmpActivityHostGetFirstResourceSet(v52, (unsigned int)i);
          if ( FirstResourceSet )
            goto LABEL_75;
        }
      }
      FirstResourceSet = 0LL;
      goto LABEL_75;
    }
    while ( 1 )
    {
LABEL_75:
      if ( (*(_BYTE *)(v49 + 1450) & 7) == 4 )
      {
        RmpResourceSetUpdateReceivedCommit(*(struct _RM_RESOURCE_SET **)(v49 + 1384), *((_QWORD *)a2 + 1));
        goto LABEL_79;
      }
      v49 = FirstResourceSet;
      if ( FirstResourceSet )
      {
        v85 = *(_QWORD *)(FirstResourceSet + 1368);
        v86 = *(int *)(FirstResourceSet + 1400);
        v87 = *(_QWORD *)(FirstResourceSet + 1392);
        FirstResourceSet = 0LL;
        if ( v85 != v87 + 8 * (v86 + 2 * v86 + 77) )
          FirstResourceSet = v85 - 1368;
        if ( FirstResourceSet )
          goto LABEL_78;
        v88 = v86 + 1;
        if ( v88 < 2 )
        {
          do
          {
            if ( ((1 << v88) & 2) != 0 )
            {
              FirstResourceSet = RmpActivityHostGetFirstResourceSet(v87, (unsigned int)v88);
              if ( FirstResourceSet )
                goto LABEL_78;
            }
          }
          while ( ++v88 < 2 );
        }
      }
      FirstResourceSet = 0LL;
LABEL_78:
      if ( !v49 )
        goto LABEL_79;
    }
  }
LABEL_80:
  v55 = dword_18004D030;
  if ( dword_18004D030 )
  {
    memset_0(v131, 0, 0x230uLL);
    if ( *((_DWORD *)v6 + 14) )
    {
      v93 = RmpActivityHostGetFirstResourceSet(v6, 1LL);
      if ( v93 )
      {
        StringCchCopyW(v131, v94, *(const unsigned __int16 **)(v93 + 32));
        v42 = v101;
        v55 = dword_18004D030;
      }
      v95 = *((_QWORD *)v6 + 5);
      v68 = *((_DWORD *)v6 + 16);
      v70 = v138;
      v67 = v137;
      v132 = *(_OWORD *)(v95 + 1388);
      v133 = *(_OWORD *)(v95 + 1404);
      v134 = *(_OWORD *)(v95 + 1420);
      v135 = *(_OWORD *)(v95 + 1436);
      v136 = *(_DWORD *)(v95 + 1452);
      v77 = *((_QWORD *)v6 + 3);
    }
    else
    {
      v56 = (__int128 *)((char *)v6 + 64);
      v57 = 3LL;
      v58 = v131;
      do
      {
        v58 += 64;
        v59 = *v56;
        v60 = v56[1];
        v56 += 8;
        *((_OWORD *)v58 - 8) = v59;
        v61 = *(v56 - 6);
        *((_OWORD *)v58 - 7) = v60;
        v62 = *(v56 - 5);
        *((_OWORD *)v58 - 6) = v61;
        v63 = *(v56 - 4);
        *((_OWORD *)v58 - 5) = v62;
        v64 = *(v56 - 3);
        *((_OWORD *)v58 - 4) = v63;
        v65 = *(v56 - 2);
        *((_OWORD *)v58 - 3) = v64;
        v66 = *(v56 - 1);
        *((_OWORD *)v58 - 2) = v65;
        *((_OWORD *)v58 - 1) = v66;
        --v57;
      }
      while ( v57 );
      v67 = *((_DWORD *)v6 + 149);
      v68 = 0;
      v69 = v56[1];
      v70 = *((_DWORD *)v6 + 150);
      *(_OWORD *)v58 = *v56;
      v71 = v56[2];
      *((_OWORD *)v58 + 1) = v69;
      v72 = v56[3];
      *((_OWORD *)v58 + 2) = v71;
      v73 = v56[4];
      v74 = *((_DWORD *)v6 + 148);
      *((_OWORD *)v58 + 3) = v72;
      v75 = *((_OWORD *)v6 + 34);
      *((_OWORD *)v58 + 4) = v73;
      v136 = v74;
      v76 = *((_OWORD *)v6 + 33);
      v77 = *((_QWORD *)v6 + 76);
      v133 = v75;
      v78 = *((_OWORD *)v6 + 36);
      v137 = v67;
      v132 = v76;
      v79 = *((_OWORD *)v6 + 35);
      v138 = v70;
      v135 = v78;
      v134 = v79;
    }
    v140 = v68;
    v139 = v77;
    if ( v55 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
    {
      v152 = 4LL;
      v151 = &v101;
      v80 = -1LL;
      while ( v131[++v80] != 0 )
        ;
      v155 = 0;
      v154 = 2 * v80 + 2;
      v153 = v131;
      if ( BYTE1(v132) > 0xFu )
        v82 = 15;
      else
        v82 = BYTE1(v132);
      v158 = 0;
      v157 = 4 * v82 + 8;
      v156 = &v132;
      v159 = &v113;
      v161 = &v114;
      v163 = &v139;
      v165 = &v115;
      v116 = *((_DWORD *)v4 + 12);
      v167 = &v116;
      v169 = v4 + 16;
      v173 = v4 + 8;
      v97 = v4[40];
      v175 = &v97;
      v83 = (v4[52] & 4) != 0;
      v113 = v67;
      v98 = v83;
      v177 = &v98;
      v123 = *((_QWORD *)v4 + 4);
      v179 = &v123;
      v160 = 4LL;
      v114 = v70;
      v162 = 4LL;
      v164 = 8LL;
      v115 = v68;
      v166 = 4LL;
      v168 = 4LL;
      v170 = 8LL;
      v171 = v4;
      v172 = 8LL;
      v174 = 8LL;
      v176 = 1LL;
      v178 = 1LL;
      v180 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800419DF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_18004D038;
      v148 = &unk_1800419EA;
      UserData.Reserved = 2;
      v149 = 246;
      v150 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x10u, &UserData);
      return v101;
    }
  }
  return (unsigned int)v42;
}
