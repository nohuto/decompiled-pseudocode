/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009BB50 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00B0BD0 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C014C074 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001CA04 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0069D6C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C00BF0B0 (--1-$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ.c)
 *     sub_1C0133290 @ 0x1C0133290 (sub_1C0133290.c)
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
  int v11; // edx
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // rsi
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // r8
  int StandardAllocationDriverData; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  _QWORD *v19; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  D3DKMT_CREATESTANDARDALLOCATION *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r12
  D3DDDI_ALLOCATIONINFO *v30; // rbx
  void **p_pPrivateDriverData; // rbx
  __int64 v32; // rdi
  UINT v34; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  ADAPTER_RENDER *v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  unsigned int *v44; // r12
  int v45; // eax
  __int64 v46; // rax
  UINT v47; // ecx
  _QWORD *v48; // rax
  unsigned int v49; // r8d
  char v50; // r9
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  D3DDDI_ALLOCATIONINFO *v56; // rax
  __int64 v57; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v59; // ecx
  __int64 v60; // r8
  int v61; // edx
  struct DXGALLOCATION *v62; // rdx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rdi
  __int64 v69; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v71; // rcx
  D3DKMT_HANDLE hResource; // edi
  D3DDDI_ALLOCATIONINFO *v73; // rcx
  D3DKMT_HANDLE *v74; // rdx
  __int64 v75; // r8
  D3DKMT_HANDLE v76; // eax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  struct DXGPROCESS *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r9
  unsigned int v86; // r8d
  struct DXGRESOURCE *v87; // r14
  unsigned int v88; // ecx
  __int64 v89; // rax
  char v90; // [rsp+60h] [rbp-A0h]
  UINT v91; // [rsp+64h] [rbp-9Ch]
  unsigned int v92; // [rsp+64h] [rbp-9Ch]
  D3DDDI_ALLOCATIONINFO *v93; // [rsp+68h] [rbp-98h]
  unsigned int v94; // [rsp+70h] [rbp-90h]
  unsigned int v95; // [rsp+74h] [rbp-8Ch]
  unsigned int *v96; // [rsp+78h] [rbp-88h]
  D3DDDI_ALLOCATIONINFO *v97; // [rsp+78h] [rbp-88h]
  D3DKMT_CREATESTANDARDALLOCATION *v98; // [rsp+80h] [rbp-80h]
  struct COREDEVICEACCESS *v99; // [rsp+88h] [rbp-78h] BYREF
  __int64 v100; // [rsp+90h] [rbp-70h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v101; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMT_CREATEALLOCATION v102; // [rsp+D0h] [rbp-30h] BYREF
  char v103[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v104[24]; // [rsp+128h] [rbp+28h] BYREF
  D3DDDI_ALLOCATIONINFO *v105; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v106[384]; // [rsp+148h] [rbp+48h] BYREF
  UINT v107; // [rsp+2C8h] [rbp+1C8h]

  v3 = 0LL;
  v99 = (struct COREDEVICEACCESS *)a3;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[2]);
  memset(&v102, 0, sizeof(v102));
  v6 = *((_QWORD *)this + 2);
  NumDifferentPhysicalAdapters = 1;
  v8 = 0LL;
  v98 = 0LL;
  v90 = 0;
  v100 = 0LL;
  v9 = *(DXGADAPTER **)(v6 + 16);
  v10 = *((_DWORD *)a2 + 4);
  v95 = 1;
  if ( v10 == 1 && (*((_BYTE *)v9 + 1924) || *((_BYTE *)v9 + 1923))
    || *((_BYTE *)v9 + 1923)
    && v10 == 4
    && (v11 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL), ((v11 - 1) & 0xFFFFFFFC) == 0)
    && v11 != 2 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v9);
    v95 = NumDifferentPhysicalAdapters;
  }
  v93 = 0LL;
  PoolWithTag = 0LL;
  v105 = 0LL;
  v107 = 0;
  if ( NumDifferentPhysicalAdapters <= 4 )
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v106;
    v105 = (D3DDDI_ALLOCATIONINFO *)v106;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumDifferentPhysicalAdapters < 0x60 )
      goto LABEL_17;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(
                                             PagedPool,
                                             96LL * NumDifferentPhysicalAdapters,
                                             0x4B677844u);
    v105 = PoolWithTag;
  }
  v93 = PoolWithTag;
  v107 = NumDifferentPhysicalAdapters;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * NumDifferentPhysicalAdapters);
    PoolWithTag = v105;
    v93 = v105;
  }
