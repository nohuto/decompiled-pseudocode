/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180007520
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180002EF0 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000326C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800074C0 (-RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(__int64 *a1, char a2, int a3)
{
  int v3; // r9d
  unsigned int v4; // edi
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int16 v7; // ax
  unsigned __int64 *v8; // r14
  struct _RM_ACTIVITY_HOST *v9; // r15
  int v10; // ecx
  unsigned __int64 *v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  char *v16; // r13
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  const struct _TlgProvider_t *v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // rsi
  __int64 **v28; // rdx
  int v29; // ebx
  int v30; // ecx
  __int64 v31; // r11
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 FirstResourceSet; // rcx
  int v36; // r9d
  unsigned __int64 v37; // rdx
  int v38; // eax
  int (*v39)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // rax
  unsigned int *v40; // r14
  unsigned int *Heap; // rsi
  char *v42; // r12
  char *v43; // r13
  int v44; // eax
  int v45; // ebx
  unsigned int v46; // eax
  unsigned int *v47; // rbx
  __int64 v48; // r15
  int (*v49)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r14
  unsigned int v50; // esi
  int v51; // ecx
  int v53; // ecx
  unsigned int v54; // ecx
  __int64 *v55; // rsi
  __int64 v56; // r14
  __int16 v57; // dx
  __int64 v58; // rbx
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r10
  PVOID ProcessHeap; // rcx
  const struct _TlgProvider_t *v63; // rcx
  const GUID *v64; // r8
  const GUID *v65; // r9
  const GUID *v66; // r8
  const GUID *v67; // r9
  const GUID *v68; // r8
  const GUID *v69; // r9
  int v70; // eax
  __int64 v71; // rdx
  unsigned __int64 v72; // rax
  int IsActivityHostTooLargeForSwap; // eax
  __int16 v74; // [rsp+48h] [rbp-C0h]
  bool v75; // [rsp+4Ah] [rbp-BEh] BYREF
  unsigned int v76; // [rsp+4Ch] [rbp-BCh]
  int v77; // [rsp+50h] [rbp-B8h] BYREF
  NTSTATUS InformationJobObject; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v79; // [rsp+58h] [rbp-B0h] BYREF
  struct _RM_ACTIVITY_HOST *v80; // [rsp+60h] [rbp-A8h]
  void *ProcessHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v82; // [rsp+70h] [rbp-98h]
  __int16 v83; // [rsp+72h] [rbp-96h]
  unsigned int v84; // [rsp+74h] [rbp-94h] BYREF
  __int64 v85; // [rsp+78h] [rbp-90h]
  __int64 v86; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v87; // [rsp+88h] [rbp-80h]
  unsigned __int64 v88; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v89; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 *v90; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v91; // [rsp+A8h] [rbp-60h]
  int v92; // [rsp+B0h] [rbp-58h] BYREF
  int v93; // [rsp+B4h] [rbp-54h] BYREF
  int v94; // [rsp+B8h] [rbp-50h]
  unsigned int v95; // [rsp+BCh] [rbp-4Ch] BYREF
  __int64 v96; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v97; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v98; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v99; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v100; // [rsp+E0h] [rbp-28h] BYREF
  int (*v101)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // [rsp+E8h] [rbp-20h]
  __int64 v102; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v103; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v104; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v105; // [rsp+108h] [rbp+0h]
  __int64 v106; // [rsp+110h] [rbp+8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DESCRIPTOR v108; // [rsp+128h] [rbp+20h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+138h] [rbp+30h] BYREF
  char v110; // [rsp+148h] [rbp+40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+150h] [rbp+48h] BYREF
  _QWORD JobInformation[5]; // [rsp+180h] [rbp+78h] BYREF
  _WORD v113[268]; // [rsp+1A8h] [rbp+A0h] BYREF
  int v114; // [rsp+3C0h] [rbp+2B8h]
  char v115; // [rsp+3C8h] [rbp+2C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+3D8h] [rbp+2D0h] BYREF
  void *v117; // [rsp+3E8h] [rbp+2E0h]
  int v118; // [rsp+3F0h] [rbp+2E8h]
  int v119; // [rsp+3F4h] [rbp+2ECh]
  __int64 *v120; // [rsp+3F8h] [rbp+2F0h]
  __int64 v121; // [rsp+400h] [rbp+2F8h]
  __int64 *v122; // [rsp+408h] [rbp+300h]
  __int64 v123; // [rsp+410h] [rbp+308h]
  __int64 *v124; // [rsp+418h] [rbp+310h]
  __int64 v125; // [rsp+420h] [rbp+318h]
  bool *v126; // [rsp+428h] [rbp+320h]
  __int64 v127; // [rsp+430h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+448h] [rbp+340h] BYREF
  void *v129; // [rsp+458h] [rbp+350h]
  int v130; // [rsp+460h] [rbp+358h]
  int v131; // [rsp+464h] [rbp+35Ch]
  char *v132; // [rsp+468h] [rbp+360h]
  __int64 v133; // [rsp+470h] [rbp+368h]
  _WORD *v134; // [rsp+478h] [rbp+370h]
  int v135; // [rsp+480h] [rbp+378h]
  int v136; // [rsp+484h] [rbp+37Ch]
  int *v137; // [rsp+488h] [rbp+380h]
  __int64 v138; // [rsp+490h] [rbp+388h]
  unsigned __int64 *v139; // [rsp+498h] [rbp+390h]
  __int64 v140; // [rsp+4A0h] [rbp+398h]
  unsigned __int64 *v141; // [rsp+4A8h] [rbp+3A0h]
  __int64 v142; // [rsp+4B0h] [rbp+3A8h]
  unsigned __int64 *v143; // [rsp+4B8h] [rbp+3B0h]
  __int64 v144; // [rsp+4C0h] [rbp+3B8h]
  unsigned __int64 *v145; // [rsp+4C8h] [rbp+3C0h]
  __int64 v146; // [rsp+4D0h] [rbp+3C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4E8h] [rbp+3E0h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+508h] [rbp+400h]
  __int64 v149; // [rsp+510h] [rbp+408h]
  __int64 *v150; // [rsp+518h] [rbp+410h]
  __int64 v151; // [rsp+520h] [rbp+418h]
  int *v152; // [rsp+528h] [rbp+420h]
  __int64 v153; // [rsp+530h] [rbp+428h]
  EVENT_DATA_DESCRIPTOR v154; // [rsp+548h] [rbp+440h] BYREF
  int *v155; // [rsp+568h] [rbp+460h]
  __int64 v156; // [rsp+570h] [rbp+468h]
  __int64 *v157; // [rsp+578h] [rbp+470h]
  __int64 v158; // [rsp+580h] [rbp+478h]
  EVENT_DATA_DESCRIPTOR v159; // [rsp+598h] [rbp+490h] BYREF
  int *v160; // [rsp+5B8h] [rbp+4B0h]
  __int64 v161; // [rsp+5C0h] [rbp+4B8h]
  __int64 *v162; // [rsp+5C8h] [rbp+4C0h]
  __int64 v163; // [rsp+5D0h] [rbp+4C8h]

  v3 = *((_DWORD *)a1 + 9);
  v94 = a3;
  LOBYTE(v74) = a2;
  v105 = a1;
  if ( !v3 )
    return;
  v4 = 0;
  v5 = 0;
  v6 = *a1;
  v97 = v6;
  LODWORD(v85) = 0;
  v76 = 0;
  v106 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
  v7 = a2 & 2;
  v83 = v7;
  v82 = a2 & 1;
  do
  {
    v8 = (unsigned __int64 *)(v6 + ((unsigned __int64)v5 << 6));
    v90 = v8;
    v9 = (struct _RM_ACTIVITY_HOST *)v8[6];
    v80 = v9;
    if ( v7 )
    {
      v10 = *((_DWORD *)v9 + 14);
      v11 = v8 + 1;
      v91 = v8 + 1;
      v12 = 0LL;
      v13 = 0LL;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          InformationJobObject = -1073741585;
          goto LABEL_34;
        }
        InformationJobObject = NtQueryInformationJobObject(
                                 *((HANDLE *)v9 + 92),
                                 MaxJobObjectInfoClass|0x10,
                                 JobInformation,
                                 0x28u,
                                 0LL);
        LODWORD(v63) = InformationJobObject;
        if ( InformationJobObject < 0 )
        {
          if ( (unsigned int)dword_18004D030 > 4
            && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
          {
            v149 = 4LL;
            p_InformationJobObject = &InformationJobObject;
            v102 = *((_QWORD *)v9 + 3);
            v150 = &v102;
            v92 = *((_DWORD *)v9 + 16);
            v152 = &v92;
            v151 = 8LL;
            v153 = 4LL;
            TlgWrite(v63, &unk_18004428B, v64, v65, 5u, &pData);
            LODWORD(v63) = InformationJobObject;
          }
          if ( (int)v63 < 0 )
            goto LABEL_33;
          v12 = v88;
          goto LABEL_13;
        }
        v12 = JobInformation[0];
        v13 = JobInformation[2];
      }
      else
      {
        v14 = *(_QWORD *)(*((_QWORD *)v9 + 5) + 56LL);
        v15 = *((_QWORD *)v9 + 3);
        v16 = (char *)v80 + 528;
        v17 = *((_DWORD *)v80 + 149);
        v18 = *((_DWORD *)v9 + 150);
        v96 = v15;
        v77 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *, _QWORD))(v14 + 104))(
                (char *)v80 + 528,
                v17,
                (char *)v80 + 64,
                v18,
                v15,
                &v103,
                0LL);
        LODWORD(v19) = v77;
        if ( v77 < 0 )
        {
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v77, 1uLL) )
          {
            v161 = 4LL;
            v160 = &v77;
            v162 = &v96;
            v163 = 8LL;
            TlgWrite(v19, &unk_18003F557, v66, v67, 4u, &v159);
            LODWORD(v19) = v77;
          }
          v9 = v80;
        }
        else
        {
          v20 = v18;
          v9 = v80;
          v77 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, unsigned __int64 *))(v14 + 176))(
                  v16,
                  v17,
                  (char *)v80 + 64,
                  v20,
                  v96,
                  &v98);
          LODWORD(v19) = v77;
          if ( v77 < 0 )
          {
            if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v77, 1uLL) )
            {
              v156 = 4LL;
              v155 = &v77;
              v157 = &v96;
              v158 = 8LL;
              TlgWrite(v19, &unk_18003F59F, v68, v69, 4u, &v154);
              LODWORD(v19) = v77;
            }
          }
          else
          {
            v13 = v98 << 12;
            if ( is_mul_ok(v98, 0x1000uLL) )
            {
              v98 <<= 12;
              LODWORD(v19) = 0;
            }
            else
            {
              v13 = -1LL;
              LODWORD(v19) = -1073741675;
              v98 = -1LL;
            }
            v12 = v103;
            v77 = (int)v19;
          }
        }
        v8 = v90;
        InformationJobObject = (int)v19;
        if ( (int)v19 < 0 )
          goto LABEL_33;
        v11 = v91;
      }
      v88 = v12;
      v99 = v13;
      InformationJobObject = 0;
