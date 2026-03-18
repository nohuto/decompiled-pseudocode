/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005BA30
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E6DC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct _KTHREAD **Current; // rax
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGDEVICE *v17; // rbx
  __int64 v18; // r9
  int v19; // eax
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v21; // ecx
  struct _KTHREAD *v22; // r8
  int v23; // edx
  struct DXGALLOCATION *v24; // rdx
  ADAPTER_RENDER *v25; // rdi
  struct _VIDMM_MULTI_ALLOC **v26; // r11
  int v27; // edi
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+38h] [rbp-69h]
  struct _VIDMM_MULTI_ALLOC **v36; // [rsp+58h] [rbp-49h] BYREF
  struct DXGDEVICE *v37; // [rsp+60h] [rbp-41h] BYREF
  char v38; // [rsp+68h] [rbp-39h]
  char v39[8]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v40[16]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v41[80]; // [rsp+88h] [rbp-19h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v12 = Current;
  if ( !Current )
  {
    v32 = WdLogNewEntry5_WdError(v11);
    v28 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_25;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39, a1->hDevice, Current, &v37);
  v17 = v37;
  if ( v37 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v34 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v34 + 24) = v17;
      v28 = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_24;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40, v37);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)&v37,
      *(struct DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v17, 0, v18, 0);
    v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41);
    if ( v19 < 0
      || (v19 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(v17, a2, (struct COREDEVICEACCESS *)v41, v35, a3, a4, a6),
          v19 < 0) )
    {
      v28 = v19;
      goto LABEL_21;
    }
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 24));
    v21 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)v12 + 58)
      && (v22 = v12[27],
          v23 = *((_DWORD *)v22 + 4 * v21 + 2),
          ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v22 + 16 * v21 + 8) & 0x30))
      && (v23 & 0x1000) == 0
      && (v23 & 0xF) != 0
      && (*((_BYTE *)v22 + 16 * v21 + 8) & 0xF) == 5 )
    {
      v24 = (struct DXGALLOCATION *)*((_QWORD *)v22 + 2 * v21);
    }
    else
    {
      v24 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36, v24);
    ExReleasePushLockSharedEx(v12 + 24, 0LL);
    KeLeaveCriticalRegion();
    if ( v36 )
    {
      v25 = (ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
      if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v25) )
      {
LABEL_17:
        if ( a5 )
          *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                          *(VIDMM_EXPORT **)(*((_QWORD *)v17 + 2) + 424LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v17 + 2) + 432LL),
                          v26[3]);
        v28 = 0;
        goto LABEL_20;
      }
      v27 = MapGpuVirtualAddressToAllocation(v25, v17, (struct DXGALLOCATION *)v26);
      if ( v27 >= 0 )
      {
        v26 = v36;
        goto LABEL_17;
      }
      DXGDEVICE::DestroyAllocationInternal(v17, 0, 0LL, v36[5], 0LL, DXGDEVICE::DestroyFlagsDefault);
      v28 = v27;
    }
    else
    {
      v28 = -1073741811;
    }
LABEL_20:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36);
LABEL_21:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    if ( v38 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v37);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
    goto LABEL_24;
  }
  v33 = WdLogNewEntry5_WdError(v14);
  v28 = -1073741811;
  *(_QWORD *)(v33 + 24) = a1->hDevice;
  *(_QWORD *)(v33 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v33);
LABEL_24:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39);
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 3034);
  return v28;
}
