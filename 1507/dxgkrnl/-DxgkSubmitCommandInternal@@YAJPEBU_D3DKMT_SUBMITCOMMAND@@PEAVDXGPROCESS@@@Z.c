/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0068F10
 * Callers:
 *     DxgkSubmitCommand @ 0x1C0068EA0 (DxgkSubmitCommand.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C001F8D4 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00698B8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00698CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C006B16C (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEA.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C011EEC8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C011EF54 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0144388 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C014A898 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2)
{
  _D3DKMT_SUBMITCOMMAND *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGCONTEXT *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 BroadcastContextCount; // rsi
  struct DXGCONTEXT **PoolWithTag; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  struct DXGCONTEXT *v17; // r15
  UINT v18; // esi
  signed __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // r8d
  _QWORD *v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  volatile signed __int64 *v34; // rcx
  __int64 v35; // rax
  DXGADAPTER *v36; // r12
  __int64 v37; // r9
  __int64 v38; // rcx
  DXGCONTEXT *v39; // r13
  _QWORD *v40; // rax
  __int64 v41; // rcx
  struct _VIDMM_MULTI_ALLOC **v42; // r15
  __int64 Elements; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  D3DKMT_HANDLE *v47; // rdx
  __int64 v48; // rbx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  struct DXGCONTEXT *v56; // [rsp+30h] [rbp-418h] BYREF
  struct DXGCONTEXT **v57; // [rsp+38h] [rbp-410h] BYREF
  unsigned int v58; // [rsp+40h] [rbp-408h]
  _BYTE v59[16]; // [rsp+48h] [rbp-400h] BYREF
  DXGADAPTER *v60; // [rsp+58h] [rbp-3F0h] BYREF
  char v61; // [rsp+60h] [rbp-3E8h]
  struct DXGCONTEXT **v62; // [rsp+68h] [rbp-3E0h] BYREF
  _BYTE v63[32]; // [rsp+70h] [rbp-3D8h] BYREF
  unsigned int v64; // [rsp+90h] [rbp-3B8h]
  int v65; // [rsp+98h] [rbp-3B0h]
  _BYTE v66[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  struct DXGPROCESS *v67; // [rsp+B0h] [rbp-398h]
  __int64 v68; // [rsp+B8h] [rbp-390h]
  __int64 v69; // [rsp+C0h] [rbp-388h]
  _BYTE v70[8]; // [rsp+C8h] [rbp-380h] BYREF
  _QWORD v71[6]; // [rsp+D0h] [rbp-378h] BYREF
  char v72; // [rsp+100h] [rbp-348h]
  _BYTE v73[24]; // [rsp+108h] [rbp-340h] BYREF
  _BYTE v74[80]; // [rsp+120h] [rbp-328h] BYREF
  PVOID P; // [rsp+170h] [rbp-2D8h] BYREF
  char v76; // [rsp+178h] [rbp-2D0h] BYREF
  int v77; // [rsp+1F8h] [rbp-250h]
  _D3DKMT_SUBMITCOMMAND v78; // [rsp+200h] [rbp-248h] BYREF
  _BYTE v79[144]; // [rsp+380h] [rbp-C8h] BYREF

  v67 = a2;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
  v3 = &v78;
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
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66, v78.BroadcastContext[0], a2, &v56, 0);
  v6 = v56;
  if ( !v56 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = a2;
    v8 = v78.BroadcastContext[0];
    v9 = -1073741811;
    v7[5] = -1073741811LL;
LABEL_7:
    v7[4] = v8;
    WdLogEvent5_WdError(v7);
    goto LABEL_8;
  }
  BroadcastContextCount = v78.BroadcastContextCount;
  if ( v78.BroadcastContextCount - 1 > 0x3F )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v7[3] = v6;
    v8 = v78.BroadcastContextCount;
    v7[5] = 64LL;
    v9 = -1073741811;
    v7[6] = -1073741811LL;
    goto LABEL_7;
  }
  PoolWithTag = 0LL;
  v62 = 0LL;
  v13 = 0;
  v64 = 0;
  if ( v78.BroadcastContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v63;
    v62 = (struct DXGCONTEXT **)v63;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v78.BroadcastContextCount < 8 )
      goto LABEL_16;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v78.BroadcastContextCount, 0x4B677844u);
    v62 = PoolWithTag;
  }
  v64 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_17:
    v14 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v14 + 24) = 1318LL;
    WdLogEvent5_WdLowResource(v14);
