/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C007C660
 * Callers:
 *     DxgkSubmitCommand @ 0x1C00B8DB0 (DxgkSubmitCommand.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007D300 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEA.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00AF0D4 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00B554C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00B5584 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00B55CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0124B5C (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C014EB88 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2)
{
  _D3DKMT_SUBMITCOMMAND *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGCONTEXT *v6; // r15
  _QWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // r14
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // bl
  __int64 v19; // r8
  __int64 BroadcastContextCount; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v22; // rax
  UINT v24; // esi
  DXGPUSHLOCK *v25; // rax
  D3DKMT_HANDLE v26; // ebx
  unsigned int v27; // ecx
  D3DKMT_HANDLE v28; // ebx
  __int64 v29; // r8
  unsigned int v30; // edx
  __int64 v31; // rbx
  PVOID v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r15
  volatile signed __int64 *v42; // rcx
  signed __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // rcx
  DXGCONTEXT *v51; // rbx
  _QWORD *v52; // rax
  char *v53; // rcx
  struct _VIDMM_MULTI_ALLOC **v54; // r14
  UINT NumHistoryBuffers; // eax
  __int64 Elements; // rbx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  UINT v62; // esi
  D3DKMT_HANDLE *v63; // rdx
  __int64 v64; // r15
  struct _EX_RUNDOWN_REF **v65; // rbx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // [rsp+30h] [rbp-408h] BYREF
  int v79; // [rsp+38h] [rbp-400h]
  struct DXGADAPTER *v80; // [rsp+40h] [rbp-3F8h] BYREF
  char v81; // [rsp+48h] [rbp-3F0h]
  _BYTE v82[16]; // [rsp+50h] [rbp-3E8h] BYREF
  PVOID P; // [rsp+60h] [rbp-3D8h] BYREF
  _BYTE v84[32]; // [rsp+68h] [rbp-3D0h] BYREF
  unsigned int v85; // [rsp+88h] [rbp-3B0h]
  UINT v86; // [rsp+90h] [rbp-3A8h]
  struct DXGCONTEXT *v87[3]; // [rsp+98h] [rbp-3A0h] BYREF
  _BYTE v88[8]; // [rsp+B0h] [rbp-388h] BYREF
  _BYTE v89[8]; // [rsp+B8h] [rbp-380h] BYREF
  DXGADAPTER *v90; // [rsp+C0h] [rbp-378h]
  char v91; // [rsp+C8h] [rbp-370h]
  _BYTE v92[8]; // [rsp+D0h] [rbp-368h] BYREF
  __int64 v93; // [rsp+D8h] [rbp-360h]
  __int64 v94; // [rsp+E8h] [rbp-350h]
  char v95; // [rsp+F0h] [rbp-348h]
  int v96; // [rsp+100h] [rbp-338h]
  __int64 v97; // [rsp+108h] [rbp-330h]
  __int64 v98; // [rsp+110h] [rbp-328h]
  struct _EX_RUNDOWN_REF *v99; // [rsp+118h] [rbp-320h] BYREF
  _QWORD v100[6]; // [rsp+120h] [rbp-318h] BYREF
  char v101; // [rsp+150h] [rbp-2E8h]
  PVOID v102; // [rsp+160h] [rbp-2D8h] BYREF
  char v103; // [rsp+168h] [rbp-2D0h] BYREF
  int v104; // [rsp+1E8h] [rbp-250h]
  _D3DKMT_SUBMITCOMMAND v105; // [rsp+1F0h] [rbp-248h] BYREF
  _BYTE v106[144]; // [rsp+370h] [rbp-C8h] BYREF

  v87[1] = a2;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
  v3 = &v105;
  v4 = 3LL;
  do
  {
    *(_OWORD *)&v3->Commands = *(_OWORD *)&a1->Commands;
    *(_OWORD *)&v3->PresentHistoryToken = *(_OWORD *)&a1->PresentHistoryToken;
    *(_OWORD *)&v3->BroadcastContext[1] = *(_OWORD *)&a1->BroadcastContext[1];
    *(_OWORD *)&v3->BroadcastContext[5] = *(_OWORD *)&a1->BroadcastContext[5];
    *(_OWORD *)&v3->BroadcastContext[9] = *(_OWORD *)&a1->BroadcastContext[9];
    *(_OWORD *)&v3->BroadcastContext[13] = *(_OWORD *)&a1->BroadcastContext[13];
    *(_OWORD *)&v3->BroadcastContext[17] = *(_OWORD *)&a1->BroadcastContext[17];
    v3 = (_D3DKMT_SUBMITCOMMAND *)((char *)v3 + 128);
    *(_OWORD *)&v3[-1].NumHistoryBuffers = *(_OWORD *)&a1->BroadcastContext[21];
    a1 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)a1 + 128);
    --v4;
  }
  while ( v4 );
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82, v105.BroadcastContext[0], a2, v87, 0);
  v6 = v87[0];
  if ( !v87[0] )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = a2;
    v7[4] = v105.BroadcastContext[0];
    v7[5] = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_125:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    return 3221225485LL;
  }
  v8 = *((_QWORD *)v87[0] + 2);
  v78 = v8;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
  if ( *(int *)(v9 + 1656) >= 0x2000 || *(_BYTE *)(v9 + 1940) )
  {
    v11 = *((_DWORD *)DXGGLOBAL::GetGlobal(v9) + 231);
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v79 = v11;
  v12 = *(_QWORD *)(v8 + 16);
  if ( *(_DWORD *)(v8 + 280) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v12 + 80)) )
      goto LABEL_17;
    v13 = (void *)(v12 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v12 + 56)) )
      goto LABEL_17;
    v13 = (void *)(v12 + 56);
  }
  KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v11 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 88, 0LL) )
      goto LABEL_28;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 80LL));
    v18 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 80), 0) )
      goto LABEL_28;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 80LL));
    v18 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v19, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 80), 1u);
  }
  if ( v18 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_28:
  BroadcastContextCount = v105.BroadcastContextCount;
  if ( v105.BroadcastContextCount - 1 > 0x3F )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v77[3] = v6;
    v77[4] = v105.BroadcastContextCount;
    v77[5] = 64LL;
    v77[6] = -1073741811LL;
    WdLogEvent5_WdError(v77);
LABEL_124:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v78);
    goto LABEL_125;
  }
  PoolWithTag = 0LL;
  P = 0LL;
  v85 = 0;
  if ( v105.BroadcastContextCount <= 4 )
  {
    PoolWithTag = v84;
    P = v84;
  }
  else
  {
    v14 = 0xFFFFFFFFFFFFFFFFuLL % v105.BroadcastContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v105.BroadcastContextCount < 8 )
      goto LABEL_35;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v105.BroadcastContextCount, 0x4B677844u);
    P = PoolWithTag;
  }
  v85 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_36:
    v22 = WdLogNewEntry5_WdLowResource(PoolWithTag, v14, v16, v17);
    *(_QWORD *)(v22 + 24) = 1297LL;
    WdLogEvent5_WdLowResource(v22);
