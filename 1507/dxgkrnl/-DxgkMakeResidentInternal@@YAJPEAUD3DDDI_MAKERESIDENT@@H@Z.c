/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C01318A0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C0145BD0 (DxgkMakeResident.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0002DAC (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C001BF00 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001BFD4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C01442C0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C01442F8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0144434 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDMM_MULTI_ALLOC@@$0CI@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01444E0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDMM_MULTI_ALLOC@@$0CI@@@QEAAPEAPEAU_VIDMM_MULTI_.c)
 *     ?MakeResident@DXGPAGINGQUEUE@@QEAAJPEAUD3DDDI_MAKERESIDENT@@PEAPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0145A78 (-MakeResident@DXGPAGINGQUEUE@@QEAAJPEAUD3DDDI_MAKERESIDENT@@PEAPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, __int64 a3)
{
  unsigned int *v3; // rbp
  struct D3DDDI_MAKERESIDENT *v5; // r14
  int v6; // ebx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  _OWORD *p_hPagingQueue; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 Elements; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int *AllocationList; // r12
  struct DXGDEVICE *v27; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS *v32; // rax
  unsigned int *v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int Resident; // r12d
  __int64 v52; // rax
  _QWORD *v53; // r8
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  *((_QWORD *)v3 + 7) = a1;
  *((_QWORD *)v3 + 12) = a1;
  v6 = 2115;
  v3[2] = 2115;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2115);
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    v13 = qword_1C00467F0;
    v14 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, v6);
    return 3221225485LL;
  }
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    p_hPagingQueue = &v5->hPagingQueue;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      p_hPagingQueue = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = *p_hPagingQueue;
    *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = p_hPagingQueue[1];
    *(_OWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = p_hPagingQueue[2];
    v5 = (struct D3DDDI_MAKERESIDENT *)(v3 + 64);
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 256;
  }
  else
  {
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v5;
  }
  if ( !v5->NumAllocations )
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, Current, v10);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
LABEL_17:
    WdLogEvent5_WdWarning(v17);
LABEL_18:
    v14 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  if ( !v5->AllocationList )
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, Current, v10);
    *(_QWORD *)(v17 + 24) = 466LL;
    goto LABEL_17;
  }
  if ( (v5->Flags.Value & 0xFFFFFFFC) != 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, Current, v10);
    *(_QWORD *)(v17 + 24) = 473LL;
    goto LABEL_17;
  }
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)(v3 + 4),
    v5->hPagingQueue,
    Current,
    (struct DXGPAGINGQUEUE **)v3 + 3);
  if ( !*(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = v5->hPagingQueue;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
LABEL_25:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 4));
    goto LABEL_18;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>((__int64)(v3 + 160));
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = 0;
  Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,40>::AllocateElements((__int64 *)v3 + 80, v5->NumAllocations);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = Elements;
  v24 = PagedPoolZeroedArray<_VIDMM_MULTI_ALLOC *,40>::AllocateElements(v3 + 76, v5->NumAllocations);
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v24;
  if ( Elements && v24 )
  {
    AllocationList = (unsigned int *)v5->AllocationList;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = &AllocationList[v5->NumAllocations];
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v24;
    v27 = *(struct DXGDEVICE **)(*(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 16LL);
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v27;
    *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v27;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 18),
      v27);
    COREDEVICEACCESS::COREDEVICEACCESS(
      (__int64)(v3 + 44),
      *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
      0,
      v28,
      0);
    v29 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 44));
    *v3 = v29;
    if ( v29 >= 0 )
    {
      v32 = DXGPROCESS::GetCurrent(v30);
      *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v32;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 36), v32);
      while ( AllocationList != *(unsigned int **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
      {
        if ( a2 )
        {
          v33 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v33 = (unsigned int *)MmUserProbeAddress;
          v34 = *v33;
          *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *v33;
          v6 = *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v5 = *(struct D3DDDI_MAKERESIDENT **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        }
        else
        {
          v34 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe(
          *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
          (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL),
          v34);
        v39 = *(_QWORD *)v3;
        if ( !*(_QWORD *)v3 )
        {
          v40 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v40 + 24) = *(_QWORD *)v3;
LABEL_42:
          WdLogEvent5_WdError(v40);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
            (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL),
            v41,
            v42,
            v43);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 36));
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 44));
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 18));
          PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)v3 + 38);
          PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((DXGALLOCATIONREFERENCE **)v3 + 80);
          goto LABEL_25;
        }
        v44 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        if ( *(_QWORD *)(v39 + 8) != v44 )
        {
          v40 = WdLogNewEntry5_WdError(v44);
          *(_QWORD *)(v40 + 24) = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          *(_QWORD *)(v40 + 32) = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
          goto LABEL_42;
        }
        v45 = *(_QWORD *)(v39 + 24);
        *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v45;
        if ( !v45 )
        {
          v46 = WdLogNewEntry5_WdWarning(v44, v35, v37, v38);
          *(_QWORD *)(v46 + 24) = *(_QWORD *)v3;
          WdLogEvent5_WdWarning(v46);
        }
        DXGALLOCATIONREFERENCE::MoveAssign(
          *(struct _EX_RUNDOWN_REF ***)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
          (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL));
        v47 = *(_QWORD **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        *v47 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
        *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) += 8LL;
        *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v47 + 1;
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(
          (struct _EX_RUNDOWN_REF **)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL),
          v48,
          v49,
          v50);
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 36));
      Resident = DXGPAGINGQUEUE::MakeResident(
                   *(DXGPAGINGQUEUE **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                   v5,
                   *(struct _VIDMM_MULTI_ALLOC ***)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
      if ( Resident >= 0 && a2 )
      {
        v52 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        v53 = (_QWORD *)(v52 + 32);
        if ( v52 + 32 >= MmUserProbeAddress )
          v53 = (_QWORD *)MmUserProbeAddress;
        *v53 = v5->PagingFenceValue;
      }
      else
      {
        v52 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      }
      if ( a2 )
      {
        v54 = (_QWORD *)(v52 + 40);
        if ( v52 + 40 >= MmUserProbeAddress )
          v54 = (_QWORD *)MmUserProbeAddress;
        *v54 = v5->NumBytesToTrim;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 44));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 18));
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)v3 + 38);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((DXGALLOCATIONREFERENCE **)v3 + 80);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 4));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v55, &EventProfilerExit, v56, v6);
      return (unsigned int)Resident;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 44));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 18));
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)v3 + 38);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((DXGALLOCATIONREFERENCE **)v3 + 80);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 4));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v31, 2115);
      return *v3;
    }
  }
  else
  {
    v57 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v57 + 24) = 508LL;
    WdLogEvent5_WdLowResource(v57);
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>((PVOID *)v3 + 38);
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>((DXGALLOCATIONREFERENCE **)v3 + 80);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)(v3 + 4));
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v58, &EventProfilerExit, v59, 2115);
    return 3221225495LL;
  }
}