LABEL_18:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v62);
    v9 = -1073741801;
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v13 = v64;
  PoolWithTag = v62;
LABEL_16:
  if ( !PoolWithTag )
    goto LABEL_17;
  v57 = PoolWithTag;
  v58 = v13;
  _m_prefetchw((char *)v6 + 32);
  v15 = *((_QWORD *)v6 + 4);
  do
  {
    if ( !v15 )
    {
      v55 = WdLogNewEntry5_WdError(PoolWithTag);
      *(_QWORD *)(v55 + 24) = v56;
      WdLogEvent5_WdError(v55);
      goto LABEL_76;
    }
    PoolWithTag = (struct DXGCONTEXT **)(v15 + 1);
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 4, v15 + 1, v15);
  }
  while ( v16 != v15 );
  v17 = v56;
  *v62 = v56;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v59,
    *((struct DXGDEVICE **)v17 + 2));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v73, a2);
  v18 = 1;
  if ( v78.BroadcastContextCount > 1 )
  {
    while ( 1 )
    {
      v19 = (v78.BroadcastContext[v18] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 >= *((_DWORD *)a2 + 58) )
        break;
      v20 = *((_QWORD *)a2 + 27);
      v21 = *(_DWORD *)(v20 + 16LL * (unsigned int)v19 + 8);
      if ( v78.BroadcastContext[v18] >> 30 != ((v21 >> 4) & 3)
        || (v21 & 0x1000) != 0
        || (v21 & 0xF) == 0
        || (*(_BYTE *)(v20 + 16LL * (unsigned int)v19 + 8) & 0xF) != 7 )
      {
        break;
      }
      v22 = *(_QWORD **)(v20 + 16LL * (unsigned int)v19);
      if ( !v22 )
        goto LABEL_39;
      v19 = v22[2];
      if ( v19 != *((_QWORD *)v17 + 2) )
        goto LABEL_39;
      _m_prefetchw(v22 + 4);
      v23 = v22[4];
      do
      {
        if ( !v23 )
        {
          v25 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v25 + 24) = v22;
          WdLogEvent5_WdError(v25);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v73);
          goto LABEL_37;
        }
        v19 = v23 + 1;
        v24 = v23;
        v23 = _InterlockedCompareExchange64(v22 + 4, v23 + 1, v23);
      }
      while ( v24 != v23 );
      v62[v18++] = (struct DXGCONTEXT *)v22;
      if ( v18 >= v78.BroadcastContextCount )
        goto LABEL_41;
    }
    v22 = 0LL;
LABEL_39:
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v26[3] = v56;
    v26[4] = v22;
    v26[5] = v18;
    v9 = -1073741811;
    v26[6] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v73);
    goto LABEL_40;
  }
