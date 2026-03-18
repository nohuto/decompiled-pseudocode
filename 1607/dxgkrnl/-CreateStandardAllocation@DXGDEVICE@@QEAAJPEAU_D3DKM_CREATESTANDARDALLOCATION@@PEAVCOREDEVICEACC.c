/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4
 * Callers:
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0072BB0 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0088748 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008E68C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008ED3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0157668 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0171F50 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002191C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0093B78 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     GetPixelSizeInBytes @ 0x1C0151848 (GetPixelSizeInBytes.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r12
  __int64 v6; // rax
  UINT NumDifferentPhysicalAdapters; // r14d
  __int64 v8; // rbx
  DXGADAPTER *v9; // rcx
  int v10; // eax
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // rsi
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // r8
  int StandardAllocationDriverData; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v20; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  ADAPTER_RENDER *v27; // rcx
  int v28; // eax
  __int64 pSystemMem_low; // rcx
  __int64 v30; // r12
  unsigned int v31; // r8d
  char v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  D3DDDI_ALLOCATIONINFO *v38; // rax
  __int64 v39; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v41; // ecx
  __int64 v42; // r8
  int v43; // edx
  struct DXGALLOCATION *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rdi
  __int64 v49; // rsi
  struct _KTHREAD **Current; // rax
  int v51; // edx
  D3DKMT_HANDLE hResource; // edi
  D3DDDI_ALLOCATIONINFO *v53; // rcx
  D3DKMT_HANDLE *v54; // rdx
  __int64 v55; // r8
  D3DKMT_HANDLE v56; // eax
  __int64 v57; // rcx
  D3DDDI_ALLOCATIONINFO *v58; // rbx
  void **p_pPrivateDriverData; // rbx
  __int64 v60; // rdi
  UINT v62; // ecx
  int v63; // edx
  _QWORD *v64; // rax
  D3DKMT_CREATESTANDARDALLOCATION *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // rax
  D3DDDI_ALLOCATIONINFO *v71; // r12
  int PixelSizeInBytes; // eax
  _QWORD *v73; // rax
  D3DDDI_ALLOCATIONINFO *v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 CurrentProcess; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 ProcessDxgProcess; // r14
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r9
  unsigned int v90; // r8d
  struct DXGRESOURCE *v91; // rsi
  unsigned int v92; // ecx
  __int64 v93; // rax
  char v94; // [rsp+60h] [rbp-A0h]
  UINT v95; // [rsp+64h] [rbp-9Ch]
  unsigned int v96; // [rsp+64h] [rbp-9Ch]
  D3DDDI_ALLOCATIONINFO *v97; // [rsp+68h] [rbp-98h]
  unsigned int v98; // [rsp+70h] [rbp-90h]
  unsigned int v99; // [rsp+74h] [rbp-8Ch]
  D3DKMT_CREATESTANDARDALLOCATION *v100; // [rsp+78h] [rbp-88h]
  struct COREDEVICEACCESS *v101; // [rsp+80h] [rbp-80h] BYREF
  D3DDDI_ALLOCATIONINFO *v102; // [rsp+88h] [rbp-78h]
  __int64 v103; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v104; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMT_CREATEALLOCATION v105; // [rsp+D0h] [rbp-30h] BYREF
  char v106[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v107[24]; // [rsp+128h] [rbp+28h] BYREF
  PVOID P; // [rsp+140h] [rbp+40h]
  _BYTE v109[384]; // [rsp+148h] [rbp+48h] BYREF
  UINT v110; // [rsp+2C8h] [rbp+1C8h]

  v3 = 0LL;
  v101 = (struct COREDEVICEACCESS *)a3;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(&v105, 0, sizeof(v105));
  v6 = *((_QWORD *)this + 2);
  NumDifferentPhysicalAdapters = 1;
  v8 = 0LL;
  v100 = 0LL;
  v94 = 0;
  v103 = 0LL;
  v9 = *(DXGADAPTER **)(v6 + 16);
  v10 = *((_DWORD *)a2 + 4);
  v99 = 1;
  v98 = 0;
  if ( v10 == 1 && (*((_BYTE *)v9 + 2059) || *((_BYTE *)v9 + 2058))
    || *((_BYTE *)v9 + 2058)
    && v10 == 4
    && (v63 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL), ((v63 - 1) & 0xFFFFFFFC) == 0)
    && v63 != 2 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v9);
    v99 = NumDifferentPhysicalAdapters;
  }
  v97 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v110 = 0;
  if ( NumDifferentPhysicalAdapters > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumDifferentPhysicalAdapters < 0x60 )
      goto LABEL_9;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(
                                             PagedPool,
                                             96LL * NumDifferentPhysicalAdapters,
                                             0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v109;
    P = v109;
  }
  v97 = PoolWithTag;
  v110 = NumDifferentPhysicalAdapters;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * NumDifferentPhysicalAdapters);
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)P;
    v97 = (D3DDDI_ALLOCATIONINFO *)P;
  }
