/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01361B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001000 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001CA04 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C005BC6C (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E3D0 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rax
  HANDLE hNtHandle; // rcx
  D3DKMT_HANDLE hDevice; // edx
  char v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGDEVICE *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r8
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v35; // ecx
  __int64 v36; // r8
  int v37; // edx
  struct _EX_RUNDOWN_REF *v38; // rdx
  struct ADAPTER_RENDER *v39; // rdi
  struct _VIDMM_MULTI_ALLOC **v40; // r11
  struct DXGDEVICE *v42; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v43[8]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v44[16]; // [rsp+68h] [rbp-69h] BYREF
  PVOID v45; // [rsp+78h] [rbp-59h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v47[16]; // [rsp+88h] [rbp-49h] BYREF
  PVOID Object; // [rsp+98h] [rbp-39h] BYREF
  PERESOURCE *v49[10]; // [rsp+A8h] [rbp-29h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_40;
  }
  v15 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v20 = v15;
  v12 = v15;
  v45 = Object;
  if ( v15 == -1073741788 )
  {
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v21 + 32) = -1073741788LL;
LABEL_8:
    *(_QWORD *)(v21 + 24) = hNtHandle;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_38;
  }
  if ( v15 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v21 + 32) = v20;
    goto LABEL_8;
  }
  hDevice = a1->hDevice;
  v42 = 0LL;
  v24 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43, hDevice, (struct _KTHREAD **)Current, &v42);
  v29 = v42;
  if ( v42 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v31 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      v12 = -1073741811;
      *(_QWORD *)(v31 + 24) = v29;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      goto LABEL_37;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v47, v42);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v44,
      *(struct DXGADAPTER **)(*((_QWORD *)v29 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v29, 0, v32, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49);
    if ( v12 < 0
      || (v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                  v29,
                  (__int64)a1,
                  v33,
                  (__int64)v45,
                  a2,
                  v49,
                  v24,
                  a3,
                  a4,
                  a6),
          v12 < 0) )
    {
LABEL_34:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
      if ( v44[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v47);
      goto LABEL_37;
    }
    hAllocation = a1->pOpenAllocationInfo2->hAllocation;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
    v35 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v35 < *((_DWORD *)Current + 58)
      && (v36 = *((_QWORD *)Current + 27),
          v37 = *(_DWORD *)(v36 + 16LL * v35 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0x30))
      && (v37 & 0x1000) == 0
      && (v37 & 0xF) != 0
      && (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0xF) == 5 )
    {
      v38 = *(struct _EX_RUNDOWN_REF **)(v36 + 16LL * v35);
    }
    else
    {
      v38 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v42, v38);
    ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( !v42 )
    {
      v12 = -1073741811;
LABEL_33:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v42);
      goto LABEL_34;
    }
    v39 = (struct ADAPTER_RENDER *)*((_QWORD *)v29 + 2);
    if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v39) )
    {
      v12 = MapGpuVirtualAddressToAllocation(v39, v29, (struct DXGALLOCATION *)v40);
      if ( v12 < 0 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          v29,
          0,
          0LL,
          *((struct DXGRESOURCE **)v42 + 5),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        goto LABEL_33;
      }
      v40 = (struct _VIDMM_MULTI_ALLOC **)v42;
    }
    if ( a5 )
      *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                      *(VIDMM_EXPORT **)(*((_QWORD *)v29 + 2) + 424LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)v29 + 2) + 432LL),
                      v40[3]);
    goto LABEL_33;
  }
  v30 = WdLogNewEntry5_WdError(v26);
  v12 = -1073741811;
  *(_QWORD *)(v30 + 24) = a1->hDevice;
  *(_QWORD *)(v30 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v30);
LABEL_37:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43);
LABEL_38:
  if ( v45 )
    ObfDereferenceObject(v45);
LABEL_40:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 3034);
  return (unsigned int)v12;
}
