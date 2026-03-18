/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005A740
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B52C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01323B4 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
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
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // ebx
  D3DKMT_HANDLE hDevice; // edx
  BOOL v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGDEVICE *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v28; // ecx
  __int64 v29; // r8
  int v30; // edx
  struct DXGALLOCATION *v31; // rdx
  ADAPTER_RENDER *v32; // rdi
  struct _VIDMM_MULTI_ALLOC **v33; // r11
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  HANDLE hNtHandle; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  struct DXGDEVICE *v42; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v43[8]; // [rsp+60h] [rbp-61h] BYREF
  struct _VIDMM_MULTI_ALLOC **v44; // [rsp+68h] [rbp-59h] BYREF
  __int64 v45; // [rsp+70h] [rbp-51h] BYREF
  char v46; // [rsp+78h] [rbp-49h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-41h] BYREF
  PVOID v48; // [rsp+88h] [rbp-39h]
  PVOID Object; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v50[80]; // [rsp+98h] [rbp-29h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v37 = WdLogNewEntry5_WdError(v9);
    v17 = -1073741811;
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_26;
  }
  v11 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v16 = v11;
  v17 = v11;
  v48 = Object;
  if ( v11 == -1073741788 )
  {
    v38 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v38 + 32) = -1073741788LL;
  }
  else
  {
    if ( v11 >= 0 )
    {
      hDevice = a1->hDevice;
      v42 = 0LL;
      v19 = (HandleInformation.GrantedAccess & 1) == 0;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43, hDevice, (struct _KTHREAD **)Current, &v42);
      v24 = v42;
      if ( !v42 )
      {
        v40 = WdLogNewEntry5_WdError(v21);
        v17 = -1073741811;
        *(_QWORD *)(v40 + 24) = a1->hDevice;
        *(_QWORD *)(v40 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v40);
LABEL_23:
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v43);
        goto LABEL_24;
      }
      if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
      {
        v41 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
        v17 = -1073741811;
        *(_QWORD *)(v41 + 24) = v24;
        *(_QWORD *)(v41 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v41);
        goto LABEL_23;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v42, v42);
      v25 = *((_QWORD *)v24 + 2);
      v46 = 0;
      v45 = *(_QWORD *)(v25 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v45);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v24, 0, v26, 0);
      v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50);
      if ( v17 < 0
        || (v17 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                    v24,
                    a2,
                    (struct COREDEVICEACCESS *)v50,
                    v19,
                    a3,
                    a4,
                    a6),
            v17 < 0) )
      {
LABEL_20:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
        if ( v46 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v45);
        ExReleaseResourceLite(*((PERESOURCE *)v42 + 10));
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
      v28 = (hAllocation >> 6) & 0xFFFFFF;
      if ( v28 < *((_DWORD *)Current + 58)
        && (v29 = *((_QWORD *)Current + 27),
            v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
            ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
        && (v30 & 0x1000) == 0
        && (v30 & 0xF) != 0
        && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 5 )
      {
        v31 = *(struct DXGALLOCATION **)(v29 + 16LL * v28);
      }
      else
      {
        v31 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v31);
      ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
      if ( v44 )
      {
        v32 = (ADAPTER_RENDER *)*((_QWORD *)v24 + 2);
        if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v32) )
          goto LABEL_17;
        v17 = MapGpuVirtualAddressToAllocation(v32, v24, (struct DXGALLOCATION *)v33);
        if ( v17 >= 0 )
        {
          v33 = v44;
LABEL_17:
          if ( a5 )
            *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                            *(VIDMM_EXPORT **)(*((_QWORD *)v24 + 2) + 400LL),
                            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v24 + 2) + 408LL),
                            v33[3]);
          goto LABEL_19;
        }
        DXGDEVICE::DestroyAllocationInternal(v24, 0, 0LL, v44[5], 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        v17 = -1073741811;
      }
LABEL_19:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44);
      goto LABEL_20;
    }
    v38 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v38 + 32) = v16;
  }
  *(_QWORD *)(v38 + 24) = hNtHandle;
  WdLogEvent5_WdWarning(v38);
LABEL_24:
  if ( v48 )
    ObfDereferenceObject(v48);
LABEL_26:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v34, &EventProfilerExit, v35, 3034);
  return (unsigned int)v17;
}
