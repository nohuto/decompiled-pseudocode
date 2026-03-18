/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0
 * Callers:
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C005E010 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFA64 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0148358 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001C6F0 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00934AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C00ACF24 (--1-$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ.c)
 *     GetPixelSizeInBytes @ 0x1C012CF48 (GetPixelSizeInBytes.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r12
  __int64 v6; // rax
  UINT NumDifferentPhysicalAdapters; // r14d
  struct _EX_RUNDOWN_REF *v8; // rbx
  DXGADAPTER *v9; // rcx
  int v10; // eax
  _BYTE *PoolWithTag; // rsi
  ADAPTER_RENDER *v12; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  _BYTE *v27; // rbx
  void **v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  UINT v34; // eax
  struct _EX_RUNDOWN_REF *v35; // rdi
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  ADAPTER_RENDER *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int *v47; // rdi
  int PixelSizeInBytes; // eax
  __int64 v49; // rax
  int v50; // ecx
  _QWORD *v51; // rax
  unsigned int *v52; // rdx
  int v53; // ecx
  int v54; // edx
  int v55; // eax
  _DWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int *v60; // rax
  __int64 v61; // rdi
  unsigned int v62; // ebx
  unsigned int v63; // ecx
  __int64 v64; // r8
  int v65; // edx
  struct _EX_RUNDOWN_REF *v66; // rdx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rdi
  __int64 v78; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v80; // rcx
  D3DKMT_HANDLE hResource; // edi
  int *v82; // rcx
  int v83; // eax
  __int64 v84; // rcx
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  struct DXGPROCESS *v92; // r14
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  struct DXGRESOURCE *v98; // rsi
  unsigned int v99; // ecx
  __int64 v100; // rax
  char v101; // [rsp+60h] [rbp-A0h]
  UINT v102; // [rsp+64h] [rbp-9Ch]
  unsigned int v103; // [rsp+64h] [rbp-9Ch]
  _BYTE *v104; // [rsp+68h] [rbp-98h]
  unsigned int v105; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v106; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v107; // [rsp+80h] [rbp-80h]
  void *v108; // [rsp+88h] [rbp-78h]
  unsigned int *v109; // [rsp+90h] [rbp-70h]
  struct COREDEVICEACCESS *v110; // [rsp+98h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v111; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v112; // [rsp+A8h] [rbp-58h] BYREF
  struct _D3DKMT_CREATEALLOCATION v113; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v114[32]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v115; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v116[384]; // [rsp+158h] [rbp+58h] BYREF
  UINT v117; // [rsp+2D8h] [rbp+1D8h]

  v3 = 0LL;
  v110 = (struct COREDEVICEACCESS *)a3;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[2]);
  memset(&v113, 0, sizeof(v113));
  v6 = *((_QWORD *)this + 2);
  NumDifferentPhysicalAdapters = 1;
  v8 = 0LL;
  v108 = 0LL;
  v101 = 0;
  v111 = 0LL;
  v9 = *(DXGADAPTER **)(v6 + 16);
  v10 = *((_DWORD *)a2 + 4);
  v107 = 1;
  if ( v10 == 1 && (*((_BYTE *)v9 + 1916) || *((_BYTE *)v9 + 1915))
    || *((_BYTE *)v9 + 1915) && v10 == 4 && *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 1 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v9);
    v107 = NumDifferentPhysicalAdapters;
  }
  v104 = 0LL;
  PoolWithTag = 0LL;
  v115 = 0LL;
  v117 = 0;
  if ( NumDifferentPhysicalAdapters <= 4 )
  {
    PoolWithTag = v116;
    v115 = v116;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumDifferentPhysicalAdapters < 0x60 )
      goto LABEL_16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 96LL * NumDifferentPhysicalAdapters, 0x4B677844u);
    v115 = PoolWithTag;
  }
  v104 = PoolWithTag;
  v117 = NumDifferentPhysicalAdapters;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * NumDifferentPhysicalAdapters);
    PoolWithTag = v115;
    v104 = v115;
  }