LABEL_9:
  memset(&v104, 0, sizeof(v104));
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v104.StandardAllocationType = *((_DWORD *)a2 + 4);
  v104.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v104, v13);
  v17 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v15);
LABEL_75:
    v64[4] = v17;
    v64[3] = this;
    WdLogEvent5_WdError(v64);
    goto LABEL_56;
  }
  AllocationPrivateDriverDataSize = v104.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v104.ResourcePrivateDriverDataSize;
  if ( !v104.AllocationPrivateDriverDataSize && !v104.ResourcePrivateDriverDataSize )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v104.ResourcePrivateDriverDataSize);
LABEL_74:
    v17 = -1073741811LL;
    goto LABEL_75;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 88) != v104.ResourcePrivateDriverDataSize )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v104.ResourcePrivateDriverDataSize);
      v64[5] = 1LL;
      goto LABEL_74;
    }
    if ( *((_DWORD *)a2 + 92) != v104.AllocationPrivateDriverDataSize )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v104.ResourcePrivateDriverDataSize);
      v64[5] = 2LL;
      goto LABEL_74;
    }
  }
  if ( !v104.ResourcePrivateDriverDataSize )
  {
LABEL_13:
    v20 = 0;
    v95 = 0;
    if ( NumDifferentPhysicalAdapters )
    {
      p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
      while ( 1 )
      {
        if ( AllocationPrivateDriverDataSize )
        {
          v22 = operator new(AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
          v3 = v22;
          if ( !v22 )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
            LODWORD(v30) = -1073741801;
            v76[3] = this;
            v76[4] = v104.AllocationPrivateDriverDataSize;
            v76[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v76);
            goto LABEL_51;
          }
          memset(v22, 0, v104.AllocationPrivateDriverDataSize);
          ++v98;
          v20 = v95;
        }
        *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
        *p_PrivateDriverDataSize = v104.AllocationPrivateDriverDataSize;
        v104.pResourcePrivateDriverData = v100;
        v104.pAllocationPrivateDriverData = v3;
        if ( NumDifferentPhysicalAdapters <= 1 )
          v20 = *((_DWORD *)a2 + 93);
        v27 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v104.PhysicalAdapterIndex = v20;
        v28 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v27, &v104, v16);
        v30 = v28;
        if ( v28 < 0 )
          break;
        if ( (*(_DWORD *)a2 & 0x60) != 0 )
        {
          v71 = (D3DDDI_ALLOCATIONINFO *)*((_QWORD *)a2 + 3);
          v102 = v71;
          pSystemMem_low = LODWORD(v71->pSystemMem);
          if ( (_DWORD)pSystemMem_low )
          {
            PixelSizeInBytes = GetPixelSizeInBytes();
            pSystemMem_low = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 300LL);
            if ( (pSystemMem_low & 8) == 0 )
            {
              if ( PixelSizeInBytes )
              {
                pSystemMem_low = HIDWORD(v71->pPrivateDriverData);
                if ( (_DWORD)pSystemMem_low )
                {
                  if ( (_DWORD)pSystemMem_low != ((v71->hAllocation * PixelSizeInBytes + 127) & 0xFFFFFF80) )
                  {
                    LODWORD(v30) = -1073741811;
                    v73 = (_QWORD *)WdLogNewEntry5_WdError(pSystemMem_low);
                    v74 = v102;
                    v73[3] = this;
                    v73[4] = HIDWORD(v74->pPrivateDriverData);
                    v73[5] = v74->hAllocation;
                    v73[6] = -1073741811LL;
                    WdLogEvent5_WdError(v73);
                    goto LABEL_51;
                  }
                }
              }
            }
          }
        }
        if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
        {
          v75 = WdLogNewEntry5_WdAssertion(pSystemMem_low);
          *(_QWORD *)(v75 + 24) = 5775LL;
          WdLogEvent5_WdAssertion(v75);
        }
        if ( *((_DWORD *)a2 + 4) == 1 )
        {
          v62 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
          p_PrivateDriverDataSize[2] |= 1u;
          p_PrivateDriverDataSize[1] = v62;
        }
        p_PrivateDriverDataSize += 24;
        v20 = v95 + 1;
        v3 = 0LL;
        v95 = v20;
        if ( v20 >= NumDifferentPhysicalAdapters )
        {
          ResourcePrivateDriverDataSize = v104.ResourcePrivateDriverDataSize;
          goto LABEL_28;
        }
        AllocationPrivateDriverDataSize = v104.AllocationPrivateDriverDataSize;
      }
      v77 = (_QWORD *)WdLogNewEntry5_WdAssertion(pSystemMem_low);
      v77[5] = 0LL;
      v77[3] = this;
      v77[4] = v30;
      WdLogEvent5_WdAssertion(v77);
    }
    else
    {
LABEL_28:
      v31 = *(_DWORD *)a2;
      v32 = *(_DWORD *)a2;
      v105.hDevice = *((_DWORD *)a2 + 1);
      v105.pStandardAllocation = v100;
      v105.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
      v105.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
      v105.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
      *(_QWORD *)&v105.hResource = 0LL;
      v105.NumAllocations = NumDifferentPhysicalAdapters;
      v105.pAllocationInfo = PoolWithTag;
      v105.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)((*((_BYTE *)a2 + 400) == 0) | *(_DWORD *)&v105.Flags & 0xFFFFA094 | (2 * (v31 & 1 | (unsigned __int8)(2 * (v31 & 2 | (2 * (v32 & 4)))))) & 0xBE | (v31 >> 4) & 0x440 | (8 * (v31 & 0x800 | (4 * (v31 & 0x18 | (2 * (v31 & 0x60)))))));
      v33 = DXGDEVICE::CreateAllocation(this, &v105, 0LL, 0LL, 0LL, a2, v101, 0, 0LL, 0LL, 0LL);
      v30 = v33;
      if ( v33 >= 0 )
      {
        v94 = 1;
        v96 = 0;
        if ( NumDifferentPhysicalAdapters )
        {
          v38 = PoolWithTag;
          v102 = PoolWithTag;
          while ( 1 )
          {
            v39 = *((_QWORD *)this + 5);
            hAllocation = v38->hAllocation;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v39 + 184));
            v41 = (hAllocation >> 6) & 0xFFFFFF;
            if ( v41 < *(_DWORD *)(v39 + 224)
              && (v42 = *(_QWORD *)(v39 + 208),
                  v43 = *(_DWORD *)(v42 + 16LL * v41 + 8),
                  ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v42 + 16LL * v41 + 8) & 0x30))
              && (v43 & 0x1000) == 0
              && (v43 & 0xF) != 0
              && (*(_BYTE *)(v42 + 16LL * v41 + 8) & 0xF) == 5 )
            {
              v44 = *(struct DXGALLOCATION **)(v42 + 16LL * v41);
            }
            else
            {
              v44 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v101, v44);
            ExReleasePushLockSharedEx(v39 + 184, 0LL);
            KeLeaveCriticalRegion();
            DXGALLOCATIONREFERENCE::MoveAssign(&v103, &v101);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v101);
            v8 = v103;
            if ( !v103 )
              break;
            v46 = *((_QWORD *)this + 2);
            v47 = *(_QWORD *)(v46 + 408);
            v48 = *(_QWORD *)(v46 + 400);
            v49 = *(_QWORD *)(*(_QWORD *)(v103 + 48) + 8LL);
            Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
            DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)v106, Current);
            LOBYTE(v48) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v48 + 8) + 184LL))(v47, v49);
            DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)v106);
            if ( !(_BYTE)v48 )
            {
              v51 = *((_DWORD *)a2 + 4);
              if ( v51 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2 )
              {
                v78 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( (*(_DWORD *)(v78 + 1524) & 0x200) == 0 || v51 != 1 )
                {
                  LODWORD(v30) = -1073741811;
                  v79 = (_QWORD *)WdLogNewEntry5_WdError(v78);
                  v79[3] = this;
                  v79[4] = *((int *)a2 + 4);
                  v79[5] = -1073741811LL;
                  WdLogEvent5_WdError(v79);
                  hResource = v105.hResource;
                  goto LABEL_97;
                }
              }
            }
            v38 = (D3DDDI_ALLOCATIONINFO *)((char *)v102 + 96);
            ++v96;
            v102 = (D3DDDI_ALLOCATIONINFO *)((char *)v102 + 96);
            if ( v96 >= v99 )
            {
              PoolWithTag = v97;
              goto LABEL_43;
            }
          }
          LODWORD(v30) = -1073741811;
          v80 = (_QWORD *)WdLogNewEntry5_WdAssertion(v45);
          v58 = v97;
          v80[3] = this;
          v80[4] = *(&v97->hAllocation + 24 * v96);
          v80[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v80);
          hResource = v105.hResource;
          goto LABEL_98;
        }
