/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C006EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001000 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0001788 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C001C8E8 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002191C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C006EE14 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0097038 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v13; // rcx
  struct _KTHREAD **v14; // rdi
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ADAPTER_RENDER **v23; // rsi
  __int64 v24; // rax
  __int64 hDevice; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // eax
  struct _KTHREAD **v29; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v31; // ecx
  struct _KTHREAD *v32; // r8
  int v33; // edx
  struct _VIDMM_MULTI_ALLOC **v34; // rdi
  struct ADAPTER_RENDER *v35; // r11
  int v37; // [rsp+38h] [rbp-79h]
  struct DXGDEVICE *v38[2]; // [rsp+58h] [rbp-59h] BYREF
  char v39[8]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v40[24]; // [rsp+70h] [rbp-41h] BYREF
  _BYTE v41[96]; // [rsp+88h] [rbp-29h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v11);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39, a1->hDevice, ProcessDxgProcess, v38);
    v23 = (ADAPTER_RENDER **)v38[0];
    if ( v38[0] )
    {
      if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38, v38[0]);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v40,
          *((struct DXGADAPTER **)v23[2] + 2),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v23, 0, v27, 0);
        v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41);
        if ( v28 < 0
          || (v28 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                      (DXGDEVICE *)v23,
                      a2,
                      (struct COREDEVICEACCESS *)v41,
                      v37,
                      a3,
                      a4,
                      a6),
              v28 < 0) )
        {
          v16 = v28;
        }
        else
        {
          v29 = v14 + 23;
          hAllocation = a1->pOpenAllocationInfo->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 23));
          v31 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v31 < *((_DWORD *)v14 + 56)
            && (v32 = v14[26],
                v33 = *((_DWORD *)v32 + 4 * v31 + 2),
                ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v32 + 16 * v31 + 8) & 0x30))
            && (v33 & 0x1000) == 0
            && (v33 & 0xF) != 0
            && (*((_BYTE *)v32 + 16 * v31 + 8) & 0xF) == 5 )
          {
            v34 = (struct _VIDMM_MULTI_ALLOC **)*((_QWORD *)v32 + 2 * v31);
          }
          else
          {
            v34 = 0LL;
          }
          ExReleasePushLockSharedEx(v29, 0LL);
          KeLeaveCriticalRegion();
          if ( v34 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v23[2])
              && (v16 = MapGpuVirtualAddressToAllocation(v35, (struct DXGALLOCATION *)v34), v16 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v23,
                0,
                0LL,
                v34[5],
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                *((VIDMM_EXPORT **)v23[2] + 50),
                                *((struct VIDMM_GLOBAL **)v23[2] + 51),
                                v34[3]);
              v16 = 0;
            }
          }
          else
          {
            v16 = -1073741811;
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v38);
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        v16 = -1073741811;
        *(_QWORD *)(v26 + 24) = v23;
        *(_QWORD *)(v26 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v26);
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v20);
      hDevice = a1->hDevice;
      v16 = -1073741811;
      *(_QWORD *)(v24 + 24) = hDevice;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v24);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39);
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13);
    v16 = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 3034);
  return (unsigned int)v16;
}