LABEL_13:
      if ( (*((_BYTE *)v9 + 820) & 0x10) != 0 && (v70 = RmpActivityHostQueryCommitDebt(v9, &v89), v12 = v88, v70 >= 0) )
      {
        v21 = v89;
      }
      else
      {
        v21 = 0LL;
        v89 = 0LL;
      }
      if ( v21 >= v12 )
        v21 = v12;
      v22 = v12 - v21;
      if ( v12 && v22 <= 1 )
        v22 = 1LL;
      v23 = v22 + v99;
      v100 = v22 + v99;
      if ( dword_18004D030 )
      {
        RmpActivityHostGetTracingId(v9, (struct _RM_ACTIVITY_HOST_TRACING_ID *)v113);
        if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
        {
          v133 = 8LL;
          v132 = &v115;
          v25 = -1LL;
          do
            v26 = v113[++v25] == 0;
          while ( !v26 );
          v136 = 0;
          v134 = v113;
          v93 = v114;
          v137 = &v93;
          v139 = &v100;
          v141 = &v88;
          v143 = &v99;
          v145 = &v89;
          v135 = 2 * v25 + 2;
          v138 = 4LL;
          v140 = 8LL;
          v142 = 8LL;
          v144 = 8LL;
          v146 = 8LL;
          *(_DWORD *)&EventDescriptor.Level = 4;
          UserData.Ptr = (ULONGLONG)off_18004D038;
          *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041C4E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          EventDescriptor.Keyword = 1LL;
          UserData.Size = *(unsigned __int16 *)off_18004D038;
          v129 = &unk_180041C59;
          UserData.Reserved = 2;
          v130 = 149;
          v131 = 1;
          EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
        }
        v23 = v100;
      }
      if ( v11 )
        *v11 = v22;
      *v8 = v23;
      *((_WORD *)v8 + 31) |= 2u;
