/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00A6890
 * Callers:
 *     DxgkSubmitCommand @ 0x1C00A4550 (DxgkSubmitCommand.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0026324 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00A45C8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00A77A0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D0FA0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D0FD8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00D100C (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0144CCC (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0170E20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01749A4 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2)
{
  _D3DKMT_SUBMITCOMMAND *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGCONTEXT *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 BroadcastContextCount; // rdi
  int v11; // esi
  struct DXGCONTEXT **PoolWithTag; // rcx
  unsigned int v13; // r8d
  UINT v14; // r14d
  __int64 v15; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  struct DXGCONTEXT *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r15
  void *v23; // rcx
  unsigned __int8 v24; // bl
  __int64 v25; // r8
  signed __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // r8d
  _QWORD *v29; // rbx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  struct DXGADAPTER *v40; // rbx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rcx
  DXGCONTEXT *v47; // r13
  _QWORD *v48; // rax
  __int64 v49; // rcx
  struct _VIDMM_MULTI_ALLOC **v50; // r14
  UINT NumHistoryBuffers; // eax
  __int64 Elements; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  UINT v55; // edi
  D3DKMT_HANDLE *v56; // rdx
  __int64 v57; // r15
  __int64 v58; // rbx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  DXGGLOBAL **v66; // rcx
  __int64 v67; // rax
  _BYTE v68[16]; // [rsp+40h] [rbp-448h] BYREF
  __int64 v69; // [rsp+50h] [rbp-438h] BYREF
  struct DXGADAPTER *v70; // [rsp+58h] [rbp-430h]
  char v71; // [rsp+60h] [rbp-428h]
  __int64 v72; // [rsp+68h] [rbp-420h] BYREF
  int v73; // [rsp+70h] [rbp-418h]
  struct DXGCONTEXT **v74; // [rsp+78h] [rbp-410h] BYREF
  unsigned int v75; // [rsp+80h] [rbp-408h]
  struct DXGCONTEXT *v76; // [rsp+88h] [rbp-400h] BYREF
  struct DXGCONTEXT **v77; // [rsp+90h] [rbp-3F8h] BYREF
  _BYTE v78[32]; // [rsp+98h] [rbp-3F0h] BYREF
  unsigned int v79; // [rsp+B8h] [rbp-3D0h]
  UINT v80; // [rsp+C0h] [rbp-3C8h]
  struct DXGPROCESS *v81; // [rsp+C8h] [rbp-3C0h]
  __int64 v82; // [rsp+D0h] [rbp-3B8h]
  _BYTE v83[8]; // [rsp+E0h] [rbp-3A8h] BYREF
  _BYTE v84[16]; // [rsp+E8h] [rbp-3A0h] BYREF
  DXGADAPTER *v85; // [rsp+F8h] [rbp-390h]
  char v86; // [rsp+100h] [rbp-388h]
  _BYTE v87[16]; // [rsp+108h] [rbp-380h] BYREF
  __int64 v88; // [rsp+118h] [rbp-370h]
  __int64 v89; // [rsp+128h] [rbp-360h]
  char v90; // [rsp+130h] [rbp-358h]
  int v91; // [rsp+140h] [rbp-348h]
  struct DXGPROCESS *v92; // [rsp+148h] [rbp-340h]
  _BYTE v93[8]; // [rsp+150h] [rbp-338h] BYREF
  __int64 v94; // [rsp+158h] [rbp-330h]
  _QWORD v95[6]; // [rsp+160h] [rbp-328h] BYREF
  char v96; // [rsp+190h] [rbp-2F8h]
  _BYTE v97[24]; // [rsp+198h] [rbp-2F0h] BYREF
  PVOID P; // [rsp+1B0h] [rbp-2D8h] BYREF
  char v99; // [rsp+1B8h] [rbp-2D0h] BYREF
  int v100; // [rsp+238h] [rbp-250h]
  _D3DKMT_SUBMITCOMMAND v101; // [rsp+240h] [rbp-248h] BYREF
  _BYTE v102[144]; // [rsp+3C0h] [rbp-C8h] BYREF

  v92 = a2;
  v81 = a2;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
  v3 = &v101;
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
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68, v101.BroadcastContext[0], a2, &v76, 0);
  v6 = v76;
  if ( !v76 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = a2;
    v8 = v101.BroadcastContext[0];
    v7[5] = -1073741811LL;
LABEL_7:
    v7[4] = v8;
    WdLogEvent5_WdError(v7);
LABEL_8:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
    return 3221225485LL;
  }
  BroadcastContextCount = v101.BroadcastContextCount;
  if ( v101.BroadcastContextCount - 1 > 0x3F )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = v6;
    v8 = v101.BroadcastContextCount;
    v7[5] = 64LL;
    v7[6] = -1073741811LL;
    goto LABEL_7;
  }
  v11 = 0;
  PoolWithTag = 0LL;
  v77 = 0LL;
  v13 = 0;
  v79 = 0;
  v14 = 1;
  if ( v101.BroadcastContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v78;
    v77 = (struct DXGCONTEXT **)v78;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v101.BroadcastContextCount < 8 )
      goto LABEL_16;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v101.BroadcastContextCount, 0x4B677844u);
    v77 = PoolWithTag;
  }
  v79 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_17:
    v15 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v15 + 24) = 1315LL;
    WdLogEvent5_WdLowResource(v15);