LABEL_17:
  memset(&v101, 0, sizeof(v101));
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v101.StandardAllocationType = *((_DWORD *)a2 + 4);
  v101.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v13, &v101, v14);
  v18 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v16);
LABEL_28:
    v19[4] = v18;
    v19[3] = this;
    WdLogEvent5_WdError(v19);
    goto LABEL_38;
  }
  AllocationPrivateDriverDataSize = v101.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v101.ResourcePrivateDriverDataSize;
  if ( !v101.AllocationPrivateDriverDataSize && !v101.ResourcePrivateDriverDataSize )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v101.ResourcePrivateDriverDataSize);
LABEL_27:
    v18 = -1073741811LL;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 88) != v101.ResourcePrivateDriverDataSize )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v101.ResourcePrivateDriverDataSize);
      v19[5] = 1LL;
      goto LABEL_27;
    }
    if ( *((_DWORD *)a2 + 92) != v101.AllocationPrivateDriverDataSize )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v101.ResourcePrivateDriverDataSize);
      v19[5] = 2LL;
      goto LABEL_27;
    }
  }
  if ( v101.ResourcePrivateDriverDataSize )
  {
    v22 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new[](v101.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
    v98 = v22;
    if ( !v22 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v27[3] = this;
      v28 = v101.ResourcePrivateDriverDataSize;
LABEL_32:
      v27[4] = v28;
      LODWORD(v29) = -1073741801;
      v27[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_33;
    }
    memset(v22, 0, v101.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v101.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v101.AllocationPrivateDriverDataSize;
  }
  v94 = 0;
  v34 = 0;
  v91 = 0;
  if ( NumDifferentPhysicalAdapters )
  {
    p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
    while ( 1 )
    {
      if ( AllocationPrivateDriverDataSize )
      {
        v36 = operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
        v3 = v36;
        if ( !v36 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
          v27[3] = this;
          v28 = v101.AllocationPrivateDriverDataSize;
          goto LABEL_32;
        }
        memset(v36, 0, v101.AllocationPrivateDriverDataSize);
        ++v94;
        v34 = v91;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
      *p_PrivateDriverDataSize = v101.AllocationPrivateDriverDataSize;
      v101.pResourcePrivateDriverData = v98;
      v101.pAllocationPrivateDriverData = v3;
      if ( NumDifferentPhysicalAdapters <= 1 )
        v34 = *((_DWORD *)a2 + 93);
      v41 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v101.PhysicalAdapterIndex = v34;
      v42 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v41, &v101, v17);
      v29 = v42;
      if ( v42 < 0 )
        break;
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v44 = (unsigned int *)*((_QWORD *)a2 + 3);
        v96 = v44;
        v43 = v44[2];
        if ( (_DWORD)v43 )
        {
          v45 = sub_1C0133290();
          v43 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 284LL);
          if ( (v43 & 8) == 0 )
          {
            if ( v45 )
            {
              v43 = v44[5];
              if ( (_DWORD)v43 )
              {
                if ( (_DWORD)v43 != ((*v44 * v45 + 127) & 0xFFFFFF80) )
                {
                  LODWORD(v29) = -1073741811;
                  v48 = (_QWORD *)WdLogNewEntry5_WdError(v43);
                  v48[3] = this;
                  v48[4] = v96[5];
                  v48[5] = *v96;
                  v48[6] = -1073741811LL;
                  WdLogEvent5_WdError(v48);
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v46 + 24) = 5477LL;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v47 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v47;
      }
      p_PrivateDriverDataSize += 24;
      v34 = v91 + 1;
      v3 = 0LL;
      v91 = v34;
      if ( v34 >= NumDifferentPhysicalAdapters )
      {
        ResourcePrivateDriverDataSize = v101.ResourcePrivateDriverDataSize;
        goto LABEL_63;
      }
      AllocationPrivateDriverDataSize = v101.AllocationPrivateDriverDataSize;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdAssertion(v43);
    v63[5] = 0LL;
    v63[3] = this;
    v63[4] = v29;
    WdLogEvent5_WdAssertion(v63);
    goto LABEL_91;
  }
LABEL_63:
  v49 = *(_DWORD *)a2;
  v50 = *(_DWORD *)a2;
  v102.hDevice = *((_DWORD *)a2 + 1);
  v102.pStandardAllocation = v98;
  v102.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v102.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  v102.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
  *(_QWORD *)&v102.hResource = 0LL;
  v102.NumAllocations = NumDifferentPhysicalAdapters;
  v102.pAllocationInfo = PoolWithTag;
  v102.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)((*((_BYTE *)a2 + 384) == 0) | *(_DWORD *)&v102.Flags & 0xFFFFA094 | (2 * (v49 & 1 | (unsigned __int8)(2 * (v49 & 2 | (2 * (v50 & 4)))))) & 0xBE | (v49 >> 4) & 0x440 | (8 * (v49 & 0x800 | (4 * (v49 & 0x18 | (2 * (v49 & 0x60)))))));
  v51 = DXGDEVICE::CreateAllocation(this, &v102, 0LL, 0LL, 0LL, a2, v99, 0, 0LL, 0LL, 0LL);
  v29 = v51;
  if ( v51 < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
    v79[3] = this;
    v79[4] = v29;
    v79[5] = 1LL;
    WdLogEvent5_WdWarning(v79);
LABEL_91:
    hResource = v102.hResource;
    goto LABEL_92;
  }
  v90 = 1;
  v92 = 0;
  if ( NumDifferentPhysicalAdapters )
  {
    v56 = PoolWithTag;
    v97 = PoolWithTag;
    while ( 1 )
    {
      v57 = *((_QWORD *)this + 5);
      hAllocation = v56->hAllocation;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v57 + 192));
      v59 = (hAllocation >> 6) & 0xFFFFFF;
      if ( v59 < *(_DWORD *)(v57 + 232)
        && (v60 = *(_QWORD *)(v57 + 216),
            v61 = *(_DWORD *)(v60 + 16LL * v59 + 8),
            ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v60 + 16LL * v59 + 8) & 0x30))
        && (v61 & 0x1000) == 0
        && (v61 & 0xF) != 0
        && (*(_BYTE *)(v60 + 16LL * v59 + 8) & 0xF) == 5 )
      {
        v62 = *(struct DXGALLOCATION **)(v60 + 16LL * v59);
      }
      else
      {
        v62 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v99, v62);
      ExReleasePushLockSharedEx(v57 + 192, 0LL);
      KeLeaveCriticalRegion();
      DXGALLOCATIONREFERENCE::Assign((DXGALLOCATIONREFERENCE *)&v100, (const struct DXGALLOCATIONREFERENCE *)&v99);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v99);
      v8 = v100;
      if ( !v100 )
        break;
      v66 = *((_QWORD *)this + 2);
      v67 = *(_QWORD *)(v66 + 432);
      v68 = *(_QWORD *)(v66 + 424);
      v69 = *(_QWORD *)(*(_QWORD *)(v100 + 48) + 8LL);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)v103, Current);
      LOBYTE(v68) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v68 + 8) + 184LL))(v67, v69);
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)v103);
      if ( !(_BYTE)v68 && (*((_DWORD *)a2 + 4) != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) )
      {
        LODWORD(v29) = -1073741811;
        v77 = (_QWORD *)WdLogNewEntry5_WdError(v71);
        v77[3] = this;
        v77[4] = *((int *)a2 + 4);
        v77[5] = -1073741811LL;
        WdLogEvent5_WdError(v77);
        hResource = v102.hResource;
        goto LABEL_94;
      }
      v56 = (D3DDDI_ALLOCATIONINFO *)((char *)v97 + 96);
      ++v92;
      v97 = (D3DDDI_ALLOCATIONINFO *)((char *)v97 + 96);
      if ( v92 >= v95 )
      {
        PoolWithTag = v93;
        goto LABEL_80;
      }
    }
    LODWORD(v29) = -1073741811;
    v78 = (_QWORD *)WdLogNewEntry5_WdAssertion(v65);
    v30 = v93;
    v78[3] = this;
    v78[4] = *(&v93->hAllocation + 24 * v92);
    v78[5] = -1073741811LL;
    WdLogEvent5_WdAssertion(v78);
    hResource = v102.hResource;