LABEL_33:
      a2 = v74;
LABEL_34:
      v5 = v76;
    }
    if ( v82 )
    {
      v27 = *v8;
      v28 = (__int64 **)((char *)v9 + 616);
      v29 = 101;
      v30 = 0;
      while ( 1 )
      {
        if ( ((1 << v30) & 2) != 0 && *v28 != (__int64 *)v28 )
        {
          v31 = (__int64)(*v28 - 171);
          if ( *v28 != (__int64 *)1368 )
            break;
        }
        ++v30;
        v28 += 3;
        if ( v30 >= 2 )
          goto LABEL_140;
      }
      v32 = **v28;
      v33 = *(int *)(v31 + 1400);
      v34 = *(_QWORD *)(v31 + 1392);
      FirstResourceSet = 0LL;
      if ( v32 != v34 + 8 * (v33 + 2 * v33 + 77) )
        FirstResourceSet = v32 - 1368;
      if ( !FirstResourceSet )
      {
        v36 = v33 + 1;
        if ( v36 < 2 )
        {
          while ( 1 )
          {
            if ( ((1 << v36) & 2) != 0 )
            {
              FirstResourceSet = RmpActivityHostGetFirstResourceSet(v34, (unsigned int)v36);
              if ( FirstResourceSet )
                break;
            }
            if ( ++v36 >= 2 )
              goto LABEL_44;
          }
        }
        else
        {
LABEL_44:
          FirstResourceSet = 0LL;
        }
      }
      do
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v31 + 1392) + 968LL);
        if ( v27 > v37 )
          v38 = *(_DWORD *)(v31 + 1364);
        else
          v38 = *(_DWORD *)(v31 + 1360);
        if ( v29 >= v38 )
        {
          if ( v27 > v37 )
            v29 = *(_DWORD *)(v31 + 1364);
          else
            v29 = *(_DWORD *)(v31 + 1360);
        }
        v31 = FirstResourceSet;
        if ( FirstResourceSet )
        {
          v59 = *(_QWORD *)(FirstResourceSet + 1368);
          v60 = *(int *)(FirstResourceSet + 1400);
          v61 = *(_QWORD *)(FirstResourceSet + 1392);
          FirstResourceSet = 0LL;
          if ( v59 != v61 + 8 * (v60 + 2 * v60 + 77) )
            FirstResourceSet = v59 - 1368;
          if ( !FirstResourceSet )
            FirstResourceSet = RmpActivityHostEnumerateResourceSetGetFirst(v61, 2, (int)v60 + 1);
        }
        else
        {
          FirstResourceSet = 0LL;
        }
      }
      while ( v31 );
      if ( v29 <= 100 )
      {
        *((_WORD *)v8 + 31) |= 1u;
        *((_DWORD *)v8 + 14) = v29;
        goto LABEL_55;
      }