LABEL_43:
        hResource = v105.hResource;
        *((_DWORD *)a2 + 3) = v105.hGlobalShare;
        *((_DWORD *)a2 + 2) = hResource;
        if ( v98 )
        {
          v53 = PoolWithTag;
          v54 = (D3DKMT_HANDLE *)((char *)a2 + 52);
          v55 = v98;
          do
          {
            v56 = v53->hAllocation;
            v53 = (D3DDDI_ALLOCATIONINFO *)((char *)v53 + 96);
            *v54++ = v56;
            --v55;
          }
          while ( v55 );
        }
        v57 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
        if ( (v57 & 0xFFFFFFFD) != 0 )
          *((_QWORD *)a2 + 41) = 0LL;
        else
          *((_QWORD *)a2 + 41) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                   *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                                   *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                                   *(struct _VIDMM_MULTI_ALLOC **)(v8 + 24));
        if ( (*(_DWORD *)a2 & 0x40) != 0 )
        {
          memmove(*((void **)a2 + 45), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 92));
          memmove(*((void **)a2 + 43), v104.pResourcePrivateDriverData, *((unsigned int *)a2 + 88));
        }
LABEL_50:
        if ( (int)v30 >= 0 || !v94 )
        {
LABEL_51:
          v58 = v97;
LABEL_52:
          if ( v98 )
          {
            p_pPrivateDriverData = &v58->pPrivateDriverData;
            v60 = v98;
            do
            {
              operator delete(*p_pPrivateDriverData);
              p_pPrivateDriverData += 12;
              --v60;
            }
            while ( v60 );
          }
          goto LABEL_55;
        }