LABEL_95:
    if ( !hResource )
    {
      v80 = WdLogNewEntry5_WdAssertion(v64);
      *(_QWORD *)(v80 + 24) = 5595LL;
      WdLogEvent5_WdAssertion(v80);
    }
    v82 = DXGPROCESS::GetCurrent();
    if ( !v82 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v81);
      *(_QWORD *)(v83 + 24) = 5603LL;
      WdLogEvent5_WdAssertion(v83);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v104, v82);
    v84 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v84 < *((_DWORD *)v82 + 58)
      && (v85 = *((_QWORD *)v82 + 27),
          v86 = *(_DWORD *)(v85 + 16LL * (unsigned int)v84 + 8),
          hResource >> 30 == ((v86 >> 4) & 3))
      && (v86 & 0x1000) == 0
      && (v86 & 0xF) != 0
      && (*(_BYTE *)(v85 + 16LL * (unsigned int)v84 + 8) & 0xF) == 4 )
    {
      v87 = *(struct DXGRESOURCE **)(v85 + 16LL * (unsigned int)v84);
      if ( v87 )
      {
        if ( (unsigned int)v84 < *((_DWORD *)v82 + 58) )
        {
          v88 = *(_DWORD *)(v85 + 16LL * (unsigned int)v84 + 8);
          if ( hResource >> 30 == ((v88 >> 4) & 3) && (v88 & 0x1000) == 0 && (v88 & 0xF) != 0 )
            *(_DWORD *)(v85 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
        }
        goto LABEL_112;
      }
    }
    else
    {
      v87 = 0LL;
    }
    v89 = WdLogNewEntry5_WdAssertion(v84);
    *(_QWORD *)(v89 + 24) = 5609LL;
    WdLogEvent5_WdAssertion(v89);
LABEL_112:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v104);
    if ( v87 )
      DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v87, 0LL, DXGDEVICE::DestroyFlagsDefault);
    goto LABEL_34;
  }