LABEL_140:
      *((_DWORD *)v8 + 14) = 101;
LABEL_55:
      if ( *((_DWORD *)v8 + 14) <= v94 )
      {
        v54 = v85;
        goto LABEL_97;
      }
      a2 = v74;
    }
    if ( (a2 & 0x40) == 0 )
      goto LABEL_94;
    if ( (*((_BYTE *)v9 + 820) & 0x10) != 0 )
    {
      if ( (*((_BYTE *)v9 + 816) & 0x40) != 0 )
      {
        v86 = 0LL;
        v8[5] = 0LL;
LABEL_85:
        v45 = 0;
        LODWORD(v79) = 0;
        goto LABEL_86;
      }
      v39 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
    }
    else
    {
      v39 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
    }
    v26 = *((_DWORD *)v9 + 14) == 1;
    v40 = 0LL;
    v101 = v39;
    v86 = 0LL;
    v91 = 0LL;
    ProcessHandle = 0LL;
    if ( v26 )
    {
      ((void (__fastcall *)(struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD, __int64 *))v39)(
        v9,
        *((_QWORD *)v9 + 91),
        *((unsigned int *)v9 + 16),
        &v86);
      v45 = 0;
      goto LABEL_81;
    }
    v84 = 1;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( !Heap )
    {
      v45 = -1073741801;
      goto LABEL_81;
    }
    v42 = (char *)v9 + 64;
    v43 = (char *)v9 + 528;
    while ( 1 )
    {
      v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)v9 + 5) + 56LL) + 152LL))(
              (__int64)v9 + 528,
              *((unsigned int *)v9 + 149),
              (__int64)v9 + 64,
              *((unsigned int *)v9 + 150),
              *((_QWORD *)v9 + 3),
              Heap,
              &v84);
      v45 = v44;
      if ( v44 >= 0 )
      {
        v46 = v84;
        v40 = Heap;
        v87 = v84;
        v91 = (unsigned __int64 *)Heap;
        goto LABEL_65;
      }
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v44 != -2147483643 )
        break;
      RtlFreeHeap(ProcessHeap, 0, Heap);
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v84);
      if ( !Heap )
      {
        v46 = v87;
        v45 = -1073741801;
        goto LABEL_65;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v46 = v87;
LABEL_65:
    if ( v45 < 0 )
      goto LABEL_78;
    if ( !v46 )
      goto LABEL_77;
    v47 = v40;
    v48 = v46;
    v49 = v101;
    do
    {
      if ( ProcessHandle )
      {
        NtClose(ProcessHandle);
        ProcessHandle = 0LL;
      }
      v50 = *v47;
      ClientId.UniqueProcess = (HANDLE)*v47;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
      {
        v51 = *((_DWORD *)v80 + 14);
        if ( !v51 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)v80 + 5) + 56LL)
                                                                                                  + 160LL))(
                  v43,
                  *((unsigned int *)v80 + 149),
                  v42,
                  *((unsigned int *)v80 + 150),
                  *((_QWORD *)v80 + 3),
                  ProcessHandle) )
            goto LABEL_75;