LABEL_16:
  memset(&v112, 0, sizeof(v112));
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v112.StandardAllocationType = *((_DWORD *)a2 + 4);
  v112.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v112);
  v15 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
LABEL_27:
    v16[4] = v15;
    v16[3] = this;
    WdLogEvent5_WdError(v16);
    goto LABEL_37;
  }
  AllocationPrivateDriverDataSize = v112.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v112.ResourcePrivateDriverDataSize;
  if ( !v112.AllocationPrivateDriverDataSize && !v112.ResourcePrivateDriverDataSize )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v112.ResourcePrivateDriverDataSize);
LABEL_26:
    v15 = -1073741811LL;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 88) != v112.ResourcePrivateDriverDataSize )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v112.ResourcePrivateDriverDataSize);
      v16[5] = 1LL;
      goto LABEL_26;
    }
    if ( *((_DWORD *)a2 + 92) != v112.AllocationPrivateDriverDataSize )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v112.ResourcePrivateDriverDataSize);
      v16[5] = 2LL;
      goto LABEL_26;
    }
  }
  if ( v112.ResourcePrivateDriverDataSize )
  {
    v19 = operator new[](v112.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
    v108 = v19;
    if ( !v19 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      v24[3] = this;
      v25 = v112.ResourcePrivateDriverDataSize;
LABEL_31:
      v24[4] = v25;
      LODWORD(v26) = -1073741801;
      v24[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_32;
    }
    memset(v19, 0, v112.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v112.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v112.AllocationPrivateDriverDataSize;
  }
  v105 = 0;
  v34 = 0;
  v102 = 0;
  if ( NumDifferentPhysicalAdapters )
  {
    v35 = (struct _EX_RUNDOWN_REF *)(PoolWithTag + 24);
    v106 = (struct _EX_RUNDOWN_REF *)(PoolWithTag + 24);
    while ( 1 )
    {
      if ( AllocationPrivateDriverDataSize )
      {
        v36 = operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
        v3 = v36;
        if ( !v36 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
          v24[3] = this;
          v25 = v112.AllocationPrivateDriverDataSize;
          goto LABEL_31;
        }
        memset(v36, 0, v112.AllocationPrivateDriverDataSize);
        ++v105;
        v34 = v102;
      }
      v35[-1].Count = (ULONG_PTR)v3;
      LODWORD(v35->Count) = v112.AllocationPrivateDriverDataSize;
      v112.pResourcePrivateDriverData = v108;
      v112.pAllocationPrivateDriverData = v3;
      if ( NumDifferentPhysicalAdapters <= 1 )
        v34 = *((_DWORD *)a2 + 93);
      v41 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v112.PhysicalAdapterIndex = v34;
      v42 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v41, &v112);
      v26 = v42;
      if ( v42 < 0 )
        break;
      v3 = 0LL;
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v47 = (unsigned int *)*((_QWORD *)a2 + 3);
        v109 = v47;
        v44 = v47[2];
        if ( (_DWORD)v44 )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          v43 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v44 = *(unsigned int *)(v43 + 284);
          if ( (v44 & 4) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              v44 = v47[5];
              if ( (_DWORD)v44 )
              {
                if ( (_DWORD)v44 != ((*v47 * PixelSizeInBytes + 127) & 0xFFFFFF80) )
                {
                  LODWORD(v26) = -1073741811;
                  v51 = (_QWORD *)WdLogNewEntry5_WdError(v44);
                  v52 = v109;
                  v51[3] = this;
                  v51[4] = v52[5];
                  v51[5] = *v52;
                  v51[6] = -1073741811LL;
                  WdLogEvent5_WdError(v51);
                  goto LABEL_32;
                }
              }
            }
          }
        }
        v35 = v106;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
        *(_QWORD *)(v49 + 24) = 5629LL;
        WdLogEvent5_WdAssertion(v49);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v50 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        LODWORD(v35[1].Count) |= 1u;
        HIDWORD(v35->Ptr) = v50;
      }
      v35 += 12;
      v34 = v102 + 1;
      v106 = v35;
      v102 = v34;
      if ( v34 >= NumDifferentPhysicalAdapters )
      {
        ResourcePrivateDriverDataSize = v112.ResourcePrivateDriverDataSize;
        goto LABEL_63;
      }
      AllocationPrivateDriverDataSize = v112.AllocationPrivateDriverDataSize;
    }
    v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
    v67[5] = 0LL;
    goto LABEL_91;
  }