LABEL_18:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v77);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v13 = v79;
  PoolWithTag = v77;
LABEL_16:
  if ( !PoolWithTag )
    goto LABEL_17;
  v74 = PoolWithTag;
  v75 = v13;
  _m_prefetchw((char *)v6 + 32);
  v16 = *((_QWORD *)v6 + 4);
  if ( !v16 )
  {
LABEL_116:
    v67 = WdLogNewEntry5_WdError(PoolWithTag);
    *(_QWORD *)(v67 + 24) = v76;
    WdLogEvent5_WdError(v67);
    goto LABEL_117;
  }
  while ( 1 )
  {
    PoolWithTag = (struct DXGCONTEXT **)(v16 + 1);
    v17 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 4, v16 + 1, v16);
    if ( v17 == v16 )
      break;
    if ( !v16 )
      goto LABEL_116;
  }
  v18 = v76;
  *v77 = v76;
  v19 = *((_QWORD *)v18 + 2);
  v72 = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 1792) >= 0x2000 || *(_BYTE *)(v20 + 2076) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
  else
    v21 = 0;
  v73 = v21;
  v22 = *(_QWORD *)(v19 + 16);
  if ( *(_DWORD *)(v19 + 304) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v22 + 80)) )
      goto LABEL_33;
    v23 = (void *)(v22 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v22 + 56)) )
      goto LABEL_33;
    v23 = (void *)(v22 + 56);
  }
  KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
LABEL_33:
  KeEnterCriticalRegion();
  if ( v21 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 88, 0LL) )
      goto LABEL_44;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
    v24 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 0) )
      goto LABEL_44;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
    v24 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v25, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 80), 1u);
  }
  if ( v24 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_44:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v97, (struct _KTHREAD **)a2);
  if ( v101.BroadcastContextCount > 1 )
  {
    while ( 1 )
    {
      v26 = (v101.BroadcastContext[v14] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v26 >= *((_DWORD *)a2 + 56) )
        break;
      v27 = *((_QWORD *)a2 + 26);
      v28 = *(_DWORD *)(v27 + 16LL * (unsigned int)v26 + 8);
      if ( v101.BroadcastContext[v14] >> 30 != ((v28 >> 4) & 3)
        || (v28 & 0x1000) != 0
        || (v28 & 0xF) == 0
        || (*(_BYTE *)(v27 + 16LL * (unsigned int)v26 + 8) & 0xF) != 7 )
      {
        break;
      }
      v29 = *(_QWORD **)(v27 + 16LL * (unsigned int)v26);
      if ( !v29 )
        goto LABEL_59;
      v26 = v29[2];
      if ( v26 != *((_QWORD *)v18 + 2) )
        goto LABEL_59;
      _m_prefetchw(v29 + 4);
      v30 = v29[4];
      do
      {
        if ( !v30 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          v32[3] = v29;
          goto LABEL_60;
        }
        v26 = v30 + 1;
        v31 = v30;
        v30 = _InterlockedCompareExchange64(v29 + 4, v30 + 1, v30);
      }
      while ( v31 != v30 );
      v77[v14++] = (struct DXGCONTEXT *)v29;
      if ( v14 >= v101.BroadcastContextCount )
        goto LABEL_62;
    }
    v29 = 0LL;
LABEL_59:
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v32[3] = v76;
    v32[4] = v29;
    v32[5] = v14;
    v32[6] = -1073741811LL;
LABEL_60:
    WdLogEvent5_WdError(v32);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
    goto LABEL_61;
  }
LABEL_62:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v97);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v95,
    v77,
    v79);
  if ( v96 )
  {
    if ( !v95[0] )
    {
      v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      *(_QWORD *)(v37 + 24) = 1388LL;
      WdLogEvent5_WdWarning(v37);
LABEL_65:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v74);
      goto LABEL_18;
    }
    v38 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v38 + 24) = 1393LL;
    WdLogEvent5_WdWarning(v38);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
