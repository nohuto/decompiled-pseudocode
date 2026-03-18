/*
 * XREFs of DxgkPresent @ 0x1C00B2160
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0003424 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_qpqqqpp @ 0x1C001F6D0 (Template_qpqqqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00B3800 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00B3AE0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0124910 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C012492C (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     sub_1C0124B04 @ 0x1C0124B04 (sub_1C0124B04.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B818 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C014BE9C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(ULONG64 a1, int a2)
{
  struct DXGGLOBAL *v4; // rbx
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r13
  PSLIST_ENTRY v16; // rdi
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGPROCESS *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _OWORD *v30; // rax
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  int Next; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGCONTEXT *v44; // r12
  _QWORD *v45; // rbx
  __int64 v46; // r14
  __int64 v47; // rbx
  struct _KEVENT *v48; // rbx
  unsigned __int8 v49; // bl
  __int64 v50; // r8
  unsigned int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _BYTE *v59; // r9
  __int64 v60; // rax
  PVOID v61; // r9
  unsigned int v62; // r15d
  DXGPUSHLOCK *v63; // rcx
  unsigned int v64; // ebx
  unsigned int v65; // ecx
  unsigned int v66; // ebx
  __int64 v67; // r8
  unsigned int v68; // edx
  __int64 v69; // rbx
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  struct DXGADAPTER *v81; // r15
  int v82; // eax
  int v83; // ebx
  _QWORD *v84; // rax
  DXGPRESENT *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  DXGPRESENT *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  volatile signed __int64 *v97; // rcx
  __int64 v98; // rt0
  char v99; // of
  __int64 v100; // rax
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  _QWORD *v105; // rax
  __int64 v106; // r12
  __int64 v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  PSLIST_ENTRY v112; // r15
  __int64 v113; // rcx
  int v114; // edx
  unsigned int v115; // eax
  __int64 v116; // rcx
  int v117; // eax
  int v118; // r8d
  char v119; // al
  int v120; // edx
  int v121; // eax
  __int64 v122; // rax
  int v123; // r12d
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rcx
  DXGGLOBAL **v128; // rdx
  __int64 v129; // rbx
  __int64 v130; // rax
  _BYTE *v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  struct DXGGLOBAL *v135; // rbx
  __int64 v136; // rax
  char *v137; // rbx
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rax
  __int64 v145; // rdi
  PLIST_ENTRY i; // rbx
  struct DXGADAPTER *v147; // [rsp+50h] [rbp-1D8h] BYREF
  char v148; // [rsp+58h] [rbp-1D0h]
  __int64 v149; // [rsp+60h] [rbp-1C8h] BYREF
  int v150; // [rsp+68h] [rbp-1C0h]
  _BYTE v151[16]; // [rsp+70h] [rbp-1B8h] BYREF
  PVOID P; // [rsp+80h] [rbp-1A8h]
  _BYTE v153[32]; // [rsp+88h] [rbp-1A0h] BYREF
  unsigned int v154; // [rsp+A8h] [rbp-180h]
  PVOID v155; // [rsp+B0h] [rbp-178h]
  _BYTE v156[32]; // [rsp+B8h] [rbp-170h] BYREF
  int v157; // [rsp+D8h] [rbp-150h]
  struct DXGPROCESS *v158; // [rsp+E0h] [rbp-148h]
  struct DXGPROCESS *v159; // [rsp+E8h] [rbp-140h]
  struct DXGCONTEXT *v160; // [rsp+F0h] [rbp-138h] BYREF
  struct _SLIST_ENTRY *v161[3]; // [rsp+F8h] [rbp-130h] BYREF
  PSLIST_ENTRY v162; // [rsp+110h] [rbp-118h]
  char v163[8]; // [rsp+120h] [rbp-108h] BYREF
  char v164[8]; // [rsp+128h] [rbp-100h] BYREF
  DXGADAPTER *v165; // [rsp+130h] [rbp-F8h]
  char v166; // [rsp+138h] [rbp-F0h]
  char v167[8]; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v168; // [rsp+148h] [rbp-E0h]
  __int64 v169; // [rsp+158h] [rbp-D0h]
  char v170; // [rsp+160h] [rbp-C8h]
  ULONG64 v171; // [rsp+170h] [rbp-B8h]
  _QWORD v172[6]; // [rsp+178h] [rbp-B0h] BYREF
  char v173; // [rsp+1A8h] [rbp-80h]
  struct DXGCONTEXT *v174; // [rsp+1B0h] [rbp-78h]
  __int64 v175; // [rsp+1B8h] [rbp-70h]
  _BYTE v176[64]; // [rsp+1C0h] [rbp-68h] BYREF
  int AllocationInfo; // [rsp+240h] [rbp+18h]
  int v178; // [rsp+240h] [rbp+18h]
  PSLIST_ENTRY v179; // [rsp+248h] [rbp+20h] BYREF

  v171 = a1;
  LOBYTE(AllocationInfo) = 13;
  v4 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v5);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v6 = (char *)v4 + 800;
  ++*((_DWORD *)v6 + 5);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  v162 = v9;
  if ( !v9 )
  {
    ++*((_DWORD *)v6 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v6 + 6))(
                         *((unsigned int *)v6 + 9),
                         *((unsigned int *)v6 + 11),
                         *((unsigned int *)v6 + 10),
                         v6);
    v162 = v9;
  }
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
    *(_QWORD *)(v12 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  memset(v9, 0, 0x5F0uLL);
  v179 = v9;
  v15 = 0LL;
  v16 = 0LL;
  if ( bTracingEnabled )
    v16 = v9;
  v161[2] = v16;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerEnter, v14, 2020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v23 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  }
  else
  {
    v24 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
    *(_QWORD *)(v24 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v24);
    v23 = 0LL;
  }
  v159 = v23;
  v158 = v23;
  if ( !v23 )
  {
    v25 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v25);
    goto LABEL_17;
  }
  v30 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v30 = (_OWORD *)MmUserProbeAddress;
  v31 = v9;
  v32 = 11LL;
  do
  {
    *v31 = *v30;
    v31[1] = v30[1];
    v31[2] = v30[2];
    v31[3] = v30[3];
    v31[4] = v30[4];
    v31[5] = v30[5];
    v31[6] = v30[6];
    v31 += 8;
    *(v31 - 1) = v30[7];
    v30 += 8;
    --v32;
  }
  while ( v32 );
  *v31 = *v30;
  v31[1] = v30[1];
  v31[2] = v30[2];
  v31[3] = v30[3];
  v31[4] = v30[4];
  *((_QWORD *)v31 + 10) = *((_QWORD *)v30 + 10);
  if ( !a2 && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v16[1].Next),
        0LL,
        v21,
        (int)v16->Next,
        *((_QWORD *)&v16->Next + 1),
        (char)v16[1].Next,
        *((_DWORD *)&v16[5].Next + 2),
        6,
        HIDWORD(v16[1].Next),
        *((_DWORD *)&v16[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v31, &EventProfilerExit, v21, 2020);
    sub_1C0124B04(&v179);
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    if ( !*((_DWORD *)&v9[90].Next + 2) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v33 + 24) = 916LL;
      WdLogEvent5_WdAssertion(v33);
    }
    Next = (int)v9->Next;
    LODWORD(v9->Next) = *((_DWORD *)&v9[90].Next + 2);
    *((_DWORD *)&v9[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       v23,
                       (const struct _D3DKMT_PRESENT *)v9,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 4));
    if ( AllocationInfo < 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = HIDWORD(v9[1].Next);
      WdLogEvent5_WdWarning(v39);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151, (unsigned int)v9->Next, v23, &v160, 0);
  v44 = v160;
  v174 = v160;
  if ( !v160 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
    v45[3] = -1073741811LL;
    v45[4] = PsGetCurrentProcess();
    v45[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v45);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
LABEL_17:
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v16[1].Next),
        v26,
        v28,
        (int)v16->Next,
        *((_QWORD *)&v16->Next + 1),
        (char)v16[1].Next,
        *((_DWORD *)&v16[5].Next + 2),
        AllocationInfo,
        HIDWORD(v16[1].Next),
        *((_DWORD *)&v16[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2020);
    sub_1C0124B04(&v179);
    return 3221225485LL;
  }
  v46 = *((_QWORD *)v160 + 2);
  v175 = v46;
  v149 = v46;
  v150 = 0;
  if ( v46 )
  {
    v47 = *(_QWORD *)(v46 + 16);
    if ( *(_DWORD *)(v46 + 280) == 2 )
      v48 = (struct _KEVENT *)(v47 + 80);
    else
      v48 = (struct _KEVENT *)(v47 + 56);
    if ( !KeReadStateEvent(v48) )
      KeWaitForSingleObject(v48, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v46 + 80), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL) + 80LL));
      v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v46 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v50, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v46 + 80), 1u);
      if ( v49 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v46 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v150 = 1;
  }
  v51 = *((_DWORD *)&v9[5].Next + 3);
  if ( v51 > 0x40 )
  {
    v52 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
    *(_QWORD *)(v52 + 24) = v44;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
LABEL_60:
    if ( v46 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v149);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    goto LABEL_17;
  }
  v53 = v51 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v154 = 0;
  if ( (unsigned int)v53 <= 4 )
  {
    PoolWithTag = v153;
    P = v153;
  }
  else
  {
    v42 = (unsigned int)v53;
    v40 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v53;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v53 < 8 )
      goto LABEL_69;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v53, 0x4B677844u);
    P = PoolWithTag;
  }
  v154 = v53;
  if ( !PoolWithTag )
  {
LABEL_70:
    v55 = WdLogNewEntry5_WdWarning(PoolWithTag, v40, v42, v43);
    *(_QWORD *)(v55 + 24) = 964LL;
    WdLogEvent5_WdWarning(v55);
LABEL_71:
    if ( P != v153 && P )
      ExFreePoolWithTag(P, 0);
    if ( v46 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v149);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v16[1].Next),
        v56,
        v58,
        (int)v16->Next,
        *((_QWORD *)&v16->Next + 1),
        (char)v16[1].Next,
        *((_DWORD *)&v16[5].Next + 2),
        AllocationInfo,
        HIDWORD(v16[1].Next),
        *((_DWORD *)&v16[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v57, &EventProfilerExit, v58, 2020);
    sub_1C0124B04(&v179);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v53);
  PoolWithTag = P;
LABEL_69:
  if ( !PoolWithTag )
    goto LABEL_70;
  v59 = 0LL;
  v155 = 0LL;
  v157 = 0;
  if ( (unsigned int)v53 <= 4 )
  {
    v59 = v156;
    v155 = v156;
  }
  else
  {
    v42 = (unsigned int)v53;
    v40 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v53;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v53 < 8 )
      goto LABEL_89;
    v59 = ExAllocatePoolWithTag(PagedPool, 8 * v53, 0x4B677844u);
    v155 = v59;
    PoolWithTag = P;
  }
  v157 = v53;
  if ( !v59 )
  {
LABEL_90:
    v60 = WdLogNewEntry5_WdWarning(PoolWithTag, v40, v42, v59);
    *(_QWORD *)(v60 + 24) = 974LL;
    WdLogEvent5_WdWarning(v60);
LABEL_91:
    if ( v155 != v156 && v155 )
      ExFreePoolWithTag(v155, 0);
    goto LABEL_71;
  }
  memset(v59, 0, 8LL * (unsigned int)v53);
  PoolWithTag = P;
  v59 = v155;
LABEL_89:
  if ( !v59 )
    goto LABEL_90;
  *PoolWithTag = v44;
  *(_QWORD *)v155 = v44;
  v61 = P;
  v147 = (struct DXGADAPTER *)P;
  v62 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    v63 = (struct DXGPROCESS *)((char *)v158 + 192);
    for ( v161[0] = (struct _SLIST_ENTRY *)((char *)v158 + 192); ; v63 = (DXGPUSHLOCK *)v161[0] )
    {
      v64 = *((_DWORD *)&v9[6].Next + v62);
      DXGPUSHLOCK::AcquireShared(v63);
      v65 = (v64 >> 6) & 0xFFFFFF;
      v66 = v64 >> 30;
      if ( v65 < *((_DWORD *)v158 + 58)
        && (v67 = *((_QWORD *)v158 + 27), v68 = *(_DWORD *)(v67 + 16LL * v65 + 8), v66 == ((v68 >> 4) & 3))
        && (v68 & 0x1000) == 0
        && (v68 & 0xF) != 0
        && (*(_BYTE *)(v67 + 16LL * v65 + 8) & 0xF) == 7 )
      {
        v69 = *(_QWORD *)(v67 + 16LL * v65);
      }
      else
      {
        v69 = 0LL;
      }
      ExReleasePushLockSharedEx(v161[0], 0LL);
      KeLeaveCriticalRegion();
      v70 = v62 + 1;
      v71 = 8 * v70;
      *(_QWORD *)((char *)P + v71) = v69;
      *(_QWORD *)((char *)v155 + v71) = v69;
      v61 = P;
      v72 = *((_QWORD *)P + v70);
      if ( !v72 )
        break;
      v71 = *((_QWORD *)v44 + 2);
      if ( *(_QWORD *)(v72 + 16) != v71 )
        break;
      if ( v62
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v71 + 16) + 16LL))
        && *(_DWORD *)(*((_QWORD *)v147 + v62) + 328LL) <= *(_DWORD *)(*((_QWORD *)v147 + v62 - 1) + 328LL) )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v73);
        v74[3] = -1073741811LL;
        goto LABEL_112;
      }
      v62 = v70;
      if ( (unsigned int)v70 >= *((_DWORD *)&v9[5].Next + 3) )
        goto LABEL_119;
    }
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v71);
    v74[3] = v44;
    v74[4] = *((unsigned int *)&v9[6].Next + v62);
    v74[5] = v62;
    v74[6] = -1073741811LL;
LABEL_112:
    WdLogEvent5_WdError(v74);
    goto LABEL_113;
  }
LABEL_119:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v172,
    v61,
    v154);
  if ( v173 )
  {
    if ( !v172[0] )
    {
      v79 = WdLogNewEntry5_WdWarning(v76, v75, v77, v78);
      *(_QWORD *)(v79 + 24) = 1028LL;
      WdLogEvent5_WdWarning(v79);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
      goto LABEL_91;
    }
    v80 = WdLogNewEntry5_WdWarning(v76, v75, v77, v78);
    *(_QWORD *)(v80 + 24) = 1033LL;
    WdLogEvent5_WdWarning(v80);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
LABEL_113:
    if ( v155 != v156 && v155 )
      ExFreePoolWithTag(v155, 0);
    if ( P != v153 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_60;
  }
  *((_QWORD *)&v9[93].Next + 1) = v155;
  LOBYTE(v9[94].Next) = 1;
  v81 = *(struct DXGADAPTER **)(*((_QWORD *)v44 + 2) + 2832LL);
  v82 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v82 & 0x8000) != 0 )
  {
    if ( (v82 & 0x400000) != 0 || v9[90].Next )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v76);
      v84[3] = -1073741811LL;
      v84[4] = v44;
      v84[5] = *((unsigned int *)&v9[5].Next + 2);
      v84[6] = v9[90].Next;
      WdLogEvent5_WdError(v84);
      v83 = -1073741811;
    }
    else
    {
      v83 = 0;
    }
  }
  else if ( *((_QWORD *)v44 + 17)
         || ((v85 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL)) == 0LL
           ? (v90 = 0LL)
           : (v90 = DXGPRESENT::DXGPRESENT(v85, *(_DWORD *)(*((_QWORD *)v44 + 2) + 2840LL))),
             (*((_QWORD *)v44 + 17) = v90) != 0LL) )
  {
    v83 = DXGPRESENT::CopyPresentArgs(*((DXGPRESENT **)v44 + 17), v44, (struct _D3DKMT_PRESENT *)v9);
  }
  else
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdLowResource(v87, v86, v88, v89);
    v91[3] = -1073741801LL;
    v91[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 16LL);
    v91[5] = v158;
    v91[6] = v44;
    WdLogEvent5_WdLowResource(v91);
    v83 = -1073741801;
  }
  LOBYTE(AllocationInfo) = v83;
  if ( v83 < 0 )
    goto LABEL_136;
  v95 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v95 & 0x10000000) != 0 )
  {
    if ( !v81 )
    {
      v96 = WdLogNewEntry5_WdError(v95);
      *(_QWORD *)(v96 + 24) = 1054LL;
LABEL_154:
      WdLogEvent5_WdError(v96);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
      goto LABEL_113;
    }
    if ( (*((_DWORD *)v81 + 71) & 0x100) == 0 )
    {
      v96 = WdLogNewEntry5_WdError(v95);
      *(_QWORD *)(v96 + 24) = 1060LL;
      goto LABEL_154;
    }
  }
  else if ( v81 )
  {
    if ( (*((_DWORD *)v81 + 71) & 0x100) != 0 && (v95 & 0x18000) == 0 )
    {
      v96 = WdLogNewEntry5_WdError(v95);
      *(_QWORD *)(v96 + 24) = 1070LL;
      goto LABEL_154;
    }
  }
  else
  {
    v81 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v176, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v158 + 10), v81);
  v97 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 16LL);
  v147 = (struct DXGADAPTER *)v97;
  v148 = 0;
  v98 = _InterlockedAdd64(v97 + 3, 1uLL);
  if ( (v98 < 0) ^ v99 | (v98 == 0) )
  {
    v100 = WdLogNewEntry5_WdAssertion(v97);
    *(_QWORD *)(v100 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v100);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v147 + 104, 0LL);
  v148 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v163, *((_QWORD *)v44 + 2), 2, v101, 0);
  if ( v166 )
  {
    v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v103, v102, v104);
    v105[3] = 275LL;
    v105[4] = 4LL;
    v105[5] = v164;
    v105[6] = 0LL;
    v105[7] = 0LL;
    WdLogEvent5_WdCriticalError(v105);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v165 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v165 + 32)) )
      KeWaitForSingleObject((char *)v165 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v165);
  }
  v166 = 1;
  if ( *(_DWORD *)(v169 + 352) == 1 )
  {
    if ( !v170 || (COREACCESS::AcquireShared((COREACCESS *)v167), *(_DWORD *)(v168 + 160) == 1) )
    {
      v83 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v167);
      COREACCESS::Release((COREACCESS *)v164);
      v83 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v164);
    v83 = -1073741130;
  }
  LOBYTE(AllocationInfo) = v83;
  if ( v83 < 0 )
  {
LABEL_178:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
    if ( v148 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v176);
LABEL_136:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
    if ( v155 != v156 && v155 )
      ExFreePoolWithTag(v155, 0);
    if ( P != v153 && P )
      ExFreePoolWithTag(P, 0);
    if ( v46 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v149);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v16[1].Next),
        v92,
        v94,
        (int)v16->Next,
        *((_QWORD *)&v16->Next + 1),
        (char)v16[1].Next,
        *((_DWORD *)&v16[5].Next + 2),
        AllocationInfo,
        HIDWORD(v16[1].Next),
        *((_DWORD *)&v16[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v93, &EventProfilerExit, v94, 2020);
    sub_1C0124B04(&v179);
    return (unsigned int)v83;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v83 = DXGCONTEXT::SubmitPresentHistoryToken(
            (struct _EX_RUNDOWN_REF *)v160,
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v9[22].Next + 1),
            (struct COREDEVICEACCESS *)v163,
            (struct CWin32kLocks *)v176,
            0,
            0LL,
            0LL,
            0LL);
    goto LABEL_178;
  }
  v106 = *(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL);
  v161[1] = (struct _SLIST_ENTRY *)v106;
  v107 = v106 + 1024;
  ++*(_DWORD *)(v106 + 1044);
  v112 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v106 + 1024));
  if ( !v112 )
  {
    ++*(_DWORD *)(v106 + 1048);
    v112 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v106 + 1072))(
                           *(unsigned int *)(v106 + 1060),
                           *(unsigned int *)(v106 + 1068),
                           *(unsigned int *)(v106 + 1064),
                           v106 + 1024);
  }
  v161[0] = v112;
  if ( !v112 )
  {
    v122 = WdLogNewEntry5_WdLowResource(v109, v108, v110, v111);
    *(_QWORD *)(v122 + 24) = 1103LL;
    WdLogEvent5_WdLowResource(v122);
    CVidSchSubmitData::~CVidSchSubmitData(v161);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
    if ( v148 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v176);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
    goto LABEL_91;
  }
  v113 = *(_QWORD *)(v106 + 16);
  if ( *(int *)(v113 + 1656) < 0x2000 )
    v114 = 1;
  else
    v114 = *(_DWORD *)(v113 + 232);
  if ( *(int *)(v113 + 1656) >= 0x2000 || *(_BYTE *)(v113 + 1940) )
    v115 = v114 * ((*(_DWORD *)(v113 + 1864) << 6) + 8) + 376;
  else
    v115 = 872;
  memset(v112, 0, v115);
  v116 = *(_QWORD *)(v106 + 16);
  v117 = *(_DWORD *)(v116 + 1656);
  if ( v117 < 0x2000 )
    v118 = 1;
  else
    v118 = *(_DWORD *)(v116 + 232);
  if ( v117 >= 0x2000 || (v119 = *(_BYTE *)(v116 + 1940)) != 0 )
    v119 = 1;
  v120 = *(_DWORD *)(v116 + 1864);
  *((_BYTE *)&v112[21].Next + 12) = v119;
  if ( v119 )
  {
    *((_DWORD *)&v112[22].Next + 3) = v120;
    LODWORD(v112[23].Next) = v118;
    HIDWORD(v112[23].Next) = ((v120 * v118) << 6) + 16;
    v121 = ((v120 * v118) << 6) + 376;
    LODWORD(v112[22].Next) = v121;
    HIDWORD(v112[22].Next) = v121 + 8 * v118;
  }
  v178 = DXGCONTEXT::Present(
           v160,
           (struct _D3DKMT_PRESENT *)v9,
           (struct COREDEVICEACCESS *)v163,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v147,
           (struct CWin32kLocks *)v176,
           (struct DXGCONTEXT **)P,
           (struct VIDSCH_SUBMIT_DATA_BASE *)v112);
  if ( v178 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v165) )
    {
      v123 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v163);
      if ( v123 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData(v161);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
        if ( v148 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v176);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
        if ( v155 != v156 && v155 )
          ExFreePoolWithTag(v155, 0);
        if ( P != v153 && P )
          ExFreePoolWithTag(P, 0);
        if ( v46 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v149);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
        if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_qpqqqpp(
            HIDWORD(v16[1].Next),
            v124,
            v126,
            (int)v16->Next,
            *((_QWORD *)&v16->Next + 1),
            (char)v16[1].Next,
            *((_DWORD *)&v16[5].Next + 2),
            6,
            HIDWORD(v16[1].Next),
            *((_DWORD *)&v16[1].Next + 2));
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v125, &EventProfilerExit, v126, 2020);
        sub_1C0124B04(&v179);
        return (unsigned int)v123;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v174 + 2), (struct COREDEVICEACCESS *)v163);
  }
  ++*(_DWORD *)(v107 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v107) < *(_WORD *)(v107 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v107, v112);
  }
  else
  {
    ++*(_DWORD *)(v107 + 32);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v107 + 56))(v112, v107);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
  if ( v148 )
  {
    v148 = 0;
    ExReleasePushLockSharedEx((char *)v147 + 104, 0LL);
    KeLeaveCriticalRegion();
    v128 = (DXGGLOBAL **)v147;
    v129 = _InterlockedDecrement64((volatile signed __int64 *)v147 + 3);
    if ( !v129 )
      DXGGLOBAL::DestroyAdapter(v128[2], (struct DXGADAPTER *)v128);
    if ( v129 < 0 )
    {
      v130 = WdLogNewEntry5_WdAssertion(v127);
      *(_QWORD *)(v130 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v130);
    }
  }
  if ( v178 >= 0 )
  {
    v131 = (_BYTE *)(v171 + 1488);
    if ( v171 + 1488 >= MmUserProbeAddress )
      v131 = (_BYTE *)MmUserProbeAddress;
    *v131 = v9[94].Next;
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v176);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v172);
  if ( v155 != v156 && v155 )
    ExFreePoolWithTag(v155, 0);
  if ( P != v153 && P )
    ExFreePoolWithTag(P, 0);
  if ( v46 && v150 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v46 + 80));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v151);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qpqqqpp(
      HIDWORD(v16[1].Next),
      v132,
      v134,
      (int)v16->Next,
      *((_QWORD *)&v16->Next + 1),
      (char)v16[1].Next,
      *((_DWORD *)&v16[5].Next + 2),
      v178,
      HIDWORD(v16[1].Next),
      *((_DWORD *)&v16[1].Next + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v133, &EventProfilerExit, v134, 2020);
  v135 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v136 = WdLogNewEntry5_WdAssertion(v133);
    *(_QWORD *)(v136 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v136);
    v135 = DXGGLOBAL::m_pGlobal;
  }
  v137 = (char *)v135 + 800;
  ++*((_DWORD *)v137 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v137) < *((_WORD *)v137 + 8) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v137, v9);
  }
  else
  {
    ++*((_DWORD *)v137 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v137 + 7))(v9, v137);
  }
  v138 = PsGetCurrentProcess();
  v139 = PsGetProcessWin32Process(v138);
  if ( v139 )
  {
    v15 = *(_QWORD *)(v139 + 248);
  }
  else
  {
    v144 = WdLogNewEntry5_WdEvent(v141, v140, v142, v143);
    *(_QWORD *)(v144 + 24) = v138;
    WdLogEvent5_WdEvent(v144);
  }
  v145 = *(_QWORD *)(v15 + 72);
  for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v145 + 88), (PKSPIN_LOCK)(v145 + 104));
        i;
        i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v145 + 88), (PKSPIN_LOCK)(v145 + 104)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
    operator delete(i);
  }
  return (unsigned int)v178;
}
