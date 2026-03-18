/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0155620
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001000 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002191C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C006EE14 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0096D28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ProcessDxgProcess; // r14
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rax
  HANDLE hNtHandle; // rcx
  D3DKMT_HANDLE hDevice; // edx
  char v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  ADAPTER_RENDER **v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r8
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v37; // ecx
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rdi
  struct ADAPTER_RENDER *v41; // r11
  __int64 v43; // [rsp+58h] [rbp-89h] BYREF
  struct DXGDEVICE *v44[2]; // [rsp+60h] [rbp-81h] BYREF
  _BYTE v45[24]; // [rsp+70h] [rbp-71h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-59h] BYREF
  PVOID Object; // [rsp+90h] [rbp-51h] BYREF
  PERESOURCE *v48[18]; // [rsp+98h] [rbp-49h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  HandleInformation = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    v13 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_38;
  }
  v16 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v21 = Object;
  v22 = v16;
  v13 = v16;
  if ( v16 == -1073741788 )
  {
    v23 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v23 + 32) = -1073741788LL;
  }
  else
  {
    if ( v16 >= 0 )
    {
      hDevice = a1->hDevice;
      v26 = (HandleInformation.GrantedAccess & 1) == 0;
      v44[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)&v43,
        hDevice,
        (struct _KTHREAD **)ProcessDxgProcess,
        v44);
      v31 = (ADAPTER_RENDER **)v44[0];
      if ( v44[0] )
      {
        if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
            (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v44,
            v44[0]);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v45,
            *((struct DXGADAPTER **)v31[2] + 2),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v31, 0, v34, 0);
          v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48);
          if ( v13 >= 0 )
          {
            v13 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                    (DXGDEVICE *)v31,
                    (__int64)a1,
                    v35,
                    (__int64)v21,
                    a2,
                    v48,
                    v26,
                    a3,
                    a4,
                    a6);
            if ( v13 >= 0 )
            {
              hAllocation = a1->pOpenAllocationInfo2->hAllocation;
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
              v37 = (hAllocation >> 6) & 0xFFFFFF;
              if ( v37 < *(_DWORD *)(ProcessDxgProcess + 224)
                && (v38 = *(_QWORD *)(ProcessDxgProcess + 208),
                    v39 = *(_DWORD *)(v38 + 16LL * v37 + 8),
                    ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v38 + 16LL * v37 + 8) & 0x30))
                && (v39 & 0x1000) == 0
                && (v39 & 0xF) != 0
                && (*(_BYTE *)(v38 + 16LL * v37 + 8) & 0xF) == 5 )
              {
                v40 = *(_QWORD *)(v38 + 16LL * v37);
              }
              else
              {
                v40 = 0LL;
              }
              ExReleasePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
              KeLeaveCriticalRegion();
              if ( v40 )
              {
                if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v31[2])
                  && (v13 = MapGpuVirtualAddressToAllocation(v41, (struct DXGALLOCATION *)v40), v13 < 0) )
                {
                  DXGDEVICE::DestroyAllocationInternal(
                    (DXGDEVICE *)v31,
                    0,
                    0LL,
                    *(struct DXGALLOCATION ***)(v40 + 40),
                    0LL,
                    DXGDEVICE::DestroyFlagsDefault);
                }
                else if ( a5 )
                {
                  *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                  *((VIDMM_EXPORT **)v31[2] + 50),
                                  *((struct VIDMM_GLOBAL **)v31[2] + 51),
                                  *(struct _VIDMM_MULTI_ALLOC **)(v40 + 24));
                }
              }
              else
              {
                v13 = -1073741811;
              }
            }
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
          if ( v45[16] )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v44);
        }
        else
        {
          v33 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
          v13 = -1073741811;
          *(_QWORD *)(v33 + 24) = v31;
          *(_QWORD *)(v33 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v33);
        }
      }
      else
      {
        v32 = WdLogNewEntry5_WdError(v28);
        v13 = -1073741811;
        *(_QWORD *)(v32 + 24) = a1->hDevice;
        *(_QWORD *)(v32 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v32);
      }
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43);
      goto LABEL_36;
    }
    v23 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v23 + 32) = v22;
  }
  *(_QWORD *)(v23 + 24) = hNtHandle;
  WdLogEvent5_WdWarning(v23);
LABEL_36:
  if ( v21 )
    ObfDereferenceObject(v21);
LABEL_38:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 3034);
  return (unsigned int)v13;
}
