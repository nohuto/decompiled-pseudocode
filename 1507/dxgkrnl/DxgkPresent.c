/*
 * XREFs of DxgkPresent @ 0x1C0069D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000E5C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_qpqqqpp @ 0x1C001F7E4 (Template_qpqqqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0069A30 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00BB890 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     _DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C00BE57C (_DxgkPresent_--_9_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C011ED98 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C011EDB4 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147AFC (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0148180 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  struct DXGGLOBAL *v6; // rbx
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // rcx
  PSLIST_ENTRY v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  PSLIST_ENTRY v15; // rdi
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  int Next; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct DXGCONTEXT *v42; // r12
  _QWORD *v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rbx
  struct _KEVENT *v46; // rbx
  unsigned __int8 v47; // bl
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // ebx
  __int64 v51; // rax
  __int64 v52; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // ebx
  _QWORD *v59; // r11
  __int64 v60; // rcx
  __int64 v61; // r9
  unsigned int v62; // r8d
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r10
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax
  struct DXGADAPTER *v76; // r15
  int v77; // eax
  int v78; // ebx
  _QWORD *v79; // rax
  DXGPRESENT *v80; // rax
  __int64 v81; // rcx
  DXGPRESENT *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  volatile signed __int64 *v93; // rcx
  __int64 v94; // rt0
  char v95; // of
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  _QWORD *v101; // rax
  __int64 v102; // r12
  __int64 v103; // rbx
  __int64 v104; // rcx
  PSLIST_ENTRY v105; // r15
  __int64 v106; // rcx
  int v107; // edx
  unsigned int v108; // eax
  __int64 v109; // rcx
  int v110; // eax
  int v111; // r8d
  char v112; // al
  int v113; // edx
  __int64 v114; // rax
  int v115; // r12d
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  DXGGLOBAL **v122; // rdx
  __int64 v123; // rbx
  __int64 v124; // rax
  _BYTE *v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  struct DXGGLOBAL *v130; // rbx
  __int64 v131; // rax
  char *v132; // rbx
  __int64 v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdi
  PLIST_ENTRY i; // rbx
  struct DXGADAPTER *v138; // [rsp+50h] [rbp-1B8h] BYREF
  char v139; // [rsp+58h] [rbp-1B0h]
  __int64 v140; // [rsp+60h] [rbp-1A8h] BYREF
  int v141; // [rsp+68h] [rbp-1A0h]
  _BYTE v142[16]; // [rsp+70h] [rbp-198h] BYREF
  PVOID P; // [rsp+80h] [rbp-188h]
  _BYTE v144[32]; // [rsp+88h] [rbp-180h] BYREF
  unsigned int v145; // [rsp+A8h] [rbp-160h]
  __int64 v146; // [rsp+B0h] [rbp-158h]
  struct _SLIST_ENTRY *v147[2]; // [rsp+B8h] [rbp-150h] BYREF
  struct DXGCONTEXT *v148; // [rsp+C8h] [rbp-140h] BYREF
  PSLIST_ENTRY v149; // [rsp+D0h] [rbp-138h]
  PSLIST_ENTRY v150; // [rsp+D8h] [rbp-130h]
  ULONG64 v151; // [rsp+E0h] [rbp-128h]
  char v152[8]; // [rsp+F0h] [rbp-118h] BYREF
  char v153[8]; // [rsp+F8h] [rbp-110h] BYREF
  DXGADAPTER *v154; // [rsp+100h] [rbp-108h]
  char v155; // [rsp+108h] [rbp-100h]
  char v156[8]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v157; // [rsp+118h] [rbp-F0h]
  __int64 v158; // [rsp+128h] [rbp-E0h]
  char v159; // [rsp+130h] [rbp-D8h]
  struct DXGCONTEXT *v160; // [rsp+140h] [rbp-C8h]
  _QWORD v161[6]; // [rsp+148h] [rbp-C0h] BYREF
  char v162; // [rsp+178h] [rbp-90h]
  __int64 v163; // [rsp+180h] [rbp-88h]
  _BYTE v164[24]; // [rsp+188h] [rbp-80h] BYREF
  _BYTE v165[64]; // [rsp+1A0h] [rbp-68h] BYREF
  int AllocationInfo; // [rsp+220h] [rbp+18h]
  int v167; // [rsp+220h] [rbp+18h]
  PSLIST_ENTRY v168; // [rsp+228h] [rbp+20h] BYREF

  v4 = a2;
  v151 = a1;
  LOBYTE(AllocationInfo) = 13;
  v6 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v7);
    v6 = DXGGLOBAL::m_pGlobal;
  }
  v8 = (char *)v6 + 656;
  ++*((_DWORD *)v8 + 5);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v8);
  v149 = v10;
  if ( !v10 )
  {
    ++*((_DWORD *)v8 + 6);
    v10 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v8 + 6))(
                          *((unsigned int *)v8 + 9),
                          *((unsigned int *)v8 + 11),
                          *((unsigned int *)v8 + 10),
                          v8);
    v149 = v10;
  }
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  memset(v10, 0, 0x5F0uLL);
  v168 = v10;
  v14 = 0LL;
  v15 = 0LL;
  if ( bTracingEnabled )
    v15 = v10;
  v150 = v15;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerEnter, v13, 2020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v21 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v22 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v22 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v22);
    v21 = 0LL;
  }
  v146 = v21;
  v147[0] = (struct _SLIST_ENTRY *)v21;
  if ( !v21 )
  {
    v23 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    *(_QWORD *)(v23 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v23);
    goto LABEL_17;
  }
  v28 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v28 = (_OWORD *)MmUserProbeAddress;
  v29 = v10;
  v30 = 11LL;
  do
  {
    *v29 = *v28;
    v29[1] = v28[1];
    v29[2] = v28[2];
    v29[3] = v28[3];
    v29[4] = v28[4];
    v29[5] = v28[5];
    v29[6] = v28[6];
    v29 += 8;
    *(v29 - 1) = v28[7];
    v28 += 8;
    --v30;
  }
  while ( v30 );
  *v29 = *v28;
  v29[1] = v28[1];
  v29[2] = v28[2];
  v29[3] = v28[3];
  v29[4] = v28[4];
  *((_QWORD *)v29 + 10) = *((_QWORD *)v28 + 10);
  if ( !v4 && (*(_DWORD *)(&v10[5].Next + 1) & 0x8000) == 0 )
  {
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v15[1].Next),
        0LL,
        v19,
        (int)v15->Next,
        *((_QWORD *)&v15->Next + 1),
        (char)v15[1].Next,
        *((_DWORD *)&v15[5].Next + 2),
        6,
        HIDWORD(v15[1].Next),
        *((_DWORD *)&v15[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q((__int64)v29, &EventProfilerExit, v19, 2020);
    DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x10000000) != 0 )
  {
    if ( !*((_DWORD *)&v10[90].Next + 2) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, 0LL, v19, v20);
      *(_QWORD *)(v31 + 24) = 926LL;
      WdLogEvent5_WdAssertion(v31);
    }
    Next = (int)v10->Next;
    LODWORD(v10->Next) = *((_DWORD *)&v10[90].Next + 2);
    *((_DWORD *)&v10[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       (struct DXGPROCESS *)v21,
                       (const struct _D3DKMT_PRESENT *)v10,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v10[94].Next + 4));
    if ( AllocationInfo < 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = HIDWORD(v10[1].Next);
      WdLogEvent5_WdWarning(v37);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v142,
    (unsigned int)v10->Next,
    (struct DXGPROCESS *)v21,
    &v148,
    0);
  v42 = v148;
  v160 = v148;
  if ( !v148 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    v43[3] = -1073741811LL;
    v43[4] = PsGetCurrentProcess();
    v43[5] = LODWORD(v10->Next);
    WdLogEvent5_WdWarning(v43);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
LABEL_17:
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v15[1].Next),
        v24,
        v26,
        (int)v15->Next,
        *((_QWORD *)&v15->Next + 1),
        (char)v15[1].Next,
        *((_DWORD *)&v15[5].Next + 2),
        AllocationInfo,
        HIDWORD(v15[1].Next),
        *((_DWORD *)&v15[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v25, &EventProfilerExit, v26, 2020);
    DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
    return 3221225485LL;
  }
  v44 = *((_QWORD *)v148 + 2);
  v163 = v44;
  v140 = v44;
  v141 = 0;
  if ( v44 )
  {
    v45 = *(_QWORD *)(v44 + 16);
    if ( *(_DWORD *)(v44 + 280) == 2 )
      v46 = (struct _KEVENT *)(v45 + 80);
    else
      v46 = (struct _KEVENT *)(v45 + 56);
    if ( !KeReadStateEvent(v46) )
      KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v44 + 80), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL) + 80LL));
      v47 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v44 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v48, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v44 + 80), 1u);
      if ( v47 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v44 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v49 = 1LL;
    v141 = 1;
  }
  else
  {
    v49 = 1LL;
  }
  v50 = *((_DWORD *)&v10[5].Next + 3);
  if ( v50 > 0x40 )
  {
    v51 = WdLogNewEntry5_WdWarning(v39, v38, v40, 1LL);
    *(_QWORD *)(v51 + 24) = v42;
    *(_QWORD *)(v51 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v51);
LABEL_61:
    if ( v44 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v140);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
    goto LABEL_17;
  }
  v52 = v50 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v145 = 0;
  if ( (unsigned int)v52 <= 4 )
  {
    PoolWithTag = v144;
    P = v144;
  }
  else
  {
    v40 = (unsigned int)v52;
    v38 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v52;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v52 < 8 )
      goto LABEL_70;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v52, 0x4B677844u);
    P = PoolWithTag;
  }
  v145 = v52;
  if ( !PoolWithTag )
  {
LABEL_71:
    v54 = WdLogNewEntry5_WdWarning(PoolWithTag, v38, v40, v49);
    *(_QWORD *)(v54 + 24) = 972LL;
    WdLogEvent5_WdWarning(v54);
    goto LABEL_72;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v52);
  PoolWithTag = P;
LABEL_70:
  if ( !PoolWithTag )
    goto LABEL_71;
  *PoolWithTag = v42;
  v138 = (struct DXGADAPTER *)P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v164, (struct DXGPROCESS *)v21);
  v58 = 0;
  if ( *((_DWORD *)&v10[5].Next + 3) )
  {
    v59 = P;
    while ( 1 )
    {
      v60 = (*((_DWORD *)&v10[6].Next + v58) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v60 < *(_DWORD *)(v21 + 232)
        && (v61 = *(_QWORD *)(v21 + 216),
            v62 = *(_DWORD *)(v61 + 16LL * (unsigned int)v60 + 8),
            *((_DWORD *)&v10[6].Next + v58) >> 30 == ((v62 >> 4) & 3))
        && (v62 & 0x1000) == 0
        && (v62 & 0xF) != 0
        && (v63 = 2 * v60, (*(_BYTE *)(v61 + 8 * v63 + 8) & 0xF) == 7) )
      {
        v64 = *(_QWORD *)(v61 + 8 * v63);
      }
      else
      {
        v64 = 0LL;
      }
      v65 = v58 + 1;
      v59[v65] = v64;
      v59 = P;
      v66 = *((_QWORD *)P + v65);
      if ( !v66 )
        break;
      v64 = *((_QWORD *)v42 + 2);
      if ( *(_QWORD *)(v66 + 16) != v64 )
        break;
      if ( v58
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v64 + 16) + 16LL))
        && *(_DWORD *)(*((_QWORD *)v138 + v68) + 328LL) <= *(_DWORD *)(*((_QWORD *)v138 + v58 - 1) + 328LL) )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v67);
        v69[3] = -1073741811LL;
        goto LABEL_102;
      }
      v58 = v65;
      if ( (unsigned int)v65 >= *((_DWORD *)&v10[5].Next + 3) )
        goto LABEL_106;
    }
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v64);
    v69[3] = v42;
    v69[4] = *((unsigned int *)&v10[6].Next + v58);
    v69[5] = v58;
    v69[6] = -1073741811LL;
LABEL_102:
    WdLogEvent5_WdError(v69);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v164);
    goto LABEL_103;
  }
LABEL_106:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v164);
  *((_QWORD *)&v10[93].Next + 1) = v138;
  LOBYTE(v10[94].Next) = 1;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v161,
    P,
    v145);
  if ( v162 )
  {
    if ( !v161[0] )
    {
      v74 = WdLogNewEntry5_WdWarning(v71, v70, v72, v73);
      *(_QWORD *)(v74 + 24) = 1036LL;
      WdLogEvent5_WdWarning(v74);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v161);
LABEL_72:
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      if ( v44 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v140);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
      if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qpqqqpp(
          HIDWORD(v15[1].Next),
          v55,
          v57,
          (int)v15->Next,
          *((_QWORD *)&v15->Next + 1),
          (char)v15[1].Next,
          *((_DWORD *)&v15[5].Next + 2),
          AllocationInfo,
          HIDWORD(v15[1].Next),
          *((_DWORD *)&v15[1].Next + 2));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v56, &EventProfilerExit, v57, 2020);
      DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
      return 3221225495LL;
    }
    v75 = WdLogNewEntry5_WdWarning(v71, v70, v72, v73);
    *(_QWORD *)(v75 + 24) = 1041LL;
    WdLogEvent5_WdWarning(v75);
    goto LABEL_110;
  }
  v76 = *(struct DXGADAPTER **)(*((_QWORD *)v42 + 2) + 18704LL);
  v77 = *((_DWORD *)&v10[5].Next + 2);
  if ( (v77 & 0x8000) != 0 )
  {
    if ( (v77 & 0x400000) != 0 || v10[90].Next )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v71);
      v79[3] = -1073741811LL;
      v79[4] = v42;
      v79[5] = *((unsigned int *)&v10[5].Next + 2);
      v79[6] = v10[90].Next;
      WdLogEvent5_WdError(v79);
      v78 = -1073741811;
    }
    else
    {
      v78 = 0;
    }
  }
  else if ( *((_QWORD *)v42 + 17)
         || ((v80 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL)) == 0LL
           ? (v82 = 0LL)
           : (v82 = DXGPRESENT::DXGPRESENT(v80, *(_DWORD *)(*((_QWORD *)v42 + 2) + 18712LL))),
             (*((_QWORD *)v42 + 17) = v82) != 0LL) )
  {
    v78 = DXGPRESENT::CopyPresentArgs(*((_QWORD *)v42 + 17), v42, (struct _D3DKMT_PRESENT *)v10, v73);
  }
  else
  {
    v83 = WdLogNewEntry5_WdLowResource(v81);
    *(_QWORD *)(v83 + 24) = -1073741801LL;
    *(_QWORD *)(v83 + 32) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL);
    *(struct _SLIST_ENTRY **)(v83 + 40) = v147[0];
    *(_QWORD *)(v83 + 48) = v42;
    WdLogEvent5_WdLowResource(v83);
    v78 = -1073741801;
  }
  LOBYTE(AllocationInfo) = v78;
  if ( v78 < 0 )
    goto LABEL_124;
  if ( (*(_DWORD *)(v151 + 88) & 0x10000000) != 0 )
  {
    if ( !v76 )
    {
      v87 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v87 + 24) = 1059LL;
      WdLogEvent5_WdError(v87);
LABEL_110:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v161);
LABEL_103:
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_61;
    }
    if ( (*((_DWORD *)v76 + 71) & 0x80u) == 0 )
    {
      v88 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v88 + 24) = 1065LL;
      WdLogEvent5_WdError(v88);
      goto LABEL_110;
    }
  }
  else if ( v76 )
  {
    if ( (*((_DWORD *)v76 + 71) & 0x80u) != 0 )
    {
      v89 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v89 + 24) = 1073LL;
      WdLogEvent5_WdError(v89);
      goto LABEL_110;
    }
  }
  else
  {
    v76 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v165, (const struct _DXGKWIN32KENG_INTERFACE *const)v147[0][5].Next, v76);
  v93 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL);
  v138 = (struct DXGADAPTER *)v93;
  v139 = 0;
  v94 = _InterlockedAdd64(v93 + 3, 1uLL);
  if ( (v94 < 0) ^ v95 | (v94 == 0) )
  {
    v96 = WdLogNewEntry5_WdAssertion(v93, v90, v91, v92);
    *(_QWORD *)(v96 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v96);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v138 + 104, 0LL);
  v139 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, *((_QWORD *)v42 + 2), 2, v97, 0);
  if ( v155 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v99, v98, v100);
    v101[3] = 275LL;
    v101[4] = 4LL;
    v101[5] = v153;
    v101[6] = 0LL;
    v101[7] = 0LL;
    WdLogEvent5_WdCriticalError(v101);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v154 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v154 + 32)) )
      KeWaitForSingleObject((char *)v154 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v154);
  }
  v155 = 1;
  if ( *(_DWORD *)(v158 + 352) == 1 )
  {
    if ( !v159 || (COREACCESS::AcquireShared((COREACCESS *)v156), *(_DWORD *)(v157 + 160) == 1) )
    {
      v78 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v156);
      COREACCESS::Release((COREACCESS *)v153);
      v78 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v153);
    v78 = -1073741130;
  }
  LOBYTE(AllocationInfo) = v78;
  if ( v78 < 0 )
  {
LABEL_161:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
    if ( v139 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v165);
LABEL_124:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v161);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    if ( v44 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v140);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_qpqqqpp(
        HIDWORD(v15[1].Next),
        v84,
        v86,
        (int)v15->Next,
        *((_QWORD *)&v15->Next + 1),
        (char)v15[1].Next,
        *((_DWORD *)&v15[5].Next + 2),
        AllocationInfo,
        HIDWORD(v15[1].Next),
        *((_DWORD *)&v15[1].Next + 2));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v85, &EventProfilerExit, v86, 2020);
    DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
    return (unsigned int)v78;
  }
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x200000) != 0 )
  {
    v78 = DXGCONTEXT::SubmitPresentHistoryToken(
            v148,
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v10[22].Next + 1),
            (struct COREDEVICEACCESS *)v152,
            (struct CWin32kLocks *)v165,
            0,
            0LL,
            0LL,
            0LL);
    goto LABEL_161;
  }
  v102 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL);
  v147[1] = (struct _SLIST_ENTRY *)v102;
  v103 = v102 + 944;
  ++*(_DWORD *)(v102 + 964);
  v105 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v102 + 944));
  if ( !v105 )
  {
    ++*(_DWORD *)(v102 + 968);
    v105 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v102 + 992))(
                           *(unsigned int *)(v102 + 980),
                           *(unsigned int *)(v102 + 988),
                           *(unsigned int *)(v102 + 984),
                           v102 + 944);
  }
  v147[0] = v105;
  if ( !v105 )
  {
    v114 = WdLogNewEntry5_WdLowResource(v104);
    *(_QWORD *)(v114 + 24) = 1106LL;
    WdLogEvent5_WdLowResource(v114);
    CVidSchSubmitData::~CVidSchSubmitData(v147);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
    if ( v139 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v165);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v161);
    goto LABEL_72;
  }
  v106 = *(_QWORD *)(v102 + 16);
  if ( *(int *)(v106 + 1648) < 0x2000 )
    v107 = 1;
  else
    v107 = *(_DWORD *)(v106 + 232);
  if ( *(int *)(v106 + 1648) >= 0x2000 || *(_BYTE *)(v106 + 1932) )
    v108 = v107 * (56 * *(_DWORD *)(v106 + 1856) + 8) + 376;
  else
    v108 = 808;
  memset(v105, 0, v108);
  v109 = *(_QWORD *)(v102 + 16);
  v110 = *(_DWORD *)(v109 + 1648);
  if ( v110 < 0x2000 )
    v111 = 1;
  else
    v111 = *(_DWORD *)(v109 + 232);
  if ( v110 >= 0x2000 || (v112 = *(_BYTE *)(v109 + 1932)) != 0 )
    v112 = 1;
  v113 = *(_DWORD *)(v109 + 1856);
  *((_BYTE *)&v105[21].Next + 12) = v112;
  if ( v112 )
  {
    *((_DWORD *)&v105[22].Next + 3) = v113;
    LODWORD(v105[23].Next) = v111;
    HIDWORD(v105[23].Next) = 56 * v113 * v111 + 16;
    LODWORD(v105[22].Next) = 56 * v113 * v111 + 376;
    HIDWORD(v105[22].Next) = 56 * v113 * v111 + 376 + 8 * v111;
  }
  v167 = DXGCONTEXT::Present(
           v148,
           (struct _D3DKMT_PRESENT *)v10,
           (struct COREDEVICEACCESS *)v152,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v138,
           (struct CWin32kLocks *)v165,
           (struct DXGCONTEXT **)P,
           (struct VIDSCH_SUBMIT_DATA_BASE *)v105);
  if ( v167 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v154) )
    {
      v115 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v152);
      if ( v115 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData(v147);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
        if ( v139 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v165);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v161);
        if ( P != v144 && P )
          ExFreePoolWithTag(P, 0);
        if ( v44 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v140);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
        if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_qpqqqpp(
            HIDWORD(v15[1].Next),
            v116,
            v118,
            (int)v15->Next,
            *((_QWORD *)&v15->Next + 1),
            (char)v15[1].Next,
            *((_DWORD *)&v15[5].Next + 2),
            6,
            HIDWORD(v15[1].Next),
            *((_DWORD *)&v15[1].Next + 2));
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v117, &EventProfilerExit, v118, 2020);
        DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE(&v168);
        return (unsigned int)v115;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v160 + 2), (struct COREDEVICEACCESS *)v152);
  }
  ++*(_DWORD *)(v103 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v103) < *(_WORD *)(v103 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v103, v105);
  }
  else
  {
    ++*(_DWORD *)(v103 + 32);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v103 + 56))(v105, v103);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
  if ( v139 )
  {
    v139 = 0;
    ExReleasePushLockSharedEx((char *)v138 + 104, 0LL);
    KeLeaveCriticalRegion();
    v122 = (DXGGLOBAL **)v138;
    v123 = _InterlockedDecrement64((volatile signed __int64 *)v138 + 3);
    if ( !v123 )
      DXGGLOBAL::DestroyAdapter(v122[2], (struct DXGADAPTER *)v122);
    if ( v123 < 0 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v119, v122, v120, v121);
      *(_QWORD *)(v124 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v124);
    }
  }
  if ( v167 >= 0 )
  {
    v125 = (_BYTE *)(v151 + 1488);
    if ( v151 + 1488 >= MmUserProbeAddress )
      v125 = (_BYTE *)MmUserProbeAddress;
    *v125 = v10[94].Next;
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v165);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v161);
  if ( P != v144 && P )
    ExFreePoolWithTag(P, 0);
  if ( v44 && v141 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v44 + 80));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_qpqqqpp(
      HIDWORD(v15[1].Next),
      v126,
      v128,
      (int)v15->Next,
      *((_QWORD *)&v15->Next + 1),
      (char)v15[1].Next,
      *((_DWORD *)&v15[5].Next + 2),
      v167,
      HIDWORD(v15[1].Next),
      *((_DWORD *)&v15[1].Next + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v127, &EventProfilerExit, v128, 2020);
  v130 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v131 = WdLogNewEntry5_WdAssertion(v127, v126, v128, v129);
    *(_QWORD *)(v131 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v131);
    v130 = DXGGLOBAL::m_pGlobal;
  }
  v132 = (char *)v130 + 656;
  ++*((_DWORD *)v132 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v132) < *((_WORD *)v132 + 8) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v132, v10);
  }
  else
  {
    ++*((_DWORD *)v132 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v132 + 7))(v10, v132);
  }
  v133 = PsGetCurrentProcess();
  v134 = PsGetProcessWin32Process(v133);
  if ( v134 )
  {
    v14 = *(_QWORD *)(v134 + 248);
  }
  else
  {
    v135 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v135 + 24) = v133;
    WdLogEvent5_WdEvent(v135);
  }
  v136 = *(_QWORD *)(v14 + 72);
  for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v136 + 88), (PKSPIN_LOCK)(v136 + 104));
        i;
        i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v136 + 88), (PKSPIN_LOCK)(v136 + 104)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
    operator delete(i);
  }
  return (unsigned int)v167;
}
