/*
 * XREFs of DxgkPresent @ 0x1C00C8CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0009F8C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000BE68 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_qpqqqpp @ 0x1C00261F8 (Template_qpqqqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00CA2E0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00CA5C4 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C014499C (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C01449B8 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     _DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C0144C74 (_DxgkPresent_--_3_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0171D7C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(ULONG64 a1, int a2)
{
  DXGGLOBAL *v4; // rbx
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // rcx
  PSLIST_ENTRY v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  PSLIST_ENTRY v12; // rdi
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rbx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int Next; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DXGCONTEXT *v38; // r12
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rbx
  struct _KEVENT *v43; // rbx
  unsigned __int8 v44; // bl
  __int64 v45; // r8
  unsigned int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _BYTE *v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // r13
  unsigned int v57; // ebx
  char *v58; // r11
  unsigned int v59; // ecx
  __int64 v60; // r9
  unsigned int v61; // r8d
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r10
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  struct DXGADAPTER *v75; // r13
  int v76; // eax
  int v77; // ebx
  _QWORD *v78; // rax
  DXGPRESENT *v79; // rax
  __int64 v80; // rcx
  DXGPRESENT *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rax
  struct DXGADAPTER *v88; // rbx
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  _QWORD *v93; // rax
  __int64 v94; // r13
  __int64 v95; // rcx
  PSLIST_ENTRY v96; // r15
  __int64 v97; // rcx
  int v98; // edx
  char v99; // al
  unsigned int v100; // eax
  __int64 v101; // rcx
  int v102; // eax
  int v103; // r8d
  char v104; // al
  int v105; // edx
  __int64 v106; // rax
  int v107; // r12d
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  DXGGLOBAL **v111; // rdx
  _BYTE *v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  DXGGLOBAL *v116; // rbx
  __int64 v117; // rax
  char *v118; // rbx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdi
  PLIST_ENTRY i; // rbx
  __int64 v124; // [rsp+50h] [rbp-208h] BYREF
  int v125; // [rsp+58h] [rbp-200h]
  _BYTE v126[16]; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID P; // [rsp+70h] [rbp-1E8h]
  _BYTE v128[32]; // [rsp+78h] [rbp-1E0h] BYREF
  unsigned int v129; // [rsp+98h] [rbp-1C0h]
  struct DXGPROCESS *v130; // [rsp+A0h] [rbp-1B8h]
  __int64 v131; // [rsp+A8h] [rbp-1B0h] BYREF
  struct DXGADAPTER *v132; // [rsp+B0h] [rbp-1A8h]
  char v133; // [rsp+B8h] [rbp-1A0h]
  PVOID v134; // [rsp+C0h] [rbp-198h]
  _BYTE v135[32]; // [rsp+C8h] [rbp-190h] BYREF
  int v136; // [rsp+E8h] [rbp-170h]
  struct DXGCONTEXT *v137; // [rsp+F0h] [rbp-168h] BYREF
  PSLIST_ENTRY v138; // [rsp+F8h] [rbp-160h]
  PSLIST_ENTRY v139; // [rsp+100h] [rbp-158h]
  DXGADAPTER *v140; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v141[16]; // [rsp+118h] [rbp-140h] BYREF
  DXGADAPTER *v142; // [rsp+128h] [rbp-130h]
  char v143; // [rsp+130h] [rbp-128h]
  _BYTE v144[16]; // [rsp+138h] [rbp-120h] BYREF
  __int64 v145; // [rsp+148h] [rbp-110h]
  __int64 v146; // [rsp+158h] [rbp-100h]
  char v147; // [rsp+160h] [rbp-F8h]
  struct DXGCONTEXT *v148; // [rsp+170h] [rbp-E8h]
  ULONG64 v149; // [rsp+178h] [rbp-E0h]
  __int64 v150; // [rsp+180h] [rbp-D8h]
  struct _SLIST_ENTRY *v151[2]; // [rsp+188h] [rbp-D0h] BYREF
  _QWORD v152[6]; // [rsp+198h] [rbp-C0h] BYREF
  char v153; // [rsp+1C8h] [rbp-90h]
  _BYTE v154[32]; // [rsp+1D0h] [rbp-88h] BYREF
  _BYTE v155[64]; // [rsp+1F0h] [rbp-68h] BYREF
  int AllocationInfo; // [rsp+270h] [rbp+18h]
  int v157; // [rsp+270h] [rbp+18h]
  PSLIST_ENTRY v158; // [rsp+278h] [rbp+20h] BYREF

  v149 = a1;
  LOBYTE(AllocationInfo) = 13;
  v4 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v5);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v6 = (char *)v4 + 640;
  ++*((_DWORD *)v6 + 5);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  v138 = v8;
  if ( !v8 )
  {
    ++*((_DWORD *)v6 + 6);
    v8 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v6 + 6))(
                         *((unsigned int *)v6 + 9),
                         *((unsigned int *)v6 + 11),
                         *((unsigned int *)v6 + 10),
                         v6);
    v138 = v8;
  }
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v9 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  memset(v8, 0, 0x5F0uLL);
  v158 = v8;
  v12 = 0LL;
  if ( bTracingEnabled )
    v12 = v8;
  v139 = v12;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerEnter, v11, 2020);
  CurrentProcess = PsGetCurrentProcess(v10);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v14);
  v130 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v18 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v19);
    WdLogEvent5_WdError(v18);
    goto LABEL_14;
  }
  v24 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v24 = (_OWORD *)MmUserProbeAddress;
  v25 = v8;
  v26 = 11LL;
  do
  {
    *v25 = *v24;
    v25[1] = v24[1];
    v25[2] = v24[2];
    v25[3] = v24[3];
    v25[4] = v24[4];
    v25[5] = v24[5];
    v25[6] = v24[6];
    v25 += 8;
    *(v25 - 1) = v24[7];
    v24 += 8;
    --v26;
  }
  while ( v26 );
  *v25 = *v24;
  v25[1] = v24[1];
  v25[2] = v24[2];
  v25[3] = v24[3];
  v25[4] = v24[4];
  *((_QWORD *)v25 + 10) = *((_QWORD *)v24 + 10);
  if ( !a2 && (*(_DWORD *)(&v8[5].Next + 1) & 0x8000) == 0 )
  {
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v12[1].Next),
        0LL,
        v17,
        (int)v12->Next,
        *((_QWORD *)&v12->Next + 1),
        (char)v12[1].Next,
        *((_DWORD *)&v12[5].Next + 2),
        6,
        HIDWORD(v12[1].Next),
        *((_DWORD *)&v12[1].Next + 2));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v25, &EventProfilerExit, v17, 2020);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v158);
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v8[5].Next + 1) & 0x10000000) != 0 )
  {
    if ( !*((_DWORD *)&v8[90].Next + 2) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v27 + 24) = 906LL;
      WdLogEvent5_WdAssertion(v27);
    }
    Next = (int)v8->Next;
    LODWORD(v8->Next) = *((_DWORD *)&v8[90].Next + 2);
    *((_DWORD *)&v8[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       ProcessDxgProcess,
                       (const struct _D3DKMT_PRESENT *)v8,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v8[94].Next + 4));
    if ( AllocationInfo < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v33 + 24) = HIDWORD(v8[1].Next);
      WdLogEvent5_WdWarning(v33);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v126,
    (unsigned int)v8->Next,
    ProcessDxgProcess,
    &v137,
    0);
  v38 = v137;
  v148 = v137;
  if ( !v137 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
    v39[3] = -1073741811LL;
    v39[4] = PsGetCurrentProcess(v40);
    v39[5] = LODWORD(v8->Next);
    WdLogEvent5_WdWarning(v39);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
LABEL_14:
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v12[1].Next),
        v20,
        v22,
        (int)v12->Next,
        *((_QWORD *)&v12->Next + 1),
        (char)v12[1].Next,
        *((_DWORD *)&v12[5].Next + 2),
        AllocationInfo,
        HIDWORD(v12[1].Next),
        *((_DWORD *)&v12[1].Next + 2));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v21, &EventProfilerExit, v22, 2020);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v158);
    return 3221225485LL;
  }
  v41 = *((_QWORD *)v137 + 2);
  v150 = v41;
  v124 = v41;
  v125 = 0;
  if ( v41 )
  {
    v42 = *(_QWORD *)(v41 + 16);
    if ( *(_DWORD *)(v41 + 304) == 2 )
      v43 = (struct _KEVENT *)(v42 + 80);
    else
      v43 = (struct _KEVENT *)(v42 + 56);
    if ( !KeReadStateEvent(v43) )
      KeWaitForSingleObject(v43, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v41 + 80), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 96LL));
      v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v45, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v41 + 80), 1u);
      if ( v44 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v125 = 1;
  }
  v46 = *((_DWORD *)&v8[5].Next + 3);
  if ( v46 > 0x40 )
  {
    v47 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
    *(_QWORD *)(v47 + 24) = v38;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v47);
LABEL_57:
    if ( v41 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v124);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
    goto LABEL_14;
  }
  v48 = v46 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v129 = 0;
  if ( (unsigned int)v48 <= 4 )
  {
    PoolWithTag = v128;
    P = v128;
  }
  else
  {
    v36 = (unsigned int)v48;
    v34 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v48;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v48 < 8 )
      goto LABEL_66;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v48, 0x4B677844u);
    P = PoolWithTag;
  }
  v129 = v48;
  if ( !PoolWithTag )
  {
LABEL_67:
    v50 = WdLogNewEntry5_WdWarning(PoolWithTag, v34, v36, v37);
    *(_QWORD *)(v50 + 24) = 954LL;
    WdLogEvent5_WdWarning(v50);
LABEL_68:
    if ( P != v128 && P )
      ExFreePoolWithTag(P, 0);
    if ( v41 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v124);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v12[1].Next),
        v51,
        v53,
        (int)v12->Next,
        *((_QWORD *)&v12->Next + 1),
        (char)v12[1].Next,
        *((_DWORD *)&v12[5].Next + 2),
        AllocationInfo,
        HIDWORD(v12[1].Next),
        *((_DWORD *)&v12[1].Next + 2));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v52, &EventProfilerExit, v53, 2020);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v158);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v48);
  PoolWithTag = P;
LABEL_66:
  if ( !PoolWithTag )
    goto LABEL_67;
  v54 = 0LL;
  v134 = 0LL;
  v136 = 0;
  if ( (unsigned int)v48 <= 4 )
  {
    v54 = v135;
    v134 = v135;
  }
  else
  {
    v36 = (unsigned int)v48;
    v34 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v48;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v48 < 8 )
      goto LABEL_86;
    v54 = ExAllocatePoolWithTag(PagedPool, 8 * v48, 0x4B677844u);
    v134 = v54;
    PoolWithTag = P;
  }
  v136 = v48;
  if ( !v54 )
  {
LABEL_87:
    v55 = WdLogNewEntry5_WdWarning(PoolWithTag, v34, v36, v54);
    *(_QWORD *)(v55 + 24) = 964LL;
    WdLogEvent5_WdWarning(v55);
LABEL_88:
    if ( v134 != v135 && v134 )
      ExFreePoolWithTag(v134, 0);
    goto LABEL_68;
  }
  memset(v54, 0, 8LL * (unsigned int)v48);
  PoolWithTag = P;
  v54 = v134;
LABEL_86:
  if ( !v54 )
    goto LABEL_87;
  *PoolWithTag = v38;
  *(_QWORD *)v134 = v38;
  v56 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v154, (struct _KTHREAD **)v130);
  v57 = 0;
  if ( *((_DWORD *)&v8[5].Next + 3) )
  {
    v58 = (char *)P;
    while ( 1 )
    {
      v59 = (*((_DWORD *)&v8[6].Next + v57) >> 6) & 0xFFFFFF;
      if ( v59 < *((_DWORD *)v130 + 56)
        && (v60 = *((_QWORD *)v130 + 26),
            v61 = *(_DWORD *)(v60 + 16LL * v59 + 8),
            *((_DWORD *)&v8[6].Next + v57) >> 30 == ((v61 >> 4) & 3))
        && (v61 & 0x1000) == 0
        && (v61 & 0xF) != 0
        && (*(_BYTE *)(v60 + 16LL * v59 + 8) & 0xF) == 7 )
      {
        v62 = *(_QWORD *)(v60 + 16LL * v59);
      }
      else
      {
        v62 = 0LL;
      }
      v63 = v57 + 1;
      v64 = 8 * v63;
      *(_QWORD *)&v58[v64] = v62;
      *(_QWORD *)((char *)v134 + v64) = v62;
      v58 = (char *)P;
      v65 = *((_QWORD *)P + v63);
      if ( !v65 )
        break;
      v64 = *((_QWORD *)v38 + 2);
      if ( *(_QWORD *)(v65 + 16) != v64 )
        break;
      if ( v57
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v64 + 16) + 16LL))
        && *(_DWORD *)(v56[v67] + 328LL) <= *(_DWORD *)(v56[v57 - 1] + 328LL) )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdError(v66);
        v68[3] = -1073741811LL;
        goto LABEL_109;
      }
      v57 = v63;
      if ( (unsigned int)v63 >= *((_DWORD *)&v8[5].Next + 3) )
        goto LABEL_116;
    }
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v64);
    v68[3] = v38;
    v68[4] = *((unsigned int *)&v8[6].Next + v57);
    v68[5] = v57;
    v68[6] = -1073741811LL;
LABEL_109:
    WdLogEvent5_WdError(v68);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v154);
    goto LABEL_110;
  }
LABEL_116:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v154);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v152,
    P,
    v129);
  if ( v153 )
  {
    if ( !v152[0] )
    {
      v73 = WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
      *(_QWORD *)(v73 + 24) = 1027LL;
      WdLogEvent5_WdWarning(v73);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
      goto LABEL_88;
    }
    v74 = WdLogNewEntry5_WdWarning(v70, v69, v71, v72);
    *(_QWORD *)(v74 + 24) = 1032LL;
    WdLogEvent5_WdWarning(v74);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
LABEL_110:
    if ( v134 != v135 && v134 )
      ExFreePoolWithTag(v134, 0);
    if ( P != v128 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_57;
  }
  *((_QWORD *)&v8[93].Next + 1) = v134;
  LOBYTE(v8[94].Next) = 1;
  v75 = *(struct DXGADAPTER **)(*((_QWORD *)v38 + 2) + 2856LL);
  v76 = *((_DWORD *)&v8[5].Next + 2);
  if ( (v76 & 0x8000) != 0 )
  {
    if ( (v76 & 0x400000) != 0 || v8[90].Next )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v70);
      v78[3] = -1073741811LL;
      v78[4] = v38;
      v78[5] = *((unsigned int *)&v8[5].Next + 2);
      v78[6] = v8[90].Next;
      WdLogEvent5_WdError(v78);
      v77 = -1073741811;
    }
    else
    {
      v77 = 0;
    }
  }
  else if ( *((_QWORD *)v38 + 17)
         || ((v79 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL)) == 0LL
           ? (v81 = 0LL)
           : (v81 = DXGPRESENT::DXGPRESENT(v79, *(_DWORD *)(*((_QWORD *)v38 + 2) + 2864LL))),
             (*((_QWORD *)v38 + 17) = v81) != 0LL) )
  {
    v77 = DXGPRESENT::CopyPresentArgs(*((DXGPRESENT **)v38 + 17), v38, (struct _D3DKMT_PRESENT *)v8);
  }
  else
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdLowResource(v80);
    v82[3] = -1073741801LL;
    v82[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL) + 16LL);
    v82[5] = v130;
    v82[6] = v38;
    WdLogEvent5_WdLowResource(v82);
    v77 = -1073741801;
  }
  LOBYTE(AllocationInfo) = v77;
  if ( v77 < 0 )
    goto LABEL_133;
  v86 = *((unsigned int *)&v8[5].Next + 2);
  if ( (v86 & 0x10000000) != 0 )
  {
    if ( !v75 )
    {
      v87 = WdLogNewEntry5_WdError(v86);
      *(_QWORD *)(v87 + 24) = 1053LL;
LABEL_151:
      WdLogEvent5_WdError(v87);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
      goto LABEL_110;
    }
    if ( (*((_DWORD *)v75 + 75) & 0x100) == 0 )
    {
      v87 = WdLogNewEntry5_WdError(v86);
      *(_QWORD *)(v87 + 24) = 1059LL;
      goto LABEL_151;
    }
  }
  else if ( v75 )
  {
    if ( (*((_DWORD *)v75 + 75) & 0x100) != 0 && (v86 & 0x18000) == 0 )
    {
      v87 = WdLogNewEntry5_WdError(v86);
      *(_QWORD *)(v87 + 24) = 1069LL;
      goto LABEL_151;
    }
  }
  else
  {
    v75 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v155, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v130 + 9), v75);
  v132 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL) + 16LL);
  v133 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v132 + 3);
  v131 = -1LL;
  v88 = v132;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v88 + 120, 0LL);
  v133 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v140, *((_QWORD *)v38 + 2), 2, v89, 0);
  if ( v143 )
  {
    v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v91, v90, v92);
    v93[3] = 275LL;
    v93[4] = 4LL;
    v93[5] = v141;
    v93[6] = 0LL;
    v93[7] = 0LL;
    WdLogEvent5_WdCriticalError(v93);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v142 + 2) )
      KeWaitForSingleObject((char *)v142 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v142);
  }
  v143 = 1;
  if ( *(_DWORD *)(v146 + 376) == 1 )
  {
    if ( !v147 || (COREACCESS::AcquireShared((COREACCESS *)v144), *(_DWORD *)(v145 + 176) == 1) )
    {
      v77 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v144);
      COREACCESS::Release((COREACCESS *)v141);
      v77 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v141);
    v77 = -1073741130;
  }
  LOBYTE(AllocationInfo) = v77;
  if ( v77 < 0 )
  {
LABEL_173:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v140);
    if ( v133 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v155);
LABEL_133:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
    if ( v134 != v135 && v134 )
      ExFreePoolWithTag(v134, 0);
    if ( P != v128 && P )
      ExFreePoolWithTag(P, 0);
    if ( v41 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v124);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v12[1].Next),
        v83,
        v85,
        (int)v12->Next,
        *((_QWORD *)&v12->Next + 1),
        (char)v12[1].Next,
        *((_DWORD *)&v12[5].Next + 2),
        AllocationInfo,
        HIDWORD(v12[1].Next),
        *((_DWORD *)&v12[1].Next + 2));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v84, &EventProfilerExit, v85, 2020);
    DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v158);
    return (unsigned int)v77;
  }
  if ( (*(_DWORD *)(&v8[5].Next + 1) & 0x200000) != 0 )
  {
    v77 = DXGCONTEXT::SubmitPresentHistoryToken(
            (struct _EX_RUNDOWN_REF *)v137,
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v8[22].Next + 1),
            (struct COREDEVICEACCESS *)&v140,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v131,
            (struct CWin32kLocks *)v155,
            0,
            0LL,
            0LL,
            0LL);
    goto LABEL_173;
  }
  v94 = *(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL);
  v151[1] = (struct _SLIST_ENTRY *)v94;
  ++*(_DWORD *)(v94 + 964);
  v96 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v94 + 944));
  if ( !v96 )
  {
    ++*(_DWORD *)(v94 + 968);
    v96 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v94 + 992))(
                          *(unsigned int *)(v94 + 980),
                          *(unsigned int *)(v94 + 988),
                          *(unsigned int *)(v94 + 984),
                          v94 + 944);
  }
  v151[0] = v96;
  if ( !v96 )
  {
    v106 = WdLogNewEntry5_WdLowResource(v95);
    *(_QWORD *)(v106 + 24) = 1102LL;
    WdLogEvent5_WdLowResource(v106);
    CVidSchSubmitData::~CVidSchSubmitData(v151);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v140);
    if ( v133 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v155);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
    goto LABEL_88;
  }
  v97 = *(_QWORD *)(v94 + 16);
  if ( *(int *)(v97 + 1792) < 0x2000 )
    v98 = 1;
  else
    v98 = *(_DWORD *)(v97 + 248);
  if ( *(int *)(v97 + 1792) >= 0x2000 || (v99 = *(_BYTE *)(v97 + 2076)) != 0 )
    v99 = 1;
  if ( v99 )
    v100 = *(_DWORD *)(v97 + 2000) * (48 * v98 + ((8 * v98 + 167) & 0xFFFFFFF8)) + 8 * (v98 + 55);
  else
    v100 = 936;
  memset(v96, 0, v100);
  v101 = *(_QWORD *)(v94 + 16);
  v102 = *(_DWORD *)(v101 + 1792);
  if ( v102 < 0x2000 )
    v103 = 1;
  else
    v103 = *(_DWORD *)(v101 + 248);
  if ( v102 >= 0x2000 || (v104 = *(_BYTE *)(v101 + 2076)) != 0 )
    v104 = 1;
  v105 = *(_DWORD *)(v101 + 2000);
  *((_BYTE *)&v96[21].Next + 12) = v104;
  if ( v104 )
  {
    *((_DWORD *)&v96[26].Next + 3) = v105;
    LODWORD(v96[27].Next) = v103;
    HIDWORD(v96[27].Next) = v105 * (48 * v103 + ((8 * v103 + 167) & 0xFFFFFFF8)) + 16;
    LODWORD(v96[26].Next) = v105 * (48 * v103 + ((8 * v103 + 167) & 0xFFFFFFF8)) + 440;
    HIDWORD(v96[26].Next) = v105 * (48 * v103 + ((8 * v103 + 167) & 0xFFFFFFF8)) + 440 + 8 * v103;
  }
  v157 = DXGCONTEXT::Present(
           v137,
           (struct _D3DKMT_PRESENT *)v8,
           &v140,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v131,
           (struct CWin32kLocks *)v155,
           (struct DXGCONTEXT **)P,
           (struct VIDSCH_SUBMIT_DATA_BASE *)v96);
  if ( v157 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v142) )
    {
      v107 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v140);
      if ( v107 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData(v151);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v140);
        if ( v133 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v155);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
        if ( v134 != v135 && v134 )
          ExFreePoolWithTag(v134, 0);
        if ( P != v128 && P )
          ExFreePoolWithTag(P, 0);
        if ( v41 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v124);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
        if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_qpqqqpp(
            HIDWORD(v12[1].Next),
            v108,
            v110,
            (int)v12->Next,
            *((_QWORD *)&v12->Next + 1),
            (char)v12[1].Next,
            *((_DWORD *)&v12[5].Next + 2),
            6,
            HIDWORD(v12[1].Next),
            *((_DWORD *)&v12[1].Next + 2));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v109, &EventProfilerExit, v110, 2020);
        DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v158);
        return (unsigned int)v107;
      }
      v38 = v148;
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v38 + 2), (struct COREDEVICEACCESS *)&v140);
  }
  ++*(_DWORD *)(v94 + 972);
  if ( ExQueryDepthSList((PSLIST_HEADER)(v94 + 944)) < *(_WORD *)(v94 + 960) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v94 + 944), v96);
  }
  else
  {
    ++*(_DWORD *)(v94 + 976);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v94 + 1000))(v96, v94 + 944);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v140);
  if ( v133 )
  {
    v133 = 0;
    ExReleasePushLockSharedEx((char *)v132 + 120, 0LL);
    KeLeaveCriticalRegion();
    v111 = (DXGGLOBAL **)v132;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v132 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v111[2], (struct DXGADAPTER *)v111);
  }
  if ( v157 >= 0 )
  {
    v112 = (_BYTE *)(v149 + 1488);
    if ( v149 + 1488 >= MmUserProbeAddress )
      v112 = (_BYTE *)MmUserProbeAddress;
    *v112 = v8[94].Next;
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v155);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v152);
  if ( v134 != v135 && v134 )
    ExFreePoolWithTag(v134, 0);
  if ( P != v128 && P )
    ExFreePoolWithTag(P, 0);
  if ( v41 && v125 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v41 + 80));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v126);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qpqqqpp(
      HIDWORD(v12[1].Next),
      v113,
      v115,
      (int)v12->Next,
      *((_QWORD *)&v12->Next + 1),
      (char)v12[1].Next,
      *((_DWORD *)&v12[5].Next + 2),
      v157,
      HIDWORD(v12[1].Next),
      *((_DWORD *)&v12[1].Next + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v114, &EventProfilerExit, v115, 2020);
  v116 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v117 = WdLogNewEntry5_WdAssertion(v114);
    *(_QWORD *)(v117 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v117);
    v116 = DXGGLOBAL::m_pGlobal;
  }
  v118 = (char *)v116 + 640;
  ++*((_DWORD *)v118 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v118) < *((_WORD *)v118 + 8) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v118, v8);
  }
  else
  {
    ++*((_DWORD *)v118 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v118 + 7))(v8, v118);
  }
  v120 = PsGetCurrentProcess(v119);
  v122 = *(_QWORD *)(PsGetProcessDxgProcess(v120, v121) + 64);
  for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v122 + 88), (PKSPIN_LOCK)(v122 + 104));
        i;
        i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v122 + 88), (PKSPIN_LOCK)(v122 + 104)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
    operator delete(i);
  }
  return (unsigned int)v157;
}
