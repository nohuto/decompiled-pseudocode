/*
 * XREFs of RmpActivityHostApplyEnforcementSettings @ 0x18000A3C0
 * Callers:
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpCoreApiSetHostLimits @ 0x180019198 (RmpCoreApiSetHostLimits.c)
 * Callees:
 *     RmpQoSEnableDisableForHost @ 0x180001414 (RmpQoSEnableDisableForHost.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180005C2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RmpActivityHostApplyExecutionSpeed @ 0x180007320 (RmpActivityHostApplyExecutionSpeed.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C69C (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18000C990 (-PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000DAD0 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180020A2A (memcmp_0.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpEnforcementApplyLimitsProcessHost @ 0x18002B048 (RmpEnforcementApplyLimitsProcessHost.c)
 *     RmpGpuMonitorDisableForHost @ 0x180034EFC (RmpGpuMonitorDisableForHost.c)
 *     RmpGpuMonitorEnableForHost @ 0x180035004 (RmpGpuMonitorEnableForHost.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *Buf1,
        char a3)
{
  char *v4; // r12
  struct _RM_ACTIVITY_HOST *v6; // rsi
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // cl
  __int64 v10; // r14
  int v11; // ecx
  unsigned __int8 v12; // dl
  char v13; // r8
  int v14; // edx
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *); // rax
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // rcx
  __int64 (__usercall *v21)@<rax>(ModernResourceEnforcer *__hidden@<rcx>, struct _RM_ACTIVITY_HOST *@<rdx>, unsigned int *@<r8>, unsigned __int64 *@<r9>, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  unsigned __int16 *v22; // r14
  union _RM_SID *v23; // rbx
  unsigned __int64 v24; // rax
  __int64 *v25; // rsi
  struct _RTL_CRITICAL_SECTION *v26; // rax
  ULONG v27; // eax
  WCHAR *v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned __int8 *v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rbx
  __int64 *v35; // r14
  unsigned __int64 v36; // rax
  struct EnforcerApplicationState *ApplicationState; // rax
  union _RM_SID *v38; // rbx
  unsigned __int16 *v39; // r14
  ModernResourceEnforcer *v40; // rdi
  __int16 v41; // cx
  int *v42; // rsi
  __int64 (__fastcall *v43)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v44; // ecx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // ecx
  int v48; // ecx
  unsigned __int64 v49; // rax
  int v50; // ebx
  char v51; // cl
  char v52; // cl
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r8
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
  int v81; // eax
  bool v82; // al
  struct _RM_PSM_HOST_INFO *v84; // rdx
  ExecutionModel::ResourceManager *v85; // rcx
  __int64 (__fastcall *v86)(ExecutionModel::ResourceManager *__hidden, struct _RM_PSM_HOST_INFO *, unsigned __int64, unsigned __int64); // rax
  int v87; // eax
  __int64 (__fastcall *v88)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v89; // eax
  int v90; // eax
  unsigned __int64 v91; // rax
  int v92; // eax
  __int64 FirstResourceSet; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // [rsp+0h] [rbp-100h] BYREF
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  char v98; // [rsp+70h] [rbp-90h] BYREF
  bool v99; // [rsp+71h] [rbp-8Fh] BYREF
  unsigned int v100; // [rsp+74h] [rbp-8Ch]
  unsigned int v101; // [rsp+78h] [rbp-88h]
  int v102; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v103; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v104; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v105; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v106; // [rsp+90h] [rbp-70h]
  int v107; // [rsp+98h] [rbp-68h] BYREF
  int v108; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v109; // [rsp+A0h] [rbp-60h]
  union _RM_SID *v110; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v111; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v112; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 *v113; // [rsp+C0h] [rbp-40h]
  __int64 *v114; // [rsp+C8h] [rbp-38h]
  int v115; // [rsp+D0h] [rbp-30h] BYREF
  int v116; // [rsp+D4h] [rbp-2Ch] BYREF
  int v117; // [rsp+D8h] [rbp-28h] BYREF
  int v118; // [rsp+DCh] [rbp-24h] BYREF
  int *v119; // [rsp+E0h] [rbp-20h]
  ModernResourceEnforcer *v120; // [rsp+E8h] [rbp-18h]
  PRTL_CRITICAL_SECTION CriticalSection; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v122; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v123; // [rsp+100h] [rbp+0h] BYREF
  struct _RM_ACTIVITY_HOST *v124; // [rsp+108h] [rbp+8h]
  __int64 v125; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+118h] [rbp+18h] BYREF
  __int64 v127; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v128; // [rsp+130h] [rbp+30h]
  unsigned __int64 v129; // [rsp+138h] [rbp+38h]
  unsigned __int64 v130; // [rsp+140h] [rbp+40h]
  __int64 v131; // [rsp+148h] [rbp+48h]
  unsigned __int64 v132; // [rsp+150h] [rbp+50h]
  char v133[464]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v134; // [rsp+330h] [rbp+230h] BYREF
  __int128 v135; // [rsp+340h] [rbp+240h]
  __int128 v136; // [rsp+350h] [rbp+250h]
  __int128 v137; // [rsp+360h] [rbp+260h]
  int v138; // [rsp+370h] [rbp+270h]
  int v139; // [rsp+374h] [rbp+274h]
  int v140; // [rsp+378h] [rbp+278h]
  __int64 v141; // [rsp+380h] [rbp+280h] BYREF
  int v142; // [rsp+388h] [rbp+288h]
  wchar_t Destination[232]; // [rsp+390h] [rbp+290h] BYREF
  _QWORD Buf1a[8]; // [rsp+560h] [rbp+460h] BYREF
  int v145; // [rsp+5A0h] [rbp+4A0h]
  unsigned int v146; // [rsp+5A4h] [rbp+4A4h]
  unsigned int v147; // [rsp+5A8h] [rbp+4A8h]
  unsigned __int64 v148; // [rsp+5B0h] [rbp+4B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+5C0h] [rbp+4C0h] BYREF
  void *v150; // [rsp+5D0h] [rbp+4D0h]
  int v151; // [rsp+5D8h] [rbp+4D8h]
  int v152; // [rsp+5DCh] [rbp+4DCh]
  unsigned int *v153; // [rsp+5E0h] [rbp+4E0h]
  __int64 v154; // [rsp+5E8h] [rbp+4E8h]
  unsigned __int16 *v155; // [rsp+5F0h] [rbp+4F0h]
  int v156; // [rsp+5F8h] [rbp+4F8h]
  int v157; // [rsp+5FCh] [rbp+4FCh]
  __int128 *v158; // [rsp+600h] [rbp+500h]
  int v159; // [rsp+608h] [rbp+508h]
  int v160; // [rsp+60Ch] [rbp+50Ch]
  int *v161; // [rsp+610h] [rbp+510h]
  __int64 v162; // [rsp+618h] [rbp+518h]
  int *v163; // [rsp+620h] [rbp+520h]
  __int64 v164; // [rsp+628h] [rbp+528h]
  __int64 *v165; // [rsp+630h] [rbp+530h]
  __int64 v166; // [rsp+638h] [rbp+538h]
  int *v167; // [rsp+640h] [rbp+540h]
  __int64 v168; // [rsp+648h] [rbp+548h]
  int *v169; // [rsp+650h] [rbp+550h]
  __int64 v170; // [rsp+658h] [rbp+558h]
  char *v171; // [rsp+660h] [rbp+560h]
  __int64 v172; // [rsp+668h] [rbp+568h]
  char *v173; // [rsp+670h] [rbp+570h]
  __int64 v174; // [rsp+678h] [rbp+578h]
  char *v175; // [rsp+680h] [rbp+580h]
  __int64 v176; // [rsp+688h] [rbp+588h]
  char *v177; // [rsp+690h] [rbp+590h]
  __int64 v178; // [rsp+698h] [rbp+598h]
  bool *v179; // [rsp+6A0h] [rbp+5A0h]
  __int64 v180; // [rsp+6A8h] [rbp+5A8h]
  __int64 *v181; // [rsp+6B0h] [rbp+5B0h]
  __int64 v182; // [rsp+6B8h] [rbp+5B8h]

  v124 = a1;
  v4 = (char *)a1 + 672;
  v6 = a1;
  if ( !memcmp_0(Buf1, (char *)a1 + 672, 0x38uLL) && (a3 & 1) == 0 )
    return 0LL;
  v7 = v4[52];
  v8 = *((_BYTE *)Buf1 + 52);
  if ( ((v8 >> 1) & (unsigned __int8)~(v7 >> 1) & 1) != 0 )
  {
    RmpGpuMonitorEnableForHost(v6);
  }
  else if ( ((v7 >> 1) & (unsigned __int8)~(v8 >> 1) & 1) != 0 )
  {
    RmpGpuMonitorDisableForHost(v6);
  }
  v9 = *((_BYTE *)Buf1 + 52);
  v10 = -1LL;
  if ( (((unsigned __int8)v4[52] ^ v9) & 8) != 0 )
  {
    v90 = RmpQoSEnableDisableForHost(v6, (v9 >> 3) & 1);
    v103 = v90;
    v50 = v90;
    if ( v90 == -1073741822 )
    {
      *((_BYTE *)Buf1 + 52) ^= (v4[52] ^ *((_BYTE *)Buf1 + 52)) & 8;
    }
    else if ( v90 < 0 )
    {
      goto LABEL_73;
    }
  }
  v11 = *((_DWORD *)Buf1 + 12);
  if ( *((_DWORD *)v4 + 12) == v11 )
  {
    v12 = *((_BYTE *)Buf1 + 52);
    v13 = v4[52];
    if ( (((unsigned __int8)v13 ^ v12) & 1) == 0
      && *((_QWORD *)v4 + 4) == Buf1[4]
      && *((_DWORD *)v4 + 11) == *((_DWORD *)Buf1 + 11)
      && *((_QWORD *)v4 + 2) == Buf1[2]
      && *((_QWORD *)v4 + 1) == Buf1[1]
      && *(_QWORD *)v4 == *Buf1
      && *((_DWORD *)v4 + 10) == *((_DWORD *)Buf1 + 10)
      && (((unsigned __int8)v13 ^ v12) & 4) == 0
      && (a3 & 1) == 0 )
    {
      goto LABEL_72;
    }
  }
  v14 = *((_DWORD *)v6 + 12);
  if ( !v14 )
  {
    v15 = *(__int64 **)(*((_QWORD *)v6 + 5) + 72LL);
    v120 = (ModernResourceEnforcer *)v15;
    v16 = *v15;
    v17 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, struct _RM_ENFORCEMENT_SETTINGS *))(*v15 + 32);
    if ( v17 == ModernResourceEnforcer::SetProcessConfig )
    {
      if ( v11 == 100 )
      {
        v102 = -1;
      }
      else
      {
        v102 = v11;
        if ( v11 != -1 )
          v102 = 100 * v11;
      }
      if ( *((_QWORD *)v4 + 4) == Buf1[4] )
      {
        v18 = 0LL;
      }
      else
      {
        v122 = Buf1[4];
        v18 = &v122;
      }
      v19 = Buf1[2];
      v111 = Buf1[1];
      v112 = *Buf1;
      v113 = v18;
      v123 = v19;
      if ( v19 )
        v20 = &v123;
      else
        v20 = 0LL;
      v21 = *(__int64 (__usercall **)@<rax>(ModernResourceEnforcer *__hidden@<rcx>, struct _RM_ACTIVITY_HOST *@<rdx>, unsigned int *@<r8>, unsigned __int64 *@<r9>, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(v16 + 64);
      v109 = v20;
      if ( v21 == ModernResourceEnforcer::SetApplicationProperties )
      {
        v22 = (unsigned __int16 *)((char *)v6 + 56);
        v101 = *((_DWORD *)v6 + 147);
        v23 = (struct _RM_ACTIVITY_HOST *)((char *)v6 + 520);
        v100 = *((_DWORD *)v6 + 148);
        v24 = *((_QWORD *)v6 + 3);
        v25 = v15 + 31;
        v105 = v24;
        v26 = (struct _RTL_CRITICAL_SECTION *)(v15 + 2);
        CriticalSection = (PRTL_CRITICAL_SECTION)(v15 + 2);
        v119 = 0LL;
        v107 = -1;
        v106 = v22;
        v110 = v23;
        v108 = 0;
        v114 = v15 + 31;
        while ( 1 )
        {
          RtlEnterCriticalSection(v26);
          memset_0(Destination, 0, 0x228uLL);
          wcscpy_s(Destination, 0xE8uLL, v22);
          memset(Buf1a, 0, sizeof(Buf1a));
          v145 = 0;
          v27 = RtlLengthSid(v23);
          memcpy_0(Buf1a, v23, v27);
          v146 = v101;
          v147 = v100;
          v148 = v105;
          if ( v25[2] )
          {
            v28 = Destination;
            v29 = 314159LL;
            do
            {
              v104 = RtlUpcaseUnicodeChar(*v28++);
              v29 = HIBYTE(v104) + 37 * ((unsigned __int8)v104 + 37 * v29);
            }
            while ( v28 < (WCHAR *)Buf1a );
            v30 = (unsigned __int8 *)Buf1a;
            v31 = 11LL;
            do
            {
              v32 = *v30;
              v30 += 8;
              v29 = *(v30 - 1)
                  + 37
                  * (*(v30 - 2)
                   + 37
                   * (*(v30 - 3)
                    + 37
                    * (*(v30 - 4) + 37 * (*(v30 - 5) + 37 * (*(v30 - 6) + 37 * (*(v30 - 7) + 37 * (v32 + 37 * v29)))))));
              --v31;
            }
            while ( v31 );
            v33 = v25[2] + 16 * (v29 & ((8LL << *((_BYTE *)v25 + 32)) - 1));
            v34 = *(__int64 **)v33;
            if ( *(_QWORD *)v33 )
            {
              v35 = **(__int64 ***)(v33 + 8);
              if ( v34 != v35 )
              {
                do
                {
                  v36 = v34[2];
                  if ( v36 >= v29 )
                  {
                    if ( v36 > v29 )
                      break;
                    if ( !_wcsicmp(Destination, (const wchar_t *)v34 + 12) && !memcmp_0(Buf1a, v34 + 61, 0x58uLL) )
                    {
                      v25 = v114;
                      goto LABEL_34;
                    }
                  }
                  v34 = (__int64 *)*v34;
                }
                while ( v34 != v35 );
                v25 = v114;
              }
            }
          }
          v34 = v25;
LABEL_34:
          if ( v34 == v25 )
            ApplicationState = 0LL;
          else
            ApplicationState = (struct EnforcerApplicationState *)(v34 + 72);
          v38 = v110;
          v39 = v106;
          v40 = v120;
          if ( !ApplicationState )
          {
            ApplicationState = ModernResourceEnforcer::CreateApplicationState(v120, v106, v110, v101, v100, v105);
            if ( !ApplicationState )
            {
              RtlLeaveCriticalSection(CriticalSection);
              v10 = -1LL;
              v50 = -1073741801;
              goto LABEL_60;
            }
          }
          *(_BYTE *)ApplicationState |= 0x80u;
          if ( &v96 == (__int64 *)-124LL )
          {
            v42 = v119;
          }
          else
          {
            if ( *(char *)ApplicationState < 0 )
            {
              v41 = v102;
              if ( v102 == -1 )
                v41 = -1;
              *((_WORD *)ApplicationState + 1) = v41;
            }
            if ( (*(_BYTE *)ApplicationState & 1) != 0 )
            {
              v42 = 0LL;
              v119 = 0LL;
            }
            else
            {
              v42 = &v107;
              v119 = &v107;
              v107 = v102;
            }
          }
          RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)v40 + 16));
          v43 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v40 + 104LL);
          if ( v43 == ModernResourceEnforcer::PsmSetApplicationProperties )
          {
            v127 = 0LL;
            v44 = 0;
            v128 = 0LL;
            v129 = 0LL;
            v130 = 0LL;
            v131 = 0LL;
            v132 = 0LL;
            if ( v42 )
            {
              v44 = 1;
              HIDWORD(v127) = *v42;
            }
            if ( v109 )
            {
              v45 = *v109;
              v44 |= 2u;
              if ( *v109 == -1LL )
                v45 = 0LL;
              v128 = v45;
            }
            v46 = v112;
            v47 = v44 | 4;
            if ( v112 == -1LL )
              v46 = 0LL;
            v10 = -1LL;
            v48 = v47 | 8;
            v129 = v46;
            v49 = v111;
            LODWORD(v127) = v48;
            if ( v111 == -1LL )
              v49 = 0LL;
            v130 = v49;
            if ( v113 )
            {
              v91 = *v113;
              LODWORD(v127) = v48 | 0x20;
              v132 = v91;
            }
            v50 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))v40
                   + 12))(
                    v38,
                    v101,
                    v106,
                    v100,
                    v105,
                    &v127);
            if ( v50 >= 0 )
              v50 = 0;
          }
          else
          {
            UserDataCount[0] = v100;
            v50 = v43(
                    v40,
                    v39,
                    v38,
                    v101,
                    *(_QWORD *)UserDataCount,
                    v105,
                    (unsigned int *)v42,
                    v109,
                    &v112,
                    &v111,
                    0LL,
                    v113);
            v10 = -1LL;
          }
          if ( v50 >= 0 )
            goto LABEL_60;
          if ( !v42 || v50 != -1073741776 )
            break;
          if ( (unsigned int)++v108 > 2 )
            goto LABEL_116;
          v25 = v114;
          v23 = v110;
          v26 = CriticalSection;
          v22 = v106;
        }
        if ( v50 != -1073741637 && v50 != -1073741776 )
          goto LABEL_60;
LABEL_116:
        v88 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v40 + 104LL);
        if ( v88 == ModernResourceEnforcer::PsmSetApplicationProperties )
          v89 = ModernResourceEnforcer::PsmSetApplicationProperties(
                  v40,
                  v106,
                  v110,
                  v101,
                  v100,
                  v105,
                  0LL,
                  v109,
                  &v112,
                  &v111,
                  0LL,
                  v113);
        else
          v89 = v88(v40, v106, v110, v101, v100, v105, 0LL, v109, &v112, &v111, 0LL, v113);
        v50 = v89;
LABEL_60:
        v6 = v124;
LABEL_61:
        if ( v50 < 0 )
          goto LABEL_71;
LABEL_62:
        v50 = 0;
        goto LABEL_63;
      }
      v92 = ((__int64 (__fastcall *)(__int64 *, struct _RM_ACTIVITY_HOST *, int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, _QWORD, unsigned __int64 *))v21)(
              v15,
              v6,
              &v102,
              v20,
              &v112,
              &v111,
              0LL,
              v18);
    }
    else
    {
      v92 = v17((ModernResourceEnforcer *)v15, v6, (struct _RM_ENFORCEMENT_SETTINGS *)Buf1);
    }
    v50 = v92;
    goto LABEL_61;
  }
  if ( v14 != 1 )
  {
    v50 = -1073741811;
    goto LABEL_71;
  }
  v50 = RmpEnforcementApplyLimitsProcessHost(v6, Buf1);
  if ( v50 >= 0 )
    goto LABEL_62;
LABEL_63:
  if ( v50 >= 0 )
  {
    v51 = v4[52];
    *(_QWORD *)v4 = *Buf1;
    *((_QWORD *)v4 + 1) = Buf1[1];
    *((_QWORD *)v4 + 2) = Buf1[2];
    *((_QWORD *)v4 + 3) = Buf1[3];
    *((_QWORD *)v4 + 4) = Buf1[4];
    *((_DWORD *)v4 + 11) = *((_DWORD *)Buf1 + 11);
    *((_DWORD *)v4 + 12) = *((_DWORD *)Buf1 + 12);
    v52 = v4[52] ^ (*((_BYTE *)Buf1 + 52) ^ v51) & 1;
    v4[52] = v52;
    if ( *((_DWORD *)v4 + 10) == *((_DWORD *)Buf1 + 10) && ((*((_BYTE *)Buf1 + 52) ^ (unsigned __int8)v52) & 4) == 0 )
      goto LABEL_66;
    v50 = RmpActivityHostApplyExecutionSpeed(v6, (__int64)Buf1);
    if ( v50 >= 0 )
    {
LABEL_66:
      v53 = Buf1[2];
      if ( !*((_DWORD *)v6 + 12) )
      {
        v54 = *((_QWORD *)v6 + 123);
        if ( *((_QWORD *)v6 + 117) < v53 )
          v53 = *((_QWORD *)v6 + 117);
        if ( v53 != v54 )
        {
          v84 = (struct _RM_ACTIVITY_HOST *)((char *)v6 + 56);
          v85 = *(ExecutionModel::ResourceManager **)(*((_QWORD *)v6 + 5) + 3344LL);
          v86 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *__hidden, struct _RM_PSM_HOST_INFO *, unsigned __int64, unsigned __int64))(*(_QWORD *)v85 + 64LL);
          v87 = v86 == ExecutionModel::ResourceManager::CommitMemoryLimitChange
              ? ExecutionModel::ResourceManager::CommitMemoryLimitChange(v85, v84, v54, v53)
              : v86(v85, v84, v54, v53);
          if ( v87 >= 0 )
            *((_QWORD *)v6 + 123) = v53;
        }
      }
      v50 = 0;
    }
  }
LABEL_71:
  v103 = v50;
  if ( v50 >= 0 )
  {
LABEL_72:
    v50 = 0;
    v103 = 0;
  }
LABEL_73:
  v55 = dword_18004C030;
  if ( dword_18004C030 )
  {
    memset_0(v133, 0, 0x230uLL);
    if ( *((_DWORD *)v6 + 12) )
    {
      FirstResourceSet = RmpActivityHostGetFirstResourceSet((__int64)v6, 1);
      if ( FirstResourceSet )
      {
        StringCchCopyW(v133, v94, *(char **)(FirstResourceSet + 32));
        v50 = v103;
        v55 = dword_18004C030;
      }
      v95 = *((_QWORD *)v6 + 5);
      v68 = *((_DWORD *)v6 + 14);
      v70 = v140;
      v67 = v139;
      v134 = *(_OWORD *)(v95 + 3204);
      v135 = *(_OWORD *)(v95 + 3220);
      v136 = *(_OWORD *)(v95 + 3236);
      v137 = *(_OWORD *)(v95 + 3252);
      v138 = *(_DWORD *)(v95 + 3268);
      v77 = *((_QWORD *)v6 + 3);
    }
    else
    {
      v56 = (__int128 *)((char *)v6 + 56);
      v57 = 3LL;
      v58 = (unsigned __int16 *)v133;
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
      v67 = *((_DWORD *)v6 + 147);
      v68 = 0;
      v69 = v56[1];
      v70 = *((_DWORD *)v6 + 148);
      *(_OWORD *)v58 = *v56;
      v71 = v56[2];
      *((_OWORD *)v58 + 1) = v69;
      v72 = v56[3];
      *((_OWORD *)v58 + 2) = v71;
      v73 = v56[4];
      v74 = *((_DWORD *)v6 + 146);
      *((_OWORD *)v58 + 3) = v72;
      v75 = *(_OWORD *)((char *)v6 + 536);
      *((_OWORD *)v58 + 4) = v73;
      v138 = v74;
      v76 = *(_OWORD *)((char *)v6 + 520);
      v77 = *((_QWORD *)v6 + 75);
      v135 = v75;
      v78 = *(_OWORD *)((char *)v6 + 568);
      v139 = v67;
      v134 = v76;
      v79 = *(_OWORD *)((char *)v6 + 552);
      v140 = v70;
      v137 = v78;
      v136 = v79;
    }
    v142 = v68;
    v141 = v77;
    if ( v55 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
    {
      v154 = 4LL;
      v153 = &v103;
      while ( *(_WORD *)&v133[2 * v10++ + 2] != 0 )
        ;
      v157 = 0;
      v155 = (unsigned __int16 *)v133;
      v156 = 2 * v10 + 2;
      if ( BYTE1(v134) > 0xFu )
        v81 = 15;
      else
        v81 = BYTE1(v134);
      v160 = 0;
      v159 = 4 * v81 + 8;
      v158 = &v134;
      v161 = &v115;
      v163 = &v116;
      v165 = &v141;
      v167 = &v117;
      v118 = *((_DWORD *)v4 + 12);
      v169 = &v118;
      v171 = v4 + 16;
      v175 = v4 + 8;
      v98 = v4[40];
      v177 = &v98;
      v82 = (v4[52] & 4) != 0;
      v115 = v67;
      v99 = v82;
      v179 = &v99;
      v125 = *((_QWORD *)v4 + 4);
      v181 = &v125;
      v162 = 4LL;
      v116 = v70;
      v164 = 4LL;
      v166 = 8LL;
      v117 = v68;
      v168 = 4LL;
      v170 = 4LL;
      v172 = 8LL;
      v173 = v4;
      v174 = 8LL;
      v176 = 8LL;
      v178 = 1LL;
      v180 = 1LL;
      v182 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041006 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      v150 = &unk_180041011;
      UserData.Reserved = 2;
      v151 = 246;
      v152 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x10u, &UserData);
      return v103;
    }
  }
  return (unsigned int)v50;
}