LABEL_37:
    if ( P != v84 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v78);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  PoolWithTag = P;
LABEL_35:
  if ( !PoolWithTag )
    goto LABEL_36;
  *PoolWithTag = v6;
  v24 = 1;
  if ( v105.BroadcastContextCount > 1 )
  {
    v25 = (struct DXGPROCESS *)((char *)a2 + 192);
    while ( 1 )
    {
      v26 = v105.BroadcastContext[v24];
      DXGPUSHLOCK::AcquireShared(v25);
      v27 = (v26 >> 6) & 0xFFFFFF;
      v28 = v26 >> 30;
      if ( v27 < *((_DWORD *)a2 + 58)
        && (v29 = *((_QWORD *)a2 + 27), v30 = *(_DWORD *)(v29 + 16LL * v27 + 8), v28 == ((v30 >> 4) & 3))
        && (v30 & 0x1000) == 0
        && (v30 & 0xF) != 0
        && (*(_BYTE *)(v29 + 16LL * v27 + 8) & 0xF) == 7 )
      {
        v31 = *(_QWORD *)(v29 + 16LL * v27);
      }
      else
      {
        v31 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)a2 + 192, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)P + v24) = v31;
      v32 = P;
      v33 = *((_QWORD *)P + v24);
      if ( !v33 )
        break;
      v33 = *(_QWORD *)(v33 + 16);
      if ( v33 != *((_QWORD *)v6 + 2) )
        break;
      ++v24;
      v25 = (struct DXGPROCESS *)((char *)a2 + 192);
      if ( v24 >= v105.BroadcastContextCount )
        goto LABEL_59;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v34[3] = v6;
    v34[4] = v105.BroadcastContext[v24];
    v34[5] = v24;
    v34[6] = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_55;
  }
  v32 = P;
LABEL_59:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v100,
    v32,
    v85);
  if ( v101 )
  {
    if ( !v100[0] )
    {
      v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = 1338LL;
      WdLogEvent5_WdWarning(v39);
LABEL_62:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
      goto LABEL_37;
    }
    v40 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = 1343LL;
    WdLogEvent5_WdWarning(v40);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
LABEL_55:
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_124;
  }
  v41 = *((_QWORD *)v6 + 2);
  v98 = v41;
  v42 = *(volatile signed __int64 **)(*(_QWORD *)(v41 + 16) + 16LL);
  v80 = (struct DXGADAPTER *)v42;
  v43 = _InterlockedExchangeAdd64(v42 + 3, 1uLL);
  if ( (v43 + 1 < 0) ^ __OFADD__(1LL, v43) | (v43 == -1) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v44 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v44);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v80 + 104, 0LL);
  v81 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v88, v41, 0, v45, 0);
  if ( v91 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v48);
    v49[3] = 275LL;
    v49[4] = 4LL;
    v49[5] = v89;
    v49[6] = 0LL;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v90 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v90 + 32)) )
      KeWaitForSingleObject((char *)v90 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v90);
  }
  v91 = 1;
  v50 = *(unsigned int *)(v94 + 352);
  if ( (_DWORD)v50 != 1 )
    goto LABEL_76;
  if ( v95 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v92);
    v50 = *(unsigned int *)(v93 + 160);
    if ( (_DWORD)v50 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v92);
