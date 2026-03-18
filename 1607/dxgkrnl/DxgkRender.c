/*
 * XREFs of DxgkRender @ 0x1C0175270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00B15B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C0144A60 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C015166C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C015180C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0156A7C (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // r13
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // edi
  _QWORD *PoolWithTag; // rcx
  __int64 v33; // rax
  unsigned int *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // edi
  unsigned int v38; // r10d
  unsigned int v39; // ecx
  __int64 v40; // r9
  unsigned int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned int *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int *v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r13
  __int64 v64; // r13
  unsigned __int8 IsDxgmms2; // cl
  struct DXGALLOCATION **v66; // rax
  struct DXGALLOCATION **Elements; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned int v76; // r13d
  __int64 v77; // r8
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  int v81; // edx
  int v82; // r8d
  int v83; // r9d
  __int64 v84; // r10
  unsigned int v85[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2013);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = PsGetCurrentProcess(v10);
    v11 = -1073741811;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v13 = qword_1C0056840;
    v14 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, 2013);
    return (unsigned int)v11;
  }
  v16 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  v17 = v3 + 156;
  v18 = 2LL;
  do
  {
    *v17 = *v16;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    v17[4] = v16[4];
    v17[5] = v16[5];
    v17[6] = v16[6];
    v17 += 8;
    *(v17 - 1) = v16[7];
    v16 += 8;
    --v18;
  }
  while ( v18 );
  *v17 = *v16;
  v17[1] = v16[1];
  v17[2] = v16[2];
  v17[3] = v16[3];
  v17[4] = v16[4];
  v17[5] = v16[5];
  v17[6] = v16[6];
  v19 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)(v3 + 4),
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270),
    (struct DXGPROCESS *)ProcessDxgProcess,
    (struct DXGCONTEXT **)v3 + 15,
    0);
  v21 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  if ( !v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v22[3] = ProcessDxgProcess;
    v22[4] = v19;
    v11 = -1073741811;
    v22[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v22);
LABEL_17:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 4));
    v14 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  if ( ((*(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4) | (unsigned __int8)(*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4) >> 1)) & 0x20) != 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v22[3] = v19;
    v11 = -1073741811;
    v22[4] = -1073741811LL;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(v21 + 350) )
  {
    v23 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v23 + 24) = v19;
    WdLogEvent5_WdError(v23);
LABEL_22:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 4));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v24, &EventProfilerExit, v25, 2013);
    return -1073741811LL;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 10),
    *(struct DXGDEVICE **)(v21 + 16));
  v29 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0);
  if ( (_DWORD)v29 && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL))
    || (unsigned int)v29 > 0x40 )
  {
    v30 = WdLogNewEntry5_WdWarning(v26, v29, v27, v28);
    *(_QWORD *)(v30 + 24) = v21;
    v11 = -1073741811;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
LABEL_29:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 10));
    goto LABEL_17;
  }
  v31 = v29 + 1;
  PoolWithTag = 0LL;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
  if ( (unsigned int)(v29 + 1) <= 4 )
  {
    PoolWithTag = v3 + 16;
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = ((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 64;
  }
  else
  {
    v27 = v31;
    v29 = 0xFFFFFFFFFFFFFFFFuLL % v31;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v31 < 8 )
      goto LABEL_37;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v31, 0x4B677844u);
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = PoolWithTag;
  }
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v31;
  if ( !PoolWithTag )
  {
LABEL_38:
    v33 = WdLogNewEntry5_WdWarning(PoolWithTag, v29, v27, v28);
    *(_QWORD *)(v33 + 24) = 119LL;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_39;
  }
  memset(PoolWithTag, 0, 8LL * v31);
  PoolWithTag = *(_QWORD **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
LABEL_37:
  if ( !PoolWithTag )
    goto LABEL_38;
  *PoolWithTag = v21;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)(v3 + 56),
    (struct _KTHREAD **)ProcessDxgProcess);
  v37 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) )
  {
    v38 = 1;
    *v3 = 1;
    while ( 1 )
    {
      v39 = (*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C4 + 4LL * v37) >> 6) & 0xFFFFFF;
      if ( v39 < *(_DWORD *)(ProcessDxgProcess + 224)
        && (v40 = *(_QWORD *)(ProcessDxgProcess + 208),
            v41 = *(_DWORD *)(v40 + 16LL * v39 + 8),
            *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C4 + 4LL * v37) >> 30 == ((v41 >> 4) & 3))
        && (v41 & 0x1000) == 0
        && (v41 & 0xF) != 0
        && (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0xF) == 7 )
      {
        v42 = *(_QWORD *)(v40 + 16LL * v39);
      }
      else
      {
        v42 = 0LL;
      }
      v43 = v38;
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) + 8LL * v38) = v42;
      v44 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) + 8LL * v38);
      if ( !v44 )
        break;
      v43 = *(_QWORD *)(v44 + 16);
      if ( v43 != *(_QWORD *)(v21 + 16) )
        break;
      if ( *(_BYTE *)(v44 + 350) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v45 + 24) = 162LL;
        WdLogEvent5_WdAssertion(v45);
        v38 = *v3;
      }
      ++v37;
      *v3 = ++v38;
      if ( v37 >= *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) )
        goto LABEL_65;
    }
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v43);
    v46[3] = v21;
    v46[4] = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C4 + 4LL * v37);
    v46[5] = v37;
    v11 = -1073741811;
    v46[6] = -1073741811LL;
    WdLogEvent5_WdError(v46);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 56));
    goto LABEL_62;
  }
LABEL_65:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 56));
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)(v3 + 42),
    *(const void **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
  if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) )
  {
    if ( *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) )
    {
      v53 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      *(_QWORD *)(v53 + 24) = 179LL;
      WdLogEvent5_WdWarning(v53);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)(v3 + 42));
      v54 = *(unsigned int **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      if ( v54 != v3 + 16 && v54 )
        ExFreePoolWithTag(v54, 0);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 10));
      goto LABEL_22;
    }
    v52 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
    *(_QWORD *)(v52 + 24) = 174LL;
    WdLogEvent5_WdWarning(v52);
    goto LABEL_68;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 34),
    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 64), *(_QWORD *)(v21 + 16), 0, v55, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  if ( v11 < 0 )
  {
LABEL_74:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 34));
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)(v3 + 42));
LABEL_62:
    v47 = *(unsigned int **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    if ( v47 != v3 + 16 && v47 )
      ExFreePoolWithTag(v47, 0);
    goto LABEL_29;
  }
  v59 = *(_QWORD *)(v21 + 48);
  v60 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x274);
  if ( v60 >= v59 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[4] = v60;
LABEL_79:
    v61[3] = v21;
    v62 = *(_QWORD *)(v21 + 48);
LABEL_80:
    v11 = -1073741811;
    v61[6] = -1073741811LL;
    goto LABEL_125;
  }
  v63 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278);
  if ( v60 + v63 > v59 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[4] = v63;
    goto LABEL_79;
  }
  v64 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x27C);
  if ( (unsigned int)v64 > *(_DWORD *)(v21 + 64) )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[3] = v21;
    v61[4] = v64;
    v62 = *(unsigned int *)(v21 + 64);
    goto LABEL_80;
  }
  if ( *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280) > *(_DWORD *)(v21 + 96) )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[3] = v21;
    v61[4] = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280);
    v62 = *(unsigned int *)(v21 + 96);
    goto LABEL_80;
  }
  v11 = 0;
  if ( !*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) )
  {
LABEL_104:
    v73 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4);
    if ( (v73 & 1) == 0 && (v73 & 2) == 0 && (v73 & 4) == 0 )
      goto LABEL_126;
    v74 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x290);
    if ( (*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4) & 1) == 0 )
      v74 = *(unsigned int *)(v21 + 176);
    *v3 = v74;
    v75 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0);
    if ( (v73 & 2) == 0 )
      v75 = *(unsigned int *)(v21 + 188);
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v75;
    v76 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0);
    if ( (v73 & 4) == 0 )
      v76 = *(_DWORD *)(v21 + 192);
    v77 = *(unsigned int *)(v21 + 176);
    if ( (unsigned int)v74 < (unsigned int)v77 )
      goto LABEL_120;
    if ( (unsigned int)v75 >= *(_DWORD *)(v21 + 188) && v76 >= *(_DWORD *)(v21 + 192) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118)) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 64));
      DXGCONTEXT::ResizeUserModeBuffers(
        (DXGCONTEXT *)v21,
        *(struct VIDMM_DMA_POOL **)(v21 + 208),
        *v3,
        *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        v76);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
      goto LABEL_126;
    }
    if ( (unsigned int)v74 < (unsigned int)v77 )
    {
LABEL_120:
      v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v77, v58);
      v78[3] = v21;
      v78[4] = *v3;
      v78[5] = *(unsigned int *)(v21 + 176);
      WdLogEvent5_WdWarning(v78);
    }
    if ( *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) < *(_DWORD *)(v21 + 188) )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v77, v58);
      v79[3] = v21;
      v79[4] = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v79[5] = *(unsigned int *)(v21 + 188);
      WdLogEvent5_WdWarning(v79);
    }
    if ( v76 >= *(_DWORD *)(v21 + 192) )
      goto LABEL_126;
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v77, v58);
    v61[3] = v21;
    v61[4] = v76;
    v62 = *(unsigned int *)(v21 + 192);
LABEL_125:
    v61[5] = v62;
    WdLogEvent5_WdWarning(v61);
LABEL_126:
    LODWORD(v80) = 0;
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    v81 = 0;
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    v82 = 0;
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) = 0;
    v83 = 0;
    if ( v11 != -1073741130 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 64));
      if ( !*(_BYTE *)(v21 + 350) )
        _guard_dispatch_icall_fptr();
      v83 = _guard_dispatch_icall_fptr();
      v80 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      v81 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v82 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
    }
    v84 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    *(_QWORD *)(v84 + 24) = *(_QWORD *)(v21 + 56);
    *(_DWORD *)(v84 + 32) = v80;
    *(_QWORD *)(v84 + 40) = *(_QWORD *)(v21 + 80);
    *(_DWORD *)(v84 + 48) = v81;
    *(_QWORD *)(v84 + 56) = *(_QWORD *)(v21 + 112);
    *(_DWORD *)(v84 + 64) = v82;
    *(_DWORD *)(v84 + 340) = v83;
    goto LABEL_74;
  }
  if ( (*(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4) & 0x20) != 0 )
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0x298);
  else
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(v21 + 80);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL));
  *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = IsDxgmms2;
  *v3 = v64;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x268) = 0;
  v66 = 0LL;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_96:
    if ( v11 >= 0 )
      v11 = DXGCONTEXT::Render(
              (DXGCONTEXT *)v21,
              (struct _D3DKMT_RENDER *)(v3 + 156),
              (struct COREDEVICEACCESS *)(v3 + 64),
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 34),
              *(struct DXGCONTEXT ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
              v66);
    if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
      DxgkUnreferenceAllocationList(
        v64,
        *(struct _EX_RUNDOWN_REF ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    if ( v11 >= 0 && (*(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4) & 0x10) != 0 )
      v11 = DXGCONTEXT::HandleVistaBltStub(
              (DXGCONTEXT *)v21,
              *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B8),
              (struct COREDEVICEACCESS *)(v3 + 64),
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 34),
              *(struct DXGCONTEXT ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)v3 + 44);
    if ( v11 < 0 )
      goto LABEL_126;
    goto LABEL_104;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v3 + 88, v64);
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Elements;
  if ( Elements )
  {
    v11 = DxgkReferenceAllocationList(
            (unsigned int *)((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL),
            *(struct _D3DDDI_ALLOCATIONLIST **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
            Elements,
            *(struct DXGDEVICE **)(v21 + 16));
    LODWORD(v64) = *v3;
    v66 = *(struct DXGALLOCATION ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_96;
  }
  v72 = WdLogNewEntry5_WdWarning(v69, v68, v70, v71);
  *(_QWORD *)(v72 + 24) = 262LL;
  WdLogEvent5_WdWarning(v72);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)v3 + 44);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 34));
LABEL_68:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)(v3 + 42));
LABEL_39:
  v34 = *(unsigned int **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( v34 != v3 + 16 && v34 )
    ExFreePoolWithTag(v34, 0);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 10));
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 4));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 2013);
  return 3221225495LL;
}