LABEL_61:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
LABEL_117:
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v74);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v77);
    goto LABEL_8;
  }
  v39 = *((_QWORD *)v18 + 2);
  v82 = v39;
  v70 = *(struct DXGADAPTER **)(*(_QWORD *)(v39 + 16) + 16LL);
  v71 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v70 + 3);
  v69 = -1LL;
  v40 = v70;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v40 + 120, 0LL);
  v71 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v39, 0, v41, 0);
  if ( v86 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42, v44);
    v45[3] = 275LL;
    v45[4] = 4LL;
    v45[5] = v84;
    v45[6] = 0LL;
    v45[7] = 0LL;
    WdLogEvent5_WdCriticalError(v45);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v85 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v85 + 2) )
      KeWaitForSingleObject((char *)v85 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v85);
  }
  v86 = 1;
  v46 = *(unsigned int *)(v89 + 376);
  if ( (_DWORD)v46 != 1 )
    goto LABEL_77;
  if ( v90 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v87);
    v46 = *(unsigned int *)(v88 + 176);
    if ( (_DWORD)v46 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v87);
LABEL_77:
      COREACCESS::Release((COREACCESS *)v84);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      if ( v71 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v69);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v74);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v77);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
      return 3221226166LL;
    }
  }
  v47 = v76;
  if ( !*((_BYTE *)v76 + 350) )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v46);
    v48[3] = a2;
    v48[4] = v101.BroadcastContext[0];
    v48[5] = -1073741811LL;
    v48[6] = 1415LL;
    WdLogEvent5_WdError(v48);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
    if ( v71 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v69);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
    goto LABEL_61;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v102);
  P = 0LL;
  v100 = 0;
  v50 = 0LL;
  NumHistoryBuffers = v101.NumHistoryBuffers;
  if ( !v101.NumHistoryBuffers )
  {
LABEL_103:
    if ( v101.CommandLength )
    {
      if ( v101.NumPrimaries > 0x10 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v49);
        v65[3] = v47;
        v65[4] = v101.NumPrimaries;
        v65[5] = 16LL;
        v65[6] = -1073741811LL;
        WdLogEvent5_WdError(v65);
        v11 = -1073741811;
        goto LABEL_109;
      }
      v11 = DXGCONTEXT::SubmitCommand(
              v47,
              &v101,
              (struct COREDEVICEACCESS *)v83,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v69,
              v77,
              v50,
              NumHistoryBuffers);
      if ( v11 < 0 )
      {
LABEL_109:
        if ( P != &v99 && P )
          ExFreePoolWithTag(P, 0);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v102);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
        if ( v71 )
        {
          v71 = 0;
          ExReleasePushLockSharedEx((char *)v70 + 120, 0LL);
          KeLeaveCriticalRegion();
          v66 = (DXGGLOBAL **)v70;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v66[2], (struct DXGADAPTER *)v66);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v74);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v77);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
        return (unsigned int)v11;
      }
    }
    if ( (*(_BYTE *)&v101.Flags & 2) != 0 )
      v11 = DXGCONTEXT::HandleVistaBltStub(
              v47,
              v101.PresentHistoryToken,
              (struct COREDEVICEACCESS *)v83,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v69,
              v77);
    goto LABEL_109;
  }
  Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v102, v101.NumHistoryBuffers);
  v94 = Elements;
  v53 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&P, v101.NumHistoryBuffers);
  v50 = (struct _VIDMM_MULTI_ALLOC **)v53;
  if ( !Elements || !v53 )
  {
    v64 = WdLogNewEntry5_WdLowResource(v54);
    *(_QWORD *)(v64 + 24) = 1450LL;
    WdLogEvent5_WdLowResource(v64);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v102);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
    if ( v71 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v69);
    goto LABEL_65;
  }
  v55 = 0;
  v80 = 0;
  while ( v55 < v101.NumHistoryBuffers )
  {
    v56 = &v101.HistoryBufferArray[v55];
    if ( (unsigned __int64)v56 >= MmUserProbeAddress )
      v56 = (D3DKMT_HANDLE *)MmUserProbeAddress;
    v57 = *v56;
    v91 = v57;
    v58 = 8LL * v55 + Elements;
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v92, (DXGALLOCATIONREFERENCE *)v93, v57);
    DXGALLOCATIONREFERENCE::MoveAssign(v58, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v93);
    if ( !*(_QWORD *)v58 )
    {
      v61 = WdLogNewEntry5_WdError(v60);
      *(_QWORD *)(v61 + 24) = v57;
      WdLogEvent5_WdError(v61);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v102);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      if ( v71 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v69);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v74);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v77);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
      return 3221225485LL;
    }
    v50[v55++] = *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)v58 + 24LL);
    v80 = v55;
    Elements = v94;
  }
  v62 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v82 + 16) + 400LL)
                                                                                            + 8LL)
                                                                                + 1048LL))(
          *(_QWORD *)(*(_QWORD *)(v82 + 16) + 408LL),
          v50,
          v101.NumHistoryBuffers);
  if ( v62 >= 0 )
  {
    NumHistoryBuffers = v101.NumHistoryBuffers;
    goto LABEL_103;
  }
  v63 = WdLogNewEntry5_WdError(v49);
  *(_QWORD *)(v63 + 24) = 1507LL;
  WdLogEvent5_WdError(v63);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v102);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
  if ( v71 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v69);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v95);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v72);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v74);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v77);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
  return (unsigned int)v62;
}