LABEL_97:
        v58 = v97;
LABEL_98:
        if ( !hResource )
        {
          v82 = WdLogNewEntry5_WdAssertion(v57);
          *(_QWORD *)(v82 + 24) = 5897LL;
          WdLogEvent5_WdAssertion(v82);
        }
        CurrentProcess = PsGetCurrentProcess(v57);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v84);
        if ( !ProcessDxgProcess )
        {
          v87 = WdLogNewEntry5_WdAssertion(v85);
          *(_QWORD *)(v87 + 24) = 5905LL;
          WdLogEvent5_WdAssertion(v87);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v107,
          (struct DXGPROCESS *)ProcessDxgProcess);
        v88 = (hResource >> 6) & 0xFFFFFF;
        if ( (unsigned int)v88 < *(_DWORD *)(ProcessDxgProcess + 224)
          && (v89 = *(_QWORD *)(ProcessDxgProcess + 208),
              v90 = *(_DWORD *)(v89 + 16LL * (unsigned int)v88 + 8),
              hResource >> 30 == ((v90 >> 4) & 3))
          && (v90 & 0x1000) == 0
          && (v90 & 0xF) != 0
          && (*(_BYTE *)(v89 + 16LL * (unsigned int)v88 + 8) & 0xF) == 4 )
        {
          v91 = *(struct DXGRESOURCE **)(v89 + 16LL * (unsigned int)v88);
          if ( v91 )
          {
            if ( (unsigned int)v88 < *(_DWORD *)(ProcessDxgProcess + 224) )
            {
              v92 = *(_DWORD *)(v89 + 16LL * (unsigned int)v88 + 8);
              if ( hResource >> 30 == ((v92 >> 4) & 3) && (v92 & 0x1000) == 0 && (v92 & 0xF) != 0 )
                *(_DWORD *)(v89 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
            goto LABEL_115;
          }
        }
        else
        {
          v91 = 0LL;
        }
        v93 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v93 + 24) = 5911LL;
        WdLogEvent5_WdAssertion(v93);
LABEL_115:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v107);
        if ( v91 )
          DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v91, 0LL, DXGDEVICE::DestroyFlagsDefault);
        goto LABEL_52;
      }
      v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      v81[3] = this;
      v81[4] = v30;
      v81[5] = 1LL;
      WdLogEvent5_WdWarning(v81);
    }
    hResource = v105.hResource;
    goto LABEL_50;
  }
  v65 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new(v104.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  v100 = v65;
  if ( v65 )
  {
    memset(v65, 0, v104.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v104.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v104.AllocationPrivateDriverDataSize;
    goto LABEL_13;
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v66, v68, v69);
  LODWORD(v30) = -1073741801;
  v70[3] = this;
  v70[4] = v104.ResourcePrivateDriverDataSize;
  v70[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v70);
LABEL_55:
  operator delete(v100);
  LODWORD(v17) = v30;
LABEL_56:
  if ( P != v109 && P )
    ExFreePoolWithTag(P, 0);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v103);
  return (unsigned int)v17;
}
