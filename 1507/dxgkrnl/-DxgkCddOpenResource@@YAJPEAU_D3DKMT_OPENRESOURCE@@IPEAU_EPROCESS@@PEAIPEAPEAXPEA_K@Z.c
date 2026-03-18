/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001000 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001C6F0 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01323B4 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
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
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // eax
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v22; // ecx
  struct _KTHREAD *v23; // r8
  int v24; // edx
  struct DXGALLOCATION *v25; // rdx
  ADAPTER_RENDER *v26; // rdi
  struct _VIDMM_MULTI_ALLOC **v27; // r11
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edi
  int v36; // [rsp+38h] [rbp-69h]
  struct _VIDMM_MULTI_ALLOC **v37; // [rsp+58h] [rbp-49h] BYREF
  struct DXGDEVICE *v38; // [rsp+60h] [rbp-41h] BYREF
  __int64 v39; // [rsp+68h] [rbp-39h] BYREF
  char v40; // [rsp+70h] [rbp-31h]
  _BYTE v41[16]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v42[80]; // [rsp+88h] [rbp-19h] BYREF

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
    goto LABEL_23;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v41, a1->hDevice, Current, &v38);
  v17 = v38;
  if ( v38 )
  {
    if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
    {
      v34 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v34 + 24) = v17;
      v28 = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_22;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v38, v38);
    v18 = *((_QWORD *)v17 + 2);
    v40 = 0;
    v39 = *(_QWORD *)(v18 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v39);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v17, 0, v19, 0);
    v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
    if ( v20 < 0
      || (v20 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(v17, a2, (struct COREDEVICEACCESS *)v42, v36, a3, a4, a6),
          v20 < 0) )
    {
      v28 = v20;
      goto LABEL_19;
    }
    hAllocation = a1->pOpenAllocationInfo->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 24));
    v22 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v22 < *((_DWORD *)v12 + 58)
      && (v23 = v12[27],
          v24 = *((_DWORD *)v23 + 4 * v22 + 2),
          ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v23 + 16 * v22 + 8) & 0x30))
      && (v24 & 0x1000) == 0
      && (v24 & 0xF) != 0
      && (*((_BYTE *)v23 + 16 * v22 + 8) & 0xF) == 5 )
    {
      v25 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 2 * v22);
    }
    else
    {
      v25 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37, v25);
    ExReleasePushLockSharedEx(v12 + 24, 0LL);
    KeLeaveCriticalRegion();
    if ( v37 )
    {
      v26 = (ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
      if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v26) )
      {
LABEL_15:
        if ( a5 )
          *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                          *(VIDMM_EXPORT **)(*((_QWORD *)v17 + 2) + 400LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v17 + 2) + 408LL),
                          v27[3]);
        v28 = 0;
        goto LABEL_18;
      }
      v35 = MapGpuVirtualAddressToAllocation(v26, v17, (struct DXGALLOCATION *)v27);
      if ( v35 >= 0 )
      {
        v27 = v37;
        goto LABEL_15;
      }
      DXGDEVICE::DestroyAllocationInternal(v17, 0, 0LL, v37[5], 0LL, DXGDEVICE::DestroyFlagsDefault);
      v28 = v35;
    }
    else
    {
      v28 = -1073741811;
    }
LABEL_18:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37);
LABEL_19:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    if ( v40 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v39);
    ExReleaseResourceLite(*((PERESOURCE *)v38 + 10));
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  v33 = WdLogNewEntry5_WdError(v14);
  v28 = -1073741811;
  *(_QWORD *)(v33 + 24) = a1->hDevice;
  *(_QWORD *)(v33 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v33);
LABEL_22:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v41);
LABEL_23:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 3034);
  return v28;
}
