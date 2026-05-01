/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18000B500 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180013738 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800141A0 (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018264 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18001AFF4 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EC4C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x1800332A8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800336D8 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  int v4; // r15d
  char v5; // bl
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int128 v9; // xmm2
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  int v12; // edx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // r13d
  const struct _TlgProvider_t *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int128 *v21; // rax
  __int64 v22; // r8
  unsigned __int16 *v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // r8d
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  int v37; // eax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int v40; // eax
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rax
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rtt
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r13
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // r12d
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rcx
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rbx
  __int64 v65; // r13
  __int64 v66; // rbx
  int v67; // ecx
  struct _RM_PARTITION *v68; // rcx
  const struct _TlgProvider_t *v69; // rcx
  const GUID *v70; // r8
  const GUID *v71; // r9
  const GUID *v72; // r8
  const GUID *v73; // r9
  const GUID *v74; // r8
  const GUID *v75; // r9
  int v76; // eax
  __int64 FirstResourceSet; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // rtt
  __int64 v81; // rdi
  int v82; // ecx
  void *v83; // rcx
  void *v84; // rcx
  int v85; // [rsp+48h] [rbp-C0h] BYREF
  int v86; // [rsp+4Ch] [rbp-BCh]
  int v87; // [rsp+50h] [rbp-B8h]
  NTSTATUS InformationJobObject; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v89; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v90; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v91; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v92; // [rsp+70h] [rbp-98h]
  int v93; // [rsp+78h] [rbp-90h] BYREF
  int v94; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v95; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v96; // [rsp+88h] [rbp-80h] BYREF
  __int64 v97; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v98; // [rsp+98h] [rbp-70h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v100; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v102; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-48h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR v105; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v106; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v107; // [rsp+F8h] [rbp-10h]
  __int64 v108; // [rsp+100h] [rbp-8h]
  __int64 v109; // [rsp+108h] [rbp+0h]
  _BYTE v110[48]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v111; // [rsp+148h] [rbp+40h]
  unsigned __int64 v112[2]; // [rsp+198h] [rbp+90h] BYREF
  unsigned __int64 v113; // [rsp+1A8h] [rbp+A0h]
  unsigned __int64 v114; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 v115; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v116; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v117; // [rsp+1D0h] [rbp+C8h]
  __int64 v118; // [rsp+1D8h] [rbp+D0h]
  _OWORD v119[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v120; // [rsp+218h] [rbp+110h]
  _BYTE v121[4]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v122; // [rsp+22Ch] [rbp+124h]
  __int64 v123; // [rsp+240h] [rbp+138h]
  __int64 v124; // [rsp+248h] [rbp+140h]
  __int64 v125; // [rsp+258h] [rbp+150h]
  __int64 v126; // [rsp+268h] [rbp+160h]
  __int64 v127; // [rsp+270h] [rbp+168h]
  __int64 v128; // [rsp+280h] [rbp+178h]
  __int64 v129; // [rsp+288h] [rbp+180h]
  __int64 v130; // [rsp+290h] [rbp+188h]
  __int64 v131; // [rsp+298h] [rbp+190h]
  __int64 v132; // [rsp+2A0h] [rbp+198h]
  __int64 v133; // [rsp+2A8h] [rbp+1A0h]
  __int64 v134; // [rsp+2C0h] [rbp+1B8h]
  __int64 v135; // [rsp+2C8h] [rbp+1C0h]
  __int64 v136; // [rsp+2D0h] [rbp+1C8h]
  __int64 v137; // [rsp+2D8h] [rbp+1D0h]
  __int64 v138; // [rsp+2E0h] [rbp+1D8h]
  __int64 v139; // [rsp+2E8h] [rbp+1E0h]
  __int64 v140; // [rsp+2F0h] [rbp+1E8h]
  __int64 v141; // [rsp+2F8h] [rbp+1F0h]
  __int64 v142; // [rsp+300h] [rbp+1F8h]
  __int64 v143; // [rsp+308h] [rbp+200h]
  _QWORD JobInformation[6]; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int16 v145[232]; // [rsp+348h] [rbp+240h] BYREF
  __int128 v146; // [rsp+518h] [rbp+410h]
  __int128 v147; // [rsp+528h] [rbp+420h]
  __int128 v148; // [rsp+538h] [rbp+430h]
  __int128 v149; // [rsp+548h] [rbp+440h]
  int v150; // [rsp+558h] [rbp+450h]
  int v151; // [rsp+55Ch] [rbp+454h]
  int v152; // [rsp+560h] [rbp+458h]
  __int64 v153; // [rsp+568h] [rbp+460h] BYREF
  int v154; // [rsp+570h] [rbp+468h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+578h] [rbp+470h] BYREF
  char v156[544]; // [rsp+618h] [rbp+510h] BYREF
  char v157; // [rsp+838h] [rbp+730h] BYREF
  int v158; // [rsp+840h] [rbp+738h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+848h] [rbp+740h] BYREF
  void *v160; // [rsp+858h] [rbp+750h]
  int v161; // [rsp+860h] [rbp+758h]
  int v162; // [rsp+864h] [rbp+75Ch]
  struct _EVENT_DATA_DESCRIPTOR v163; // [rsp+868h] [rbp+760h] BYREF
  void *v164; // [rsp+878h] [rbp+770h]
  int v165; // [rsp+880h] [rbp+778h]
  int v166; // [rsp+884h] [rbp+77Ch]
  char *v167; // [rsp+888h] [rbp+780h]
  __int64 v168; // [rsp+890h] [rbp+788h]
  int *v169; // [rsp+898h] [rbp+790h]
  __int64 v170; // [rsp+8A0h] [rbp+798h]
  unsigned __int64 *v171; // [rsp+8A8h] [rbp+7A0h]
  __int64 v172; // [rsp+8B0h] [rbp+7A8h]
  struct _EVENT_DATA_DESCRIPTOR v173; // [rsp+8C8h] [rbp+7C0h] BYREF
  void *v174; // [rsp+8D8h] [rbp+7D0h]
  int v175; // [rsp+8E0h] [rbp+7D8h]
  int v176; // [rsp+8E4h] [rbp+7DCh]
  __int64 *v177; // [rsp+8E8h] [rbp+7E0h]
  __int64 v178; // [rsp+8F0h] [rbp+7E8h]
  unsigned __int16 *v179; // [rsp+8F8h] [rbp+7F0h]
  int v180; // [rsp+900h] [rbp+7F8h]
  int v181; // [rsp+904h] [rbp+7FCh]
  int *v182; // [rsp+908h] [rbp+800h]
  __int64 v183; // [rsp+910h] [rbp+808h]
  __int64 *v184; // [rsp+918h] [rbp+810h]
  __int64 v185; // [rsp+920h] [rbp+818h]
  unsigned __int64 *v186; // [rsp+928h] [rbp+820h]
  __int64 v187; // [rsp+930h] [rbp+828h]
  __int64 *v188; // [rsp+938h] [rbp+830h]
  __int64 v189; // [rsp+940h] [rbp+838h]
  unsigned __int64 *v190; // [rsp+948h] [rbp+840h]
  __int64 v191; // [rsp+950h] [rbp+848h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+968h] [rbp+860h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+988h] [rbp+880h]
  __int64 v194; // [rsp+990h] [rbp+888h]
  __int64 *v195; // [rsp+998h] [rbp+890h]
  __int64 v196; // [rsp+9A0h] [rbp+898h]
  __int64 *v197; // [rsp+9A8h] [rbp+8A0h]
  __int64 v198; // [rsp+9B0h] [rbp+8A8h]
  EVENT_DATA_DESCRIPTOR v199; // [rsp+9C8h] [rbp+8C0h] BYREF
  int *v200; // [rsp+9E8h] [rbp+8E0h]
  __int64 v201; // [rsp+9F0h] [rbp+8E8h]
  __int64 *v202; // [rsp+9F8h] [rbp+8F0h]
  __int64 v203; // [rsp+A00h] [rbp+8F8h]
  EVENT_DATA_DESCRIPTOR v204; // [rsp+A18h] [rbp+910h] BYREF
  int *v205; // [rsp+A38h] [rbp+930h]
  __int64 v206; // [rsp+A40h] [rbp+938h]
  __int64 *v207; // [rsp+A48h] [rbp+940h]
  __int64 v208; // [rsp+A50h] [rbp+948h]

  v4 = 0;
  v98 = 0LL;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041561 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v160 = &unk_18004156C;
    UserData.Reserved = 2;
    v161 = 32;
    v162 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  *((_DWORD *)a2 + 283) &= ~1u;
  v5 = 1;
  v6 = 0;
  v86 = 1;
  v7 = __ROL4__(1, 1);
  v87 = v7;
  if ( (v7 & 2) != 0 )
    v6 = *((_DWORD *)a2 + 164);
  if ( v6 )
  {
    v8 = *((_QWORD *)a2 + 5);
    if ( (*(_BYTE *)(v8 + 1524) & 2) == 0 )
    {
      v9 = *((_OWORD *)a2 + 43);
      v10 = *((_QWORD *)a2 + 90);
      v119[0] = *((_OWORD *)a2 + 42);
      v11 = *((_OWORD *)a2 + 44);
      v120 = v10;
      v119[2] = v11;
      v119[1] = v9;
      if ( (_QWORD)v9 )
      {
        v12 = *((_DWORD *)a2 + 14);
        v13 = 0LL;
        v14 = 0LL;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
LABEL_60:
            LOBYTE(v7) = v87;
            v5 = v86;
            goto LABEL_61;
          }
          InformationJobObject = NtQueryInformationJobObject(
                                   *((HANDLE *)a2 + 92),
                                   MaxJobObjectInfoClass|0x10,
                                   JobInformation,
                                   0x28u,
                                   0LL);
          LODWORD(v69) = InformationJobObject;
          if ( InformationJobObject < 0 )
          {
            if ( (unsigned int)dword_18004D030 > 4
              && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
            {
              v194 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              v99 = *((_QWORD *)a2 + 3);
              v195 = &v99;
              LODWORD(v91) = *((_DWORD *)a2 + 16);
              v197 = &v91;
              v196 = 8LL;
              v198 = 4LL;
              TlgWrite(v69, &unk_18004428B, v70, v71, 5u, &pData);
              LODWORD(v69) = InformationJobObject;
            }
            if ( (int)v69 < 0 )
              goto LABEL_60;
            v13 = v89;
LABEL_18:
            if ( (a2[820] & 0x10) != 0
              && (v76 = RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)a2, &v90), v13 = v89, v76 >= 0) )
            {
              v19 = v90;
            }
            else
            {
              v19 = 0LL;
              v90 = 0LL;
            }
            if ( v19 >= v13 )
              v19 = v13;
            v20 = v13 - v19;
            if ( v13 && v20 <= 1 )
              v20 = 1LL;
            v101 = v97 + v20;
            if ( dword_18004D030 )
            {
              memset_0(v145, 0, 0x230uLL);
              if ( *((_DWORD *)a2 + 14) )
              {
                FirstResourceSet = RmpActivityHostGetFirstResourceSet(a2, 1LL);
                if ( FirstResourceSet )
                {
                  StringCchCopyW(v145, v78, *(const unsigned __int16 **)(FirstResourceSet + 32));
                  v13 = v89;
                }
                v79 = *((_QWORD *)a2 + 5);
                v32 = v152;
                v146 = *(_OWORD *)(v79 + 1388);
                v147 = *(_OWORD *)(v79 + 1404);
                v148 = *(_OWORD *)(v79 + 1420);
                v149 = *(_OWORD *)(v79 + 1436);
                v150 = *(_DWORD *)(v79 + 1452);
                v153 = *((_QWORD *)a2 + 3);
                v154 = *((_DWORD *)a2 + 16);
              }
              else
              {
                v21 = (__int128 *)(a2 + 64);
                v22 = 3LL;
                v23 = v145;
                do
                {
                  v23 += 64;
                  v24 = *v21;
                  v25 = v21[1];
                  v21 += 8;
                  *((_OWORD *)v23 - 8) = v24;
                  v26 = *(v21 - 6);
                  *((_OWORD *)v23 - 7) = v25;
                  v27 = *(v21 - 5);
                  *((_OWORD *)v23 - 6) = v26;
                  v28 = *(v21 - 4);
                  *((_OWORD *)v23 - 5) = v27;
                  v29 = *(v21 - 3);
                  *((_OWORD *)v23 - 4) = v28;
                  v30 = *(v21 - 2);
                  *((_OWORD *)v23 - 3) = v29;
                  v31 = *(v21 - 1);
                  *((_OWORD *)v23 - 2) = v30;
                  *((_OWORD *)v23 - 1) = v31;
                  --v22;
                }
                while ( v22 );
                v32 = *((_DWORD *)a2 + 150);
                v33 = v21[1];
                *(_OWORD *)v23 = *v21;
                v34 = v21[2];
                *((_OWORD *)v23 + 1) = v33;
                v35 = v21[3];
                *((_OWORD *)v23 + 2) = v34;
                v36 = v21[4];
                v37 = *((_DWORD *)a2 + 148);
                *((_OWORD *)v23 + 3) = v35;
                v38 = *((_OWORD *)a2 + 34);
                *((_OWORD *)v23 + 4) = v36;
                v150 = v37;
                v39 = *((_OWORD *)a2 + 33);
                v40 = *((_DWORD *)a2 + 149);
                v147 = v38;
                v41 = *((_OWORD *)a2 + 36);
                v151 = v40;
                v42 = *((_QWORD *)a2 + 76);
                v146 = v39;
                v43 = *((_OWORD *)a2 + 35);
                v152 = v32;
                v149 = v41;
                v148 = v43;
                v153 = v42;
                v154 = 0;
              }
              if ( (unsigned int)dword_18004D030 > 4
                && (qword_18004D040 & 1) != 0
                && (qword_18004D048 & 1) == qword_18004D048 )
              {
                v178 = 8LL;
                v177 = &v153;
                v44 = -1LL;
                while ( v145[++v44] != 0 )
                  ;
                v181 = 0;
                v179 = v145;
                v180 = 2 * v44 + 2;
                v182 = &v93;
                v184 = &v101;
                v186 = &v89;
                v188 = &v97;
                v190 = &v90;
                v93 = v32;
                v183 = 4LL;
                v185 = 8LL;
                v187 = 8LL;
                v189 = 8LL;
                v191 = 8LL;
                *(_DWORD *)&v105.Level = 4;
                v173.Ptr = (ULONGLONG)off_18004D038;
                *(_DWORD *)&v105.Id = ((unsigned int)&unk_180041C4E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v105.Keyword = 1LL;
                v173.Size = *(unsigned __int16 *)off_18004D038;
                v174 = &unk_180041C59;
                v173.Reserved = 2;
                v175 = 149;
                v176 = 1;
                EventWriteTransfer(RegHandle, &v105, 0LL, 0LL, 9u, &v173);
                v13 = v89;
              }
            }
            v46 = v13 + v97;
            v98 = v46;
            v47 = *((_QWORD *)a2 + 123);
            v48 = *((_QWORD *)a2 + 126);
            v49 = *((_QWORD *)a2 + 124);
            if ( v46 >= v47 )
            {
              if ( v46 < v49 )
              {
                v50 = *((_QWORD *)a2 + 123);
                v47 = *((_QWORD *)a2 + 124);
              }
              else if ( v46 < *((_QWORD *)a2 + 125) )
              {
                v47 = *((_QWORD *)a2 + 125);
                v50 = *((_QWORD *)a2 + 124);
              }
              else
              {
                v50 = *((_QWORD *)a2 + 125);
                v47 = -1LL;
              }
            }
            else
            {
              v50 = 0LL;
            }
            if ( v48 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              v51 = v48 >> 4;
            }
            else
            {
              v51 = v46 >> 3;
              if ( v46 >> 3 < 0x100000 )
              {
                v51 = 0x100000LL;
                goto LABEL_42;
              }
            }
            if ( v51 <= 0x1000 )
              v51 = 4096LL;
LABEL_42:
            v52 = v51 + v46 - 1;
            v53 = v52 / v51 * v51;
            v54 = -1LL;
            v108 = (v52 / v51 * (unsigned __int128)v51) >> 64;
            if ( is_mul_ok(v52 / v51, v51) )
              v54 = v53;
            if ( v48 - 1 > 0xFFFFFFFFFFFFFFFDuLL
              || v54 <= v48
              || (v80 = v51 + v48 - 1,
                  v109 = (v80 / v51 * (unsigned __int128)v51) >> 64,
                  v54 = v80 / v51 * v51,
                  is_mul_ok(v80 / v51, v51)) )
            {
              if ( v54 != -1LL )
              {
                v55 = v54 + v51;
                if ( v54 + v51 >= v54 )
                  goto LABEL_47;
              }
            }
            else
            {
              v54 = -1LL;
            }
            v55 = -1LL;
LABEL_47:
            if ( v48 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( v54 >= v48 )
                v54 = v48;
              if ( v48 < v55 )
                v55 = v48;
            }
            v56 = 2 * v51;
            if ( v56 >= v54 )
              v56 = v54;
            v57 = v54 - v56;
            if ( v50 <= v57 )
              v50 = v57;
            if ( v46 >= v49 && *((_DWORD *)a2 + 14) == 1 )
            {
              RmpCommitValuesAdd(v46, 0x100000LL, &v102);
              if ( v47 >= v102 )
                v47 = v102;
            }
            if ( v47 >= v55 && v46 <= v48 )
              v47 = v55;
            *(_QWORD *)&v119[0] = v50;
            *((_QWORD *)&v119[0] + 1) = v47;
            if ( v46 >= *((_QWORD *)a2 + 123) )
            {
              if ( v46 < *((_QWORD *)a2 + 124) )
                v58 = 2LL;
              else
                v58 = 4 - (unsigned int)(v46 < *((_QWORD *)a2 + 125));
            }
            else
            {
              v58 = 1LL;
            }
            RmpActivityHostUpdateCommitUseState(a2, v46, v58);
            v92 = v98;
            if ( v98 > *((_QWORD *)a2 + 85) && v98 < v55 )
            {
              v61 = *((_QWORD *)a2 + 5);
              v103 = *((_QWORD *)a2 + 6);
              v60 = v103;
              memset_0(v110, 0, 0x80uLL);
              memset_0(v121, 0, 0xE8uLL);
              v62 = *(_QWORD *)(v60 + 32);
              v122 = -1LL;
              NtManagePartition(v62, 0LL, 0LL, v121, 232);
              v63 = RmpPageSize;
              v64 = RmpPageSize * v143;
              memset_0(v112, 0, 0x50uLL);
              v118 += v135 + v134 + v141 + v140 + v139 + v138 + v137 + v136;
              v112[1] = v63 * v124 - v64;
              v115 = v63 * v125 - v64;
              v114 = v63 * v124 - v63 * v123;
              v113 = v63 * v123 - v64;
              v116 = v63 * (v126 + v127 + v129 + v128 + v133 + v132 + v130 + v131);
              v117 = v115 - v116;
              v112[0] = v63 * v142 - v64;
              RmpPolicyComputeUsageLimits(
                (struct _RM_USAGE_LIMIT_SETTINGS *)(v61 + 400),
                (struct _RM_REMEDIATION_ACTIONS *)(v61 + 456),
                (struct _RM_SYSTEM_MEMORY_METRICS *)v112,
                v112[0],
                (struct _RM_RESOURCE_USAGE_LIMITS *)v110);
              v65 = v55 - v92 + 1;
              v66 = v111 - v113;
              if ( (__int64)(v111 - v113) < v65 )
              {
                v81 = v103;
                RmpPolicyPopulateActivityHostMetrics(
                  v103,
                  0,
                  v103 + 144,
                  0x43u,
                  (unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
                  (void *)2);
                RmpPolicyGenerateReclaimListForCommit(v81, v81 + 144, 0LL, v65 - v66, 0, 2);
                if ( *(_DWORD *)(v81 + 184) )
                  RmpPolicyReclaimHostList(v81 + 144, 2LL, 8LL);
              }
            }
            RmpActivityHostApplyEnforcementSettings(
              (struct _RM_ACTIVITY_HOST *)a2,
              (struct _RM_ENFORCEMENT_SETTINGS *)v119,
              1u);
            goto LABEL_60;
          }
          v13 = JobInformation[0];
          v14 = JobInformation[2];
        }
        else
        {
          v15 = *(_QWORD *)(v8 + 56);
          v16 = *((_QWORD *)a2 + 3);
          v17 = *((_DWORD *)a2 + 150);
          LODWORD(v92) = *((_DWORD *)a2 + 149);
          v95 = v16;
          v85 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *, _QWORD))(v15 + 104))(
                  a2 + 528,
                  (unsigned int)v92,
                  a2 + 64,
                  v17,
                  v16,
                  &v100,
                  0LL);
          LODWORD(v18) = v85;
          if ( v85 < 0 )
          {
            if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v85, 1uLL) )
            {
              v201 = 4LL;
              v200 = &v85;
              v202 = &v95;
              v203 = 8LL;
              TlgWrite(v18, &unk_18003F557, v72, v73, 4u, &v199);
              LODWORD(v18) = v85;
            }
          }
          else
          {
            v85 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *))(v15 + 176))(
                    a2 + 528,
                    (unsigned int)v92,
                    a2 + 64,
                    v17,
                    v95,
                    &v96);
            LODWORD(v18) = v85;
            if ( v85 < 0 )
            {
              if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v85, 1uLL) )
              {
                v206 = 4LL;
                v205 = &v85;
                v207 = &v95;
                v208 = 8LL;
                TlgWrite(v18, &unk_18003F59F, v74, v75, 4u, &v204);
                LODWORD(v18) = v85;
              }
            }
            else
            {
              v107 = (v96 * (unsigned __int128)0x1000uLL) >> 64;
              v14 = v96 << 12;
              if ( is_mul_ok(v96, 0x1000uLL) )
              {
                v96 <<= 12;
                LODWORD(v18) = 0;
              }
              else
              {
                v14 = -1LL;
                v96 = -1LL;
                LODWORD(v18) = -1073741675;
              }
              v13 = v100;
              v85 = (int)v18;
            }
          }
          if ( (int)v18 < 0 )
            goto LABEL_60;
        }
        v89 = v13;
        v97 = v14;
        InformationJobObject = 0;
        goto LABEL_18;
      }
    }
  }
