/*
 * XREFs of RmpActivityHostPopulateMetrics @ 0x1800090B0
 * Callers:
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180007494 (RmpActivityHostQueryCommitDebt.c)
 *     RmpActivityHostGetTracingId @ 0x18000A170 (RmpActivityHostGetTracingId.c)
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18000C890 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001938C (RmpSystemQueryMemUtilMetricsForHosts.c)
 *     RmpSystemIsActivityHostTooLargeForSwap @ 0x180019FBC (RmpSystemIsActivityHostTooLargeForSwap.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(_DWORD *a1, char a2, int a3)
{
  int v3; // r9d
  _DWORD *v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 v10; // r10
  unsigned __int64 *v11; // r14
  __int64 v12; // r15
  int v13; // ecx
  union _RM_SID *v14; // r8
  unsigned __int64 v15; // r10
  const unsigned __int16 *v16; // rdx
  __int64 v17; // r9
  ModernResourceEnforcer *v18; // rcx
  __int64 (__fastcall *v19)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *); // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  __int64 v27; // rax
  bool v28; // zf
  unsigned __int64 v29; // rsi
  _QWORD *v30; // rdx
  int v31; // ebx
  int v32; // ecx
  __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  struct ExecutionModel::ResourceSet *FirstResourceSet; // r9
  int v38; // edx
  unsigned __int64 v39; // rcx
  int v40; // eax
  struct ExecutionModel::ResourceSet *NextResourceSetInList; // rax
  int (*v42)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r13
  int v43; // r12d
  unsigned int *v44; // r14
  unsigned __int64 *Heap; // rsi
  _QWORD **v46; // r10
  __int64 (__fastcall *v47)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *); // rax
  int v48; // eax
  int v49; // ebx
  unsigned int v50; // eax
  ACCESS_MASK v51; // r12d
  unsigned int *v52; // rbx
  __int64 v53; // rsi
  unsigned int v54; // r15d
  int v55; // ecx
  _QWORD **v56; // r11
  unsigned __int8 (__fastcall *v57)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, void *); // rax
  unsigned __int8 v58; // al
  int v59; // eax
  int v61; // ecx
  unsigned int v62; // ecx
  __int64 v63; // r14
  __int16 v64; // dx
  __int64 v65; // rbx
  __int64 v66; // r9
  const struct _TlgProvider_t *v67; // rcx
  const GUID *v68; // r8
  const GUID *v69; // r9
  bool v70; // sf
  __int64 v71; // r8
  __int64 v72; // rdx
  unsigned __int64 v73; // rax
  int IsActivityHostTooLargeForSwap; // eax
  ULONG UserDataCount[2]; // [rsp+28h] [rbp-E0h]
  __int16 v76; // [rsp+58h] [rbp-B0h]
  bool v77; // [rsp+5Ah] [rbp-AEh] BYREF
  NTSTATUS v78; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v79; // [rsp+60h] [rbp-A8h] BYREF
  int v80; // [rsp+64h] [rbp-A4h] BYREF
  void *ProcessHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v82; // [rsp+70h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-90h]
  __int16 v84; // [rsp+80h] [rbp-88h]
  _BYTE v85[6]; // [rsp+82h] [rbp-86h]
  unsigned int v86; // [rsp+88h] [rbp-80h]
  unsigned int v87; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int64 v88; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v89; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v90; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v91; // [rsp+A8h] [rbp-60h] BYREF
  int v92; // [rsp+B0h] [rbp-58h] BYREF
  int v93; // [rsp+B4h] [rbp-54h] BYREF
  int v94; // [rsp+B8h] [rbp-50h]
  int v95; // [rsp+BCh] [rbp-4Ch] BYREF
  __int64 v96; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v97; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v98; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 *v99; // [rsp+D8h] [rbp-30h]
  unsigned __int64 *v100; // [rsp+E0h] [rbp-28h]
  _DWORD *v101; // [rsp+E8h] [rbp-20h]
  __int64 v102; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v104; // [rsp+100h] [rbp-8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR v106; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v107[3]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v108; // [rsp+140h] [rbp+38h]
  struct _CLIENT_ID ClientId; // [rsp+148h] [rbp+40h] BYREF
  char v110; // [rsp+158h] [rbp+50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp+58h] BYREF
  unsigned __int64 JobInformation; // [rsp+190h] [rbp+88h] BYREF
  unsigned __int64 v113; // [rsp+1A0h] [rbp+98h]
  _WORD v114[268]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v115; // [rsp+3D0h] [rbp+2C8h]
  char v116; // [rsp+3D8h] [rbp+2D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+3E8h] [rbp+2E0h] BYREF
  void *v118; // [rsp+3F8h] [rbp+2F0h]
  int v119; // [rsp+400h] [rbp+2F8h]
  int v120; // [rsp+404h] [rbp+2FCh]
  int *v121; // [rsp+408h] [rbp+300h]
  __int64 v122; // [rsp+410h] [rbp+308h]
  __int64 *v123; // [rsp+418h] [rbp+310h]
  __int64 v124; // [rsp+420h] [rbp+318h]
  __int64 *v125; // [rsp+428h] [rbp+320h]
  __int64 v126; // [rsp+430h] [rbp+328h]
  bool *v127; // [rsp+438h] [rbp+330h]
  __int64 v128; // [rsp+440h] [rbp+338h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+448h] [rbp+340h] BYREF
  void *v130; // [rsp+458h] [rbp+350h]
  int v131; // [rsp+460h] [rbp+358h]
  int v132; // [rsp+464h] [rbp+35Ch]
  char *v133; // [rsp+468h] [rbp+360h]
  __int64 v134; // [rsp+470h] [rbp+368h]
  _WORD *v135; // [rsp+478h] [rbp+370h]
  int v136; // [rsp+480h] [rbp+378h]
  int v137; // [rsp+484h] [rbp+37Ch]
  int *v138; // [rsp+488h] [rbp+380h]
  __int64 v139; // [rsp+490h] [rbp+388h]
  unsigned __int64 *v140; // [rsp+498h] [rbp+390h]
  __int64 v141; // [rsp+4A0h] [rbp+398h]
  unsigned __int64 *v142; // [rsp+4A8h] [rbp+3A0h]
  __int64 v143; // [rsp+4B0h] [rbp+3A8h]
  unsigned __int64 *v144; // [rsp+4B8h] [rbp+3B0h]
  __int64 v145; // [rsp+4C0h] [rbp+3B8h]
  unsigned __int64 *v146; // [rsp+4C8h] [rbp+3C0h]
  __int64 v147; // [rsp+4D0h] [rbp+3C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4D8h] [rbp+3D0h] BYREF
  NTSTATUS *v149; // [rsp+4F8h] [rbp+3F0h]
  __int64 v150; // [rsp+500h] [rbp+3F8h]
  __int64 *v151; // [rsp+508h] [rbp+400h]
  __int64 v152; // [rsp+510h] [rbp+408h]
  int *v153; // [rsp+518h] [rbp+410h]
  __int64 v154; // [rsp+520h] [rbp+418h]

  v3 = a1[9];
  v4 = a1;
  v94 = a3;
  LOBYTE(v76) = a2;
  v101 = a1;
  if ( !v3 )
    return;
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v96 = *(_QWORD *)a1;
  *(_DWORD *)&v85[2] = 0;
  v86 = 0;
  v104 = *(_QWORD *)(v8 + 40);
  v9 = a2 & 2;
  LODWORD(v10) = 1;
  *(_DWORD *)v85 = a2 & 2;
  v84 = a2 & 1;
  do
  {
    v11 = (unsigned __int64 *)(v5 + ((unsigned __int64)v7 << 6));
    v100 = v11;
    v12 = v11[6];
    v83 = v12;
    if ( v9 )
    {
      v13 = *(_DWORD *)(v12 + 48);
      v88 = 0LL;
      v89 = 0LL;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          v78 = -1073741585;
          goto LABEL_32;
        }
        v78 = NtQueryInformationJobObject(
                *(HANDLE *)(v12 + 736),
                MaxJobObjectInfoClass|0x10,
                &JobInformation,
                0x28u,
                0LL);
        LODWORD(v67) = v78;
        if ( v78 < 0 )
        {
          v10 = 1LL;
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v78, 1uLL) )
          {
            v150 = 4LL;
            v149 = &v78;
            v102 = *(_QWORD *)(v12 + 24);
            v151 = &v102;
            v92 = *(_DWORD *)(v12 + 56);
            v153 = &v92;
            v152 = 8LL;
            v154 = 4LL;
            TlgWrite(v67, &unk_1800434A1, v68, v69, 5u, &pData);
            LODWORD(v67) = v78;
            v10 = 1LL;
          }
          if ( (int)v67 < 0 )
            goto LABEL_31;
          v21 = v90;
          goto LABEL_10;
        }
        v21 = JobInformation;
        v22 = v113;
        v88 = JobInformation;
        v89 = v113;
      }
      else
      {
        v14 = (union _RM_SID *)(v12 + 520);
        v15 = *(_QWORD *)(v12 + 24);
        v16 = (const unsigned __int16 *)(v12 + 56);
        v17 = *(unsigned int *)(v12 + 588);
        v18 = *(ModernResourceEnforcer **)(*(_QWORD *)(v12 + 40) + 72LL);
        v19 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v18 + 48LL);
        if ( v19 == ModernResourceEnforcer::QueryCurrentMemoryUsage )
        {
          v20 = ModernResourceEnforcer::QueryCurrentMemoryUsage(
                  v18,
                  v16,
                  v14,
                  v17,
                  *(_DWORD *)(v12 + 592),
                  v15,
                  &v88,
                  &v89);
        }
        else
        {
          UserDataCount[0] = *(_DWORD *)(v12 + 592);
          v20 = v19(v18, v16, v14, v17, *(_QWORD *)UserDataCount, v15, &v88, &v89);
        }
        v78 = v20;
        if ( v20 < 0 )
        {
LABEL_30:
          LODWORD(v10) = 1;
LABEL_31:
          a2 = v76;
          goto LABEL_32;
        }
        v21 = v88;
        v22 = v89;
      }
      v90 = v21;
      v10 = 1LL;
      v97 = v22;
      v78 = 0;
LABEL_10:
      if ( (*(_BYTE *)(v12 + 820) & 0x10) == 0
        || (v70 = (int)RmpActivityHostQueryCommitDebt(v12, &v91) < 0, v10 = 1LL, v21 = v90, v70) )
      {
        v23 = 0LL;
        v91 = 0LL;
      }
      else
      {
        v23 = v91;
      }
      if ( v23 >= v21 )
        v23 = v21;
      v24 = v21 - v23;
      if ( v21 && v24 <= 1 )
        v24 = v10;
      v25 = v24 + v97;
      v98 = v24 + v97;
      if ( dword_18004C030 )
      {
        RmpActivityHostGetTracingId(v12, v114);
        if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
        {
          v134 = 8LL;
          v133 = &v116;
          v27 = -1LL;
          do
            v28 = v114[++v27] == 0;
          while ( !v28 );
          v137 = 0;
          v135 = v114;
          v93 = v115;
          v138 = &v93;
          v140 = &v98;
          v142 = &v90;
          v144 = &v97;
          v146 = &v91;
          v136 = 2 * v27 + 2;
          v139 = 4LL;
          v141 = 8LL;
          v143 = 8LL;
          v145 = 8LL;
          v147 = 8LL;
          *(_DWORD *)&EventDescriptor.Level = 4;
          UserData.Ptr = (ULONGLONG)off_18004C038;
          *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040F65 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          EventDescriptor.Keyword = 1LL;
          UserData.Size = *(unsigned __int16 *)off_18004C038;
          v130 = &unk_180040F70;
          UserData.Reserved = 2;
          v131 = 149;
          v132 = 1;
          EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
        }
        v25 = v98;
      }
      if ( v11 != (unsigned __int64 *)-8LL )
        v11[1] = v24;
      *v11 = v25;
      *((_WORD *)v11 + 31) |= 2u;
      goto LABEL_30;
    }
LABEL_32:
    if ( v84 )
    {
      v29 = *v11;
      v30 = (_QWORD *)(v12 + 616);
      v31 = 101;
      v32 = 0;
      while ( 1 )
      {
        if ( (((_DWORD)v10 << v32) & 2) != 0 && (_QWORD *)*v30 != v30 )
        {
          v33 = *v30 - 1376LL;
          if ( *v30 != 1376LL )
            break;
        }
        ++v32;
        v30 += 3;
        if ( v32 >= 2 )
          goto LABEL_134;
      }
      v34 = *(int *)(v33 + 1408);
      v35 = *(_QWORD *)(v33 + 1400);
      v36 = *(_QWORD *)(v33 + 1376);
      if ( v36 == v35 + 8 * (v34 + 2 * v34 + 77) )
        FirstResourceSet = 0LL;
      else
        FirstResourceSet = (struct ExecutionModel::ResourceSet *)(v36 - 1376);
      if ( !FirstResourceSet )
      {
        v38 = v34 + 1;
        if ( v38 < 2 )
        {
          while ( 1 )
          {
            if ( (((_DWORD)v10 << v38) & 2) != 0 )
            {
              FirstResourceSet = (struct ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(v35, v38);
              if ( FirstResourceSet )
                break;
            }
            if ( ++v38 >= 2 )
              goto LABEL_41;
          }
        }
        else
        {
LABEL_41:
          FirstResourceSet = 0LL;
        }
      }
      do
      {
        v39 = *(_QWORD *)(*(_QWORD *)(v33 + 1400) + 936LL);
        if ( v29 > v39 )
          v40 = *(_DWORD *)(v33 + 1364);
        else
          v40 = *(_DWORD *)(v33 + 1360);
        if ( v31 >= v40 )
        {
          if ( v29 > v39 )
            v31 = *(_DWORD *)(v33 + 1364);
          else
            v31 = *(_DWORD *)(v33 + 1360);
        }
        v33 = (__int64)FirstResourceSet;
        if ( FirstResourceSet )
        {
          NextResourceSetInList = RmpActivityHostGetNextResourceSetInList(FirstResourceSet);
          if ( !NextResourceSetInList )
            NextResourceSetInList = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(
                                                                            *(_QWORD *)(v66 + 1400),
                                                                            2,
                                                                            *(_DWORD *)(v66 + 1408) + 1);
        }
        else
        {
          NextResourceSetInList = 0LL;
        }
        FirstResourceSet = NextResourceSetInList;
      }
      while ( v33 );
      LODWORD(v10) = 1;
      if ( v31 <= 100 )
      {
        *((_WORD *)v11 + 31) |= 1u;
        *((_DWORD *)v11 + 14) = v31;
        goto LABEL_52;
      }
LABEL_134:
      *((_DWORD *)v11 + 14) = 101;
LABEL_52:
      if ( *((_DWORD *)v11 + 14) <= v94 )
      {
        v62 = *(_DWORD *)&v85[2];
        goto LABEL_98;
      }
      a2 = v76;
    }
    if ( (a2 & 0x40) == 0 )
      goto LABEL_95;
    if ( (*(_BYTE *)(v12 + 820) & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(v12 + 816) & 0x40) != 0 )
      {
        v82 = 0LL;
        v11[5] = 0LL;
LABEL_86:
        v49 = 0;
        v80 = 0;
        goto LABEL_87;
      }
      v42 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
      v43 = 4096;
    }
    else
    {
      v42 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
      v43 = 1536;
    }
    v28 = *(_DWORD *)(v12 + 48) == 1;
    v44 = 0LL;
    v82 = 0LL;
    v99 = 0LL;
    ProcessHandle = 0LL;
    if ( v28 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))v42)(
        v12,
        *(_QWORD *)(v12 + 728),
        *(unsigned int *)(v12 + 56),
        &v82);
      v49 = 0;
      goto LABEL_82;
    }
    v79 = v10;
    Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( !Heap )
    {
      v49 = -1073741801;
      goto LABEL_82;
    }
    while ( 1 )
    {
      v46 = *(_QWORD ***)(*(_QWORD *)(v12 + 40) + 72LL);
      v47 = (__int64 (__fastcall *)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *))(*v46)[9];
      if ( v47 == ModernResourceEnforcer::QueryProcessList )
        v48 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned __int64 *, unsigned int *))v46[20])(
                v12 + 520,
                *(unsigned int *)(v12 + 588),
                v12 + 56,
                *(unsigned int *)(v12 + 592),
                *(_QWORD *)(v12 + 24),
                Heap,
                &v79);
      else
        v48 = v47(
                *(ModernResourceEnforcer **)(*(_QWORD *)(v12 + 40) + 72LL),
                (struct _RM_ACTIVITY_HOST *)v12,
                Heap,
                &v79);
      v49 = v48;
      if ( v48 >= 0 )
      {
        v50 = v79;
        v44 = (unsigned int *)Heap;
        v87 = v79;
        v99 = Heap;
        goto LABEL_63;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      if ( v49 != -2147483643 )
        break;
      Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v79);
      if ( !Heap )
      {
        v49 = -1073741801;
        break;
      }
    }
    v50 = v87;
LABEL_63:
    if ( v49 < 0 )
      goto LABEL_79;
    v51 = v43 | 0x1000;
    if ( !v50 )
      goto LABEL_78;
    v52 = v44;
    v53 = v50;
    do
    {
      if ( ProcessHandle )
      {
        NtClose(ProcessHandle);
        ProcessHandle = 0LL;
      }
      v54 = *v52;
      ClientId.UniqueProcess = (HANDLE)*v52;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenProcess(&ProcessHandle, v51, &ObjectAttributes, &ClientId) < 0 )
      {
LABEL_143:
        v12 = v83;
        goto LABEL_76;
      }
      v55 = *(_DWORD *)(v83 + 48);
      if ( v55 )
      {
        if ( v55 != 1 )
        {
          v12 = v83;
          goto LABEL_76;
        }
        if ( NtIsProcessInJob(ProcessHandle, *(HANDLE *)(v83 + 736)) != 292 )
          goto LABEL_143;
      }
      else
      {
        v56 = *(_QWORD ***)(*(_QWORD *)(v83 + 40) + 72LL);
        v57 = (unsigned __int8 (__fastcall *)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, void *))(*v56)[10];
        if ( v57 == ModernResourceEnforcer::IsProcessInApplication )
          v58 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))v56[21])(
                  v83 + 520,
                  *(unsigned int *)(v83 + 588),
                  v83 + 56,
                  *(unsigned int *)(v83 + 592),
                  *(_QWORD *)(v83 + 24),
                  ProcessHandle);
        else
          v58 = v57(
                  *(ModernResourceEnforcer **)(*(_QWORD *)(v83 + 40) + 72LL),
                  (struct _RM_ACTIVITY_HOST *)v83,
                  ProcessHandle);
        if ( !v58 )
          goto LABEL_143;
      }
      if ( (char *)v42 == (char *)RmpActivityHostQueryOfferedMemoryDxgCallback )
      {
        v107[2] = 0LL;
        v108 = 0LL;
        v107[1] = ProcessHandle;
        v107[0] = 32LL;
        v59 = D3DKMTQueryProcessOfferInfo(v107);
        v12 = v83;
        if ( v59 >= 0 )
          v82 += v108;
      }
      else
      {
        v71 = v54;
        v12 = v83;
        ((void (__fastcall *)(__int64, void *, __int64, __int64 *))v42)(v83, ProcessHandle, v71, &v82);
      }
LABEL_76:
      v52 += 2;
      --v53;
    }
    while ( v53 );
    v44 = (unsigned int *)v99;
LABEL_78:
    v49 = 0;
LABEL_79:
    if ( v44 && v44 != (unsigned int *)&v110 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v44);
LABEL_82:
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    v11 = v100;
    v4 = v101;
    v7 = v86;
    v80 = v49;
    if ( v49 >= 0 )
    {
      v100[5] = v82;
      goto LABEL_86;
    }
    v82 = -1LL;
LABEL_87:
    if ( (unsigned int)dword_18004C030 > 5 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
    {
      v28 = (*(_BYTE *)(v12 + 820) & 0x10) == 0;
      v121 = &v80;
      v103 = *(_QWORD *)(v12 + 24);
      v123 = &v103;
      v125 = &v82;
      v122 = 4LL;
      v77 = !v28;
      v127 = &v77;
      v124 = 8LL;
      v126 = 8LL;
      v128 = 1LL;
      *(_DWORD *)&v106.Level = 5;
      v117.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&v106.Id = ((unsigned int)&unk_180040A04 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v106.Keyword = 1LL;
      v117.Size = *(unsigned __int16 *)off_18004C038;
      v118 = &unk_180040A0F;
      v120 = 1;
      v117.Reserved = 2;
      v119 = 83;
      EventWriteTransfer(RegHandle, &v106, 0LL, 0LL, 6u, &v117);
      v49 = v80;
    }
    if ( v49 >= 0 )
      *((_WORD *)v11 + 31) |= 0x40u;
LABEL_95:
    v61 = *(_DWORD *)&v85[2];
    if ( v7 != *(_DWORD *)&v85[2] )
    {
      v72 = v96;
      v73 = (unsigned __int64)*(unsigned int *)&v85[2] << 6;
      *(_OWORD *)(v73 + v96) = *(_OWORD *)v11;
      *(_OWORD *)(v73 + v72 + 16) = *((_OWORD *)v11 + 1);
      *(_OWORD *)(v73 + v72 + 32) = *((_OWORD *)v11 + 2);
      *(_OWORD *)(v73 + v72 + 48) = *((_OWORD *)v11 + 3);
    }
    v62 = v61 + 1;
    *(_DWORD *)&v85[2] = v62;
LABEL_98:
    a2 = v76;
    v5 = v96;
    ++v7;
    LODWORD(v10) = 1;
    v9 = *(_WORD *)v85;
    v86 = v7;
  }
  while ( v7 < v4[9] );
  v63 = v104;
  v4[9] = v62;
  if ( (v76 & 0x2C) != 0 )
  {
    RmpSystemQueryMemUtilMetricsForHosts(v5, v62);
    a2 = v76;
  }
  if ( v4[9] )
  {
    v64 = a2 & 0x10;
    v76 = v64;
    do
    {
      v65 = v5 + ((unsigned __int64)v6 << 6);
      if ( v64 )
      {
        if ( (*(_BYTE *)(v65 + 62) & 8) != 0 )
        {
          IsActivityHostTooLargeForSwap = RmpSystemIsActivityHostTooLargeForSwap(
                                            v5 + ((unsigned __int64)v6 << 6),
                                            *(unsigned int *)(v63 + 1856),
                                            &v95);
          v64 = v76;
          if ( IsActivityHostTooLargeForSwap >= 0 )
          {
            *(_WORD *)(v65 + 62) |= 0x10u;
            if ( v95 )
              *(_WORD *)(v65 + 60) |= 1u;
          }
        }
      }
      ++v6;
    }
    while ( v6 < v4[9] );
  }
}