LABEL_63:
  v113.hDevice = *((_DWORD *)a2 + 1);
  v113.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v108;
  v113.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
  v113.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
  v113.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
  v53 = *(_DWORD *)a2;
  v54 = *(_DWORD *)a2 & 0x60;
  *(_QWORD *)&v113.hResource = 0LL;
  v113.NumAllocations = NumDifferentPhysicalAdapters;
  v113.pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)PoolWithTag;
  v113.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v113.Flags & 0xFFFFA495 | ((v53 & 0x400 | 0x10u) >> 4) | (2 * (v53 & 1 | (2 * (v53 & 2 | (2 * (v53 & 0x804 | (4 * (v53 & 0x18 | (2 * v54))))))))));
  v55 = DXGDEVICE::CreateAllocation(this, &v113, 0LL, 0LL, 0LL, a2, v110, 0, 0LL, 0LL, 0LL);
  v26 = v55;
  if ( v55 < 0 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
    v67[5] = 1LL;
LABEL_91:
    v67[3] = this;
    v67[4] = v26;
    WdLogEvent5_WdAssertion(v67);
    hResource = v113.hResource;
    goto LABEL_92;
  }
  v101 = 1;
  v103 = 0;
  if ( NumDifferentPhysicalAdapters )
  {
    v60 = (unsigned int *)PoolWithTag;
    v109 = (unsigned int *)PoolWithTag;
    while ( 1 )
    {
      v61 = *((_QWORD *)this + 5);
      v62 = *v60;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v61 + 192));
      v63 = (v62 >> 6) & 0xFFFFFF;
      if ( v63 < *(_DWORD *)(v61 + 232)
        && (v64 = *(_QWORD *)(v61 + 216),
            v65 = *(_DWORD *)(v64 + 16LL * v63 + 8),
            ((v62 >> 26) & 0x30) == (*(_BYTE *)(v64 + 16LL * v63 + 8) & 0x30))
        && (v65 & 0x1000) == 0
        && (v65 & 0xF) != 0
        && (*(_BYTE *)(v64 + 16LL * v63 + 8) & 0xF) == 5 )
      {
        v66 = *(struct _EX_RUNDOWN_REF **)(v64 + 16LL * v63);
      }
      else
      {
        v66 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v106, v66);
      ExReleasePushLockSharedEx(v61 + 192, 0LL);
      KeLeaveCriticalRegion();
      DXGALLOCATIONREFERENCE::MoveAssign(&v111, &v106);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v68, v69, v70);
      v8 = v111;
      if ( !v111 )
        break;
      v75 = *((_QWORD *)this + 2);
      v76 = *(_QWORD *)(v75 + 408);
      v77 = *(_QWORD *)(v75 + 400);
      v78 = *(_QWORD *)(v111[6].Count + 8);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v72);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v110, Current);
      LOBYTE(v77) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v77 + 8) + 184LL))(v76, v78);
      DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v110);
      if ( !(_BYTE)v77 && (*((_DWORD *)a2 + 4) != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) )
      {
        LODWORD(v26) = -1073741811;
        v85 = (_QWORD *)WdLogNewEntry5_WdError(v80);
        v85[3] = this;
        v85[4] = *((int *)a2 + 4);
        v85[5] = -1073741811LL;
        WdLogEvent5_WdError(v85);
        hResource = v113.hResource;
        goto LABEL_94;
      }
      v60 = v109 + 24;
      ++v103;
      v109 += 24;
      if ( v103 >= v107 )
      {
        PoolWithTag = v104;
        goto LABEL_80;
      }
    }
    LODWORD(v26) = -1073741811;
    v86 = (_QWORD *)WdLogNewEntry5_WdAssertion(v72, v71, v73, v74);
    v27 = v104;
    v86[3] = this;
    v86[4] = *(unsigned int *)&v104[96 * v103];
    v86[5] = -1073741811LL;
    WdLogEvent5_WdAssertion(v86);
    hResource = v113.hResource;