LABEL_76:
      COREACCESS::Release((COREACCESS *)v89);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v80);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
      if ( P != v84 && P )
        ExFreePoolWithTag(P, 0);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v78);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
      return 3221226166LL;
    }
  }
  v51 = v87[0];
  if ( !*((_BYTE *)v87[0] + 350) )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v50);
    v52[3] = a2;
    v52[4] = v105.BroadcastContext[0];
    v52[5] = -1073741811LL;
    v52[6] = 1365LL;
    WdLogEvent5_WdError(v52);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v80);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
    goto LABEL_55;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v106);
  v53 = 0LL;
  v102 = 0LL;
  v104 = 0;
  v54 = 0LL;
  NumHistoryBuffers = v105.NumHistoryBuffers;
  if ( v105.NumHistoryBuffers )
  {
    Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v106, v105.NumHistoryBuffers);
    v97 = Elements;
    v57 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v102, v105.NumHistoryBuffers);
    v54 = (struct _VIDMM_MULTI_ALLOC **)v57;
    if ( !Elements || !v57 )
    {
      v72 = WdLogNewEntry5_WdLowResource(v59, v58, v60, v61);
      *(_QWORD *)(v72 + 24) = 1402LL;
      WdLogEvent5_WdLowResource(v72);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v102);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v106);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v80);
      goto LABEL_62;
    }
    v62 = 0;
    v86 = 0;
    while ( v62 < v105.NumHistoryBuffers )
    {
      v63 = &v105.HistoryBufferArray[v62];
      if ( (unsigned __int64)v63 >= MmUserProbeAddress )
        v63 = (D3DKMT_HANDLE *)MmUserProbeAddress;
      v64 = *v63;
      v96 = v64;
      v65 = (struct _EX_RUNDOWN_REF **)(8LL * v62 + Elements);
      AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                  (__int64)a2,
                                                  (DXGALLOCATIONREFERENCE *)&v99,
                                                  v64);
      DXGALLOCATIONREFERENCE::Assign(v65, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v99);
      if ( !*v65 )
      {
        v68 = WdLogNewEntry5_WdError(v67);
        *(_QWORD *)(v68 + 24) = v64;
        WdLogEvent5_WdError(v68);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v102);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v106);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
        if ( v81 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v80);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v78);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
        return 3221225485LL;
      }
      v54[v62++] = (struct _VIDMM_MULTI_ALLOC *)(*v65)[3].Count;
      v86 = v62;
      Elements = v97;
    }
    v70 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v98 + 16) + 424LL)
                                                                                              + 8LL)
                                                                                  + 1032LL))(
            *(_QWORD *)(*(_QWORD *)(v98 + 16) + 432LL),
            v54,
            v105.NumHistoryBuffers);
    if ( v70 >= 0 )
    {
      NumHistoryBuffers = v105.NumHistoryBuffers;
      v53 = (char *)v102;
      v51 = v87[0];
      goto LABEL_103;
    }
    v71 = WdLogNewEntry5_WdError(v69);
    *(_QWORD *)(v71 + 24) = 1459LL;
    WdLogEvent5_WdError(v71);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v102);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v106);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
    if ( v81 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v80);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v78);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    return (unsigned int)v70;
  }
  else
  {
LABEL_103:
    if ( v105.CommandLength )
    {
      if ( v105.NumPrimaries <= 0x10 )
      {
        v10 = DXGCONTEXT::SubmitCommand(
                v51,
                &v105,
                (struct COREDEVICEACCESS *)v88,
                (struct DXGCONTEXT **)P,
                v54,
                NumHistoryBuffers);
      }
      else
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdError(v53);
        v73[3] = v51;
        v73[4] = v105.NumPrimaries;
        v73[5] = 16LL;
        v73[6] = -1073741811LL;
        WdLogEvent5_WdError(v73);
        v10 = -1073741811;
      }
      v53 = (char *)v102;
    }
    if ( v53 != &v103 && v53 )
      ExFreePoolWithTag(v53, 0);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v106);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
    if ( v81 )
    {
      ExReleasePushLockSharedEx((char *)v80 + 104, 0LL);
      KeLeaveCriticalRegion();
      v75 = _InterlockedDecrement64((volatile signed __int64 *)v80 + 3);
      if ( !v75 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v80 + 2), v80);
      if ( v75 < 0 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v74);
        *(_QWORD *)(v76 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v76);
      }
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    if ( v79 )
      ExReleasePushLockSharedEx(v78 + 88, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v78 + 80));
    KeLeaveCriticalRegion();
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    return v10;
  }
}