LABEL_80:
  hResource = v102.hResource;
  *((_DWORD *)a2 + 3) = v102.hGlobalShare;
  *((_DWORD *)a2 + 2) = hResource;
  if ( v94 )
  {
    v73 = PoolWithTag;
    v74 = (D3DKMT_HANDLE *)((char *)a2 + 52);
    v75 = v94;
    do
    {
      v76 = v73->hAllocation;
      v73 = (D3DDDI_ALLOCATIONINFO *)((char *)v73 + 96);
      *v74++ = v76;
      --v75;
    }
    while ( v75 );
  }
  v64 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
  if ( (v64 & 0xFFFFFFFD) != 0 )
    *((_QWORD *)a2 + 41) = 0LL;
  else
    *((_QWORD *)a2 + 41) = VIDMM_EXPORT::VidMmGetAllocationSection(
                             *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                             *(struct _VIDMM_MULTI_ALLOC **)(v8 + 24));
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    memmove(*((void **)a2 + 45), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 92));
    memmove(*((void **)a2 + 43), v101.pResourcePrivateDriverData, *((unsigned int *)a2 + 88));
  }
LABEL_92:
  if ( (int)v29 < 0 && v90 )
  {
LABEL_94:
    v30 = v93;
    goto LABEL_95;
  }
LABEL_33:
  v30 = v93;
LABEL_34:
  if ( v94 )
  {
    p_pPrivateDriverData = &v30->pPrivateDriverData;
    v32 = v94;
    do
    {
      operator delete(*p_pPrivateDriverData);
      p_pPrivateDriverData += 12;
      --v32;
    }
    while ( v32 );
  }
  operator delete(v98);
  LODWORD(v18) = v29;
LABEL_38:
  PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>(&v105);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v100);
  return (unsigned int)v18;
}