LABEL_95:
    if ( !hResource )
    {
      v87 = WdLogNewEntry5_WdAssertion(v84, v56, v58, v59);
      *(_QWORD *)(v87 + 24) = 5746LL;
      WdLogEvent5_WdAssertion(v87);
    }
    v92 = DXGPROCESS::GetCurrent(v84);
    if ( !v92 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v89, v88, v90, v91);
      *(_QWORD *)(v93 + 24) = 5754LL;
      WdLogEvent5_WdAssertion(v93);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v114, v92);
    v97 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v97 < *((_DWORD *)v92 + 58)
      && (v96 = *((_QWORD *)v92 + 27),
          v94 = hResource >> 30,
          v95 = *(unsigned int *)(v96 + 16LL * (unsigned int)v97 + 8),
          (_DWORD)v94 == ((*(_DWORD *)(v96 + 16LL * (unsigned int)v97 + 8) >> 4) & 3))
      && (v95 & 0x1000) == 0
      && (v95 & 0xF) != 0
      && (*(_BYTE *)(v96 + 16LL * (unsigned int)v97 + 8) & 0xF) == 4 )
    {
      v98 = *(struct DXGRESOURCE **)(v96 + 16LL * (unsigned int)v97);
      if ( v98 )
      {
        if ( (unsigned int)v97 < *((_DWORD *)v92 + 58) )
        {
          v99 = *(_DWORD *)(v96 + 16LL * (unsigned int)v97 + 8);
          if ( (_DWORD)v94 == ((v99 >> 4) & 3) && (v99 & 0x1000) == 0 && (v99 & 0xF) != 0 )
            *(_DWORD *)(v96 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
        }
        goto LABEL_112;
      }
    }
    else
    {
      v98 = 0LL;
    }
    v100 = WdLogNewEntry5_WdAssertion(v97, v94, v95, v96);
    *(_QWORD *)(v100 + 24) = 5760LL;
    WdLogEvent5_WdAssertion(v100);
LABEL_112:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v114);
    if ( v98 )
      DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v98, 0LL, DXGDEVICE::DestroyFlagsDefault);
    goto LABEL_33;
  }
LABEL_80:
  hResource = v113.hResource;
  *((_DWORD *)a2 + 3) = v113.hGlobalShare;
  *((_DWORD *)a2 + 2) = hResource;
  if ( v105 )
  {
    v82 = (int *)PoolWithTag;
    v56 = (_DWORD *)((char *)a2 + 52);
    v58 = v105;
    do
    {
      v83 = *v82;
      v82 += 24;
      *v56++ = v83;
      --v58;
    }
    while ( v58 );
  }
  v84 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
  if ( (v84 & 0xFFFFFFFD) != 0 )
    *((_QWORD *)a2 + 41) = 0LL;
  else
    *((_QWORD *)a2 + 41) = VIDMM_EXPORT::VidMmGetAllocationSection(
                             *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                             (struct _VIDMM_MULTI_ALLOC *)v8[3].Count);
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    memmove(*((void **)a2 + 45), *((const void **)PoolWithTag + 2), *((unsigned int *)a2 + 92));
    memmove(*((void **)a2 + 43), v112.pResourcePrivateDriverData, *((unsigned int *)a2 + 88));
  }
LABEL_92:
  if ( (int)v26 < 0 && v101 )
  {
LABEL_94:
    v27 = v104;
    goto LABEL_95;
  }
LABEL_32:
  v27 = v104;
LABEL_33:
  if ( v105 )
  {
    v28 = (void **)(v27 + 16);
    v29 = v105;
    do
    {
      operator delete(*v28);
      v28 += 12;
      --v29;
    }
    while ( v29 );
  }
  operator delete(v108);
  LODWORD(v15) = v26;
LABEL_37:
  PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>(&v115);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v30, v31, v32);
  return (unsigned int)v15;
}