LABEL_73:
          if ( (char *)v49 == (char *)RmpActivityHostQueryOfferedMemoryDxgCallback )
            RmpActivityHostQueryOfferedMemoryDxgCallback(v80, ProcessHandle, v50, &v86);
          else
            ((void (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, _QWORD, __int64 *))v49)(
              v80,
              ProcessHandle,
              v50,
              &v86);
          goto LABEL_75;
        }
        if ( v51 == 1 && NtIsProcessInJob(ProcessHandle, *((HANDLE *)v80 + 92)) == 292 )
          goto LABEL_73;
      }
LABEL_75:
      v47 += 2;
      --v48;
    }
    while ( v48 );
    v40 = (unsigned int *)v91;
    v9 = v80;
LABEL_77:
    v45 = 0;
LABEL_78:
    if ( v40 && v40 != (unsigned int *)&v110 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
LABEL_81:
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    v8 = v90;
    LODWORD(v79) = v45;
    if ( v45 >= 0 )
    {
      v90[5] = v86;
      goto LABEL_85;
    }
    v86 = -1LL;
LABEL_86:
    if ( (unsigned int)dword_18004D030 > 5 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      v26 = (*((_BYTE *)v9 + 820) & 0x10) == 0;
      v120 = &v79;
      v104 = *((_QWORD *)v9 + 3);
      v122 = &v104;
      v124 = &v86;
      v121 = 4LL;
      v75 = !v26;
      v126 = &v75;
      v123 = 8LL;
      v125 = 8LL;
      v127 = 1LL;
      *(_DWORD *)&v108.Level = 5;
      v116.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&v108.Id = ((unsigned int)&unk_180041BEF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v108.Keyword = 1LL;
      v116.Size = *(unsigned __int16 *)off_18004D038;
      v117 = &unk_180041BFA;
      v119 = 1;
      v116.Reserved = 2;
      v118 = 83;
      EventWriteTransfer(RegHandle, &v108, 0LL, 0LL, 6u, &v116);
      v45 = v79;
    }
    v5 = v76;
    if ( v45 >= 0 )
      *((_WORD *)v8 + 31) |= 0x40u;
LABEL_94:
    v53 = v85;
    if ( v5 != (_DWORD)v85 )
    {
      v71 = v97;
      v72 = (unsigned __int64)(unsigned int)v85 << 6;
      *(_OWORD *)(v72 + v97) = *(_OWORD *)v8;
      *(_OWORD *)(v72 + v71 + 16) = *((_OWORD *)v8 + 1);
      *(_OWORD *)(v72 + v71 + 32) = *((_OWORD *)v8 + 2);
      *(_OWORD *)(v72 + v71 + 48) = *((_OWORD *)v8 + 3);
    }
    v54 = v53 + 1;
    LODWORD(v85) = v54;
LABEL_97:
    v55 = v105;
    ++v5;
    a2 = v74;
    v6 = v97;
    v7 = v83;
    v76 = v5;
  }
  while ( v5 < *((_DWORD *)v105 + 9) );
  v56 = v106;
  *((_DWORD *)v105 + 9) = v54;
  if ( (v74 & 0x2C) != 0 )
  {
    RmpSystemQueryMemUtilMetricsForHosts((struct _RM_ACTIVITY_HOST_METRICS *)v6, v54, v74 & 0x2C);
    a2 = v74;
  }
  if ( *((_DWORD *)v55 + 9) )
  {
    v57 = a2 & 0x10;
    v74 = v57;
    do
    {
      v58 = v6 + ((unsigned __int64)v4 << 6);
      if ( v57 )
      {
        if ( (*(_BYTE *)(v58 + 62) & 8) != 0 )
        {
          IsActivityHostTooLargeForSwap = RmpSystemIsActivityHostTooLargeForSwap(
                                            (struct _RM_ACTIVITY_HOST_METRICS *)(v6 + ((unsigned __int64)v4 << 6)),
                                            *(_DWORD *)(v56 + 528),
                                            &v95);
          v57 = v74;
          if ( IsActivityHostTooLargeForSwap >= 0 )
          {
            *(_WORD *)(v58 + 62) |= 0x10u;
            if ( v95 )
              *(_WORD *)(v58 + 60) |= 1u;
          }
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)v55 + 9) );
  }
}
