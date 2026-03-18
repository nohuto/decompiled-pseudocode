/*
 * XREFs of DxgkRender @ 0x1C014F530
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001678 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0088FD0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01249EC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0133254 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0137270 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // edi
  _QWORD *PoolWithTag; // rcx
  __int64 v31; // rax
  unsigned int *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  unsigned int v36; // edi
  DXGPUSHLOCK *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
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
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2013);
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v8);
    v9 = -1073741811;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2013);
    return (unsigned int)v9;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  v15 = v3 + 144;
  v16 = 2LL;
  do
  {
    *v15 = *v14;
    v15[1] = v14[1];
    v15[2] = v14[2];
    v15[3] = v14[3];
    v15[4] = v14[4];
    v15[5] = v14[5];
    v15[6] = v14[6];
    v15 += 8;
    *(v15 - 1) = v14[7];
    v14 += 8;
    --v16;
  }
  while ( v16 );
  *v15 = *v14;
  v15[1] = v14[1];
  v15[2] = v14[2];
  v15[3] = v14[3];
  v15[4] = v14[4];
  v15[5] = v14[5];
  v15[6] = v14[6];
  v17 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)(v3 + 6),
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240),
    Current,
    (struct DXGCONTEXT **)v3 + 17,
    0);
  v19 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
  if ( !v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20[3] = Current;
    v20[4] = v17;
    v9 = -1073741811;
    v20[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdError(v20);
LABEL_17:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  if ( ((*(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x284) | (unsigned __int8)(*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x284) >> 1)) & 0x20) != 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20[3] = v17;
    v9 = -1073741811;
    v20[4] = -1073741811LL;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(v19 + 350) )
  {
    v21 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v21 + 24) = v17;
    WdLogEvent5_WdError(v21);
LABEL_22:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v22, &EventProfilerExit, v23, 2013);
    return -1073741811LL;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 12),
    *(struct DXGDEVICE **)(v19 + 16));
  v27 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x290);
  if ( (_DWORD)v27 && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL))
    || (unsigned int)v27 > 0x40 )
  {
    v28 = WdLogNewEntry5_WdWarning(v24, v27, v25, v26);
    *(_QWORD *)(v28 + 24) = v19;
    v9 = -1073741811;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
LABEL_29:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 12));
    goto LABEL_17;
  }
  v29 = v27 + 1;
  PoolWithTag = 0LL;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0;
  if ( (unsigned int)(v27 + 1) <= 4 )
  {
    PoolWithTag = v3 + 18;
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 72;
  }
  else
  {
    v25 = v29;
    v27 = 0xFFFFFFFFFFFFFFFFuLL % v29;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v29 < 8 )
      goto LABEL_37;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v29, 0x4B677844u);
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = PoolWithTag;
  }
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v29;
  if ( !PoolWithTag )
  {
LABEL_38:
    v31 = WdLogNewEntry5_WdWarning(PoolWithTag, v27, v25, v26);
    *(_QWORD *)(v31 + 24) = 113LL;
    WdLogEvent5_WdWarning(v31);
    goto LABEL_39;
  }
  memset(PoolWithTag, 0, 8LL * v29);
  PoolWithTag = *(_QWORD **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_37:
  if ( !PoolWithTag )
    goto LABEL_38;
  *PoolWithTag = v19;
  v35 = 0LL;
  *v3 = 0;
  v36 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x290);
  if ( v36 )
  {
    v37 = (struct DXGPROCESS *)((char *)Current + 192);
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
    while ( 1 )
    {
      *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0x294
                                                                                      + 4 * v35);
      DXGPUSHLOCK::AcquireShared(v37);
      v38 = (*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 < *((_DWORD *)Current + 58)
        && (v39 = *((_QWORD *)Current + 27),
            v40 = *(_DWORD *)(v39 + 16LL * (unsigned int)v38 + 8),
            *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) >> 30 == ((v40 >> 4) & 3))
        && (v40 & 0x1000) == 0
        && (v40 & 0xF) != 0
        && (v41 = 2 * v38, (*(_BYTE *)(v39 + 8 * v41 + 8) & 0xF) == 7) )
      {
        *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v39 + 8 * v41);
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      }
      ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
      v42 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 8 * v42) = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v43 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 8 * v42);
      if ( !v43 )
        break;
      v42 = *(_QWORD *)(v43 + 16);
      if ( v42 != *(_QWORD *)(v19 + 16) )
        break;
      if ( *(_BYTE *)(v43 + 350) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v44 + 24) = 149LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v35 = *v3 + 1;
      *v3 = v35;
      ++*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v37 = (struct DXGPROCESS *)((char *)Current + 192);
      if ( (unsigned int)v35 >= v36 )
        goto LABEL_65;
    }
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v45[3] = v19;
    v46 = *v3;
    v45[4] = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x294 + 4 * v46);
    v45[5] = v46;
    v9 = -1073741811;
    v45[6] = -1073741811LL;
    WdLogEvent5_WdError(v45);
    goto LABEL_62;
  }
LABEL_65:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)(v3 + 40),
    *(const void **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
  if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) )
  {
    if ( *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) )
    {
      v53 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      *(_QWORD *)(v53 + 24) = 165LL;
      WdLogEvent5_WdWarning(v53);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)(v3 + 40));
      v54 = *(unsigned int **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      if ( v54 != v3 + 18 && v54 )
        ExFreePoolWithTag(v54, 0);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 12));
      goto LABEL_22;
    }
    v52 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
    *(_QWORD *)(v52 + 24) = 160LL;
    WdLogEvent5_WdWarning(v52);
    goto LABEL_68;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 28),
    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 56), *(_QWORD *)(v19 + 16), 0, v55, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 56));
  if ( v9 < 0 )
  {
LABEL_74:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 56));
    if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 28));
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)(v3 + 40));
LABEL_62:
    v47 = *(unsigned int **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( v47 != v3 + 18 && v47 )
      ExFreePoolWithTag(v47, 0);
    goto LABEL_29;
  }
  v59 = *(_QWORD *)(v19 + 48);
  v60 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x244);
  if ( v60 >= v59 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[4] = v60;
LABEL_79:
    v61[3] = v19;
    v62 = *(_QWORD *)(v19 + 48);
LABEL_80:
    v9 = -1073741811;
    v61[6] = -1073741811LL;
    goto LABEL_122;
  }
  v63 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248);
  if ( v60 + v63 > v59 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[4] = v63;
    goto LABEL_79;
  }
  v64 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24C);
  if ( (unsigned int)v64 > *(_DWORD *)(v19 + 64) )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[3] = v19;
    v61[4] = v64;
    v62 = *(unsigned int *)(v19 + 64);
    goto LABEL_80;
  }
  if ( *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) > *(_DWORD *)(v19 + 96) )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v56, v57, v58);
    v61[3] = v19;
    v61[4] = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250);
    v62 = *(unsigned int *)(v19 + 96);
    goto LABEL_80;
  }
  v9 = 0;
  if ( !*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) )
  {
LABEL_101:
    v73 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x284);
    if ( (v73 & 1) == 0 && (v73 & 2) == 0 && (v73 & 4) == 0 )
      goto LABEL_123;
    v74 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260);
    if ( (*(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x284) & 1) == 0 )
      v74 = *(unsigned int *)(v19 + 176);
    *v3 = v74;
    v75 = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270);
    if ( (v73 & 2) == 0 )
      v75 = *(unsigned int *)(v19 + 188);
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v75;
    v76 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280);
    if ( (v73 & 4) == 0 )
      v76 = *(_DWORD *)(v19 + 192);
    v77 = *(unsigned int *)(v19 + 176);
    if ( (unsigned int)v74 < (unsigned int)v77 )
      goto LABEL_117;
    if ( (unsigned int)v75 >= *(_DWORD *)(v19 + 188) && v76 >= *(_DWORD *)(v19 + 192) )
    {
      if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0)) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 56));
      DXGCONTEXT::ResizeUserModeBuffers(
        (DXGCONTEXT *)v19,
        *(struct VIDMM_DMA_POOL **)(v19 + 208),
        *v3,
        *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        v76);
      v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 56));
      goto LABEL_123;
    }
    if ( (unsigned int)v74 < (unsigned int)v77 )
    {
LABEL_117:
      v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v77, v58);
      v78[3] = v19;
      v78[4] = *v3;
      v78[5] = *(unsigned int *)(v19 + 176);
      WdLogEvent5_WdWarning(v78);
    }
    if ( *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) < *(_DWORD *)(v19 + 188) )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v77, v58);
      v79[3] = v19;
      v79[4] = *(unsigned int *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v79[5] = *(unsigned int *)(v19 + 188);
      WdLogEvent5_WdWarning(v79);
    }
    if ( v76 >= *(_DWORD *)(v19 + 192) )
      goto LABEL_123;
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, v74, v77, v58);
    v61[3] = v19;
    v61[4] = v76;
    v62 = *(unsigned int *)(v19 + 192);
LABEL_122:
    v61[5] = v62;
    WdLogEvent5_WdWarning(v61);
LABEL_123:
    LODWORD(v80) = 0;
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
    v81 = 0;
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 0;
    v82 = 0;
    *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
    v83 = 0;
    if ( v9 != -1073741130 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 56));
      if ( !*(_BYTE *)(v19 + 350) )
        _guard_dispatch_icall_fptr();
      v83 = _guard_dispatch_icall_fptr();
      v80 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      v81 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
      v82 = *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    v84 = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
    *(_QWORD *)(v84 + 24) = *(_QWORD *)(v19 + 56);
    *(_DWORD *)(v84 + 32) = v80;
    *(_QWORD *)(v84 + 40) = *(_QWORD *)(v19 + 80);
    *(_DWORD *)(v84 + 48) = v81;
    *(_QWORD *)(v84 + 56) = *(_QWORD *)(v19 + 112);
    *(_DWORD *)(v84 + 64) = v82;
    *(_DWORD *)(v84 + 340) = v83;
    goto LABEL_74;
  }
  if ( (*(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x284) & 0x20) != 0 )
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                 + 0x268);
  else
    *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)(v19 + 80);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL));
  *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = IsDxgmms2;
  *v3 = v64;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
  *(_DWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = 0;
  v66 = 0LL;
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  if ( !IsDxgmms2 )
  {
LABEL_96:
    if ( v9 >= 0 )
      v9 = DXGCONTEXT::Render(
             (DXGCONTEXT *)v19,
             (struct _D3DKMT_RENDER *)(v3 + 144),
             (struct COREDEVICEACCESS *)(v3 + 56),
             *(struct DXGCONTEXT ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
             v66);
    if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
      DxgkUnreferenceAllocationList(
        v64,
        *(struct _EX_RUNDOWN_REF ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)v3 + 38);
    if ( v9 < 0 )
      goto LABEL_123;
    goto LABEL_101;
  }
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v3 + 76, v64);
  *(_QWORD *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = Elements;
  if ( Elements )
  {
    v9 = DxgkReferenceAllocationList(
           (unsigned int *)((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL),
           *(struct _D3DDDI_ALLOCATIONLIST **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
           Elements);
    LODWORD(v64) = *v3;
    v66 = *(struct DXGALLOCATION ***)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_96;
  }
  v72 = WdLogNewEntry5_WdWarning(v69, v68, v70, v71);
  *(_QWORD *)(v72 + 24) = 248LL;
  WdLogEvent5_WdWarning(v72);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)v3 + 38);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 56));
  if ( *(_BYTE *)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 28));
LABEL_68:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)(v3 + 40));
LABEL_39:
  v32 = *(unsigned int **)(((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( v32 != v3 + 18 && v32 )
    ExFreePoolWithTag(v32, 0);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 12));
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 2013);
  return 3221225495LL;
}