LABEL_41:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v73);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v71,
    v62,
    v64);
  if ( !v72 )
  {
    v33 = *((_QWORD *)v17 + 2);
    v68 = v33;
    v34 = *(volatile signed __int64 **)(*(_QWORD *)(v33 + 16) + 16LL);
    v60 = (DXGADAPTER *)v34;
    if ( _InterlockedIncrement64(v34 + 3) <= 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v34, v27, v29, v30);
      *(_QWORD *)(v35 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v35);
    }
    KeEnterCriticalRegion();
    v36 = v60;
    ExAcquirePushLockSharedEx((char *)v60 + 104, 0LL);
    v61 = 1;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v33, 0, v37, 0);
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74);
    if ( v9 >= 0 )
    {
      v39 = v56;
      if ( *((_BYTE *)v56 + 350) )
      {
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v79);
        P = 0LL;
        v77 = 0;
        v42 = 0LL;
        if ( !v78.NumHistoryBuffers )
          goto LABEL_67;
        Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v79);
        v69 = Elements;
        v44 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&P, v78.NumHistoryBuffers);
        v42 = (struct _VIDMM_MULTI_ALLOC **)v44;
        if ( !Elements || !v44 )
        {
          v53 = WdLogNewEntry5_WdLowResource(v45);
          *(_QWORD *)(v53 + 24) = 1455LL;
          WdLogEvent5_WdLowResource(v53);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v79);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v60);
LABEL_44:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v59);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v57);
          goto LABEL_18;
        }
        v46 = 0LL;
        while ( 1 )
        {
          v65 = v46;
          if ( (unsigned int)v46 >= v78.NumHistoryBuffers )
            break;
          v47 = &v78.HistoryBufferArray[v46];
          if ( (unsigned __int64)v47 >= MmUserProbeAddress )
            v47 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          LODWORD(v56) = *v47;
          v48 = Elements + 8 * v46;
          AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v70, (unsigned int)v56);
          DXGALLOCATIONREFERENCE::MoveAssign(v48, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v70);
          if ( !*(_QWORD *)v48 )
          {
            v51 = WdLogNewEntry5_WdError(v50);
            *(_QWORD *)(v51 + 24) = (unsigned int)v56;
            WdLogEvent5_WdError(v51);
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v79);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v60);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v59);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v57);
            PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v62);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
            return -1073741811LL;
          }
          v42[v46] = *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)v48 + 24LL);
          v46 = (unsigned int)(v46 + 1);
          Elements = v69;
        }
        v9 = _guard_dispatch_icall_fptr();
        if ( v9 >= 0 )
        {
LABEL_67:
          if ( v78.CommandLength )
          {
            if ( v78.NumPrimaries <= 0x10 )
            {
              v9 = DXGCONTEXT::SubmitCommand(v39, &v78, (struct COREDEVICEACCESS *)v74, v62, v42, v78.NumHistoryBuffers);
            }
            else
            {
              v54 = (_QWORD *)WdLogNewEntry5_WdError(v41);
              v54[3] = v39;
              v54[4] = v78.NumPrimaries;
              v54[5] = 16LL;
              v9 = -1073741811;
              v54[6] = -1073741811LL;
              WdLogEvent5_WdError(v54);
            }
          }
          else
          {
            v9 = 0;
          }
          if ( P != &v76 && P )
            ExFreePoolWithTag(P, 0);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v79);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
          ExReleasePushLockSharedEx((char *)v36 + 104, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::ReleaseReference(v36);
          goto LABEL_51;
        }
        v52 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v52 + 24) = 1512LL;
        WdLogEvent5_WdError(v52);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v79);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
LABEL_50:
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v60);
LABEL_51:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
LABEL_40:
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v59);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v57);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v62);
        goto LABEL_8;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v40[3] = a2;
      v40[4] = v78.BroadcastContext[0];
      v9 = -1073741811;
      v40[5] = -1073741811LL;
      v40[6] = 1418LL;
      WdLogEvent5_WdError(v40);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
    goto LABEL_50;
  }
  if ( !v71[0] )
  {
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = 1391LL;
    WdLogEvent5_WdWarning(v31);
    goto LABEL_44;
  }
  v32 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
  *(_QWORD *)(v32 + 24) = 1396LL;
  WdLogEvent5_WdWarning(v32);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
LABEL_37:
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v59);
LABEL_76:
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v57);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v62);
  v9 = -1073741811;
LABEL_8:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
  return (unsigned int)v9;
}