LABEL_61:
  if ( dword_18004D030 )
  {
    RmpActivityHostGetTracingId((struct _RM_ACTIVITY_HOST *)a2, (struct _RM_ACTIVITY_HOST_TRACING_ID *)v156);
    if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      v168 = 8LL;
      v167 = &v157;
      v94 = v158;
      v169 = &v94;
      v171 = &v98;
      v170 = 4LL;
      v172 = 8LL;
      *(_DWORD *)&v106.Level = 516;
      v163.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&v106.Id = ((unsigned int)&unk_18004177D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v106.Keyword = 1LL;
      v163.Size = *(unsigned __int16 *)off_18004D038;
      v164 = &unk_180041788;
      v163.Reserved = 2;
      v165 = 57;
      v166 = 1;
      EventWriteTransfer(RegHandle, &v106, 0LL, 0LL, 5u, &v163);
    }
  }
  if ( *((int *)a2 + 5) >= 0 )
  {
    if ( (v5 & 3) != 0 )
      v4 = *((_DWORD *)a2 + 158);
    if ( (v7 & 3) != 0 )
      v4 += *((_DWORD *)a2 + 164);
    if ( !v4 )
    {
      RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)a2);
      if ( (a2[816] & 3) == 0 && (a2[1132] & 1) == 0 )
        RmpActivityHostDelete((struct _RM_ACTIVITY_HOST *)a2);
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v59 = _InterlockedDecrement((volatile signed __int32 *)a2 + 4);
  if ( v59 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v59 )
  {
    v67 = *((_DWORD *)a2 + 8);
    if ( v67 )
    {
      v82 = v67 - 1;
      if ( v82 )
      {
        if ( v82 == 1 && !*((_DWORD *)a2 + 22) && !*((_DWORD *)a2 + 23) )
          NtDeleteWnfStateName(a2 + 88);
      }
      else
      {
        RmpResourceSetCleanup((struct _RM_RESOURCE_SET *)a2);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 880));
      if ( *((_DWORD *)a2 + 14) == 1 )
      {
        v83 = (void *)*((_QWORD *)a2 + 91);
        if ( v83 )
          CloseHandle(v83);
        v84 = (void *)*((_QWORD *)a2 + 92);
        if ( v84 )
          CloseHandle(v84);
      }
      v68 = (struct _RM_PARTITION *)*((_QWORD *)a2 + 6);
      if ( v68 )
        RmpPartitionRelease(v68);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
