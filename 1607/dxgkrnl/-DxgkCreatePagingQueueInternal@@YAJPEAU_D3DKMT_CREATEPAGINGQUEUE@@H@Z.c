/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00D1FBC
 * Callers:
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00D1FA0 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     DxgkCreatePagingQueue @ 0x1C00D1FB0 (DxgkCreatePagingQueue.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0095284 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  struct _D3DKMT_CREATEPAGINGQUEUE *v5; // r14
  ULONG64 v6; // rcx
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v8; // rdi
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v12; // rcx
  DXGDEVICE *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  __int64 v26; // rax
  int PagingQueue; // r15d
  __int64 v28; // r8
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  char v32; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2117);
  memset(v3 + 5, 0, 0x20uLL);
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    p_hDevice = &v5->hDevice;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *p_hDevice;
    *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = p_hDevice[1];
    v8 = (struct _D3DKMT_CREATEPAGINGQUEUE *)(v3 + 5);
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 40;
  }
  else
  {
    v8 = v5;
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v5;
  }
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v10);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL),
    v8->hDevice,
    ProcessDxgProcess,
    v3 + 1);
  v13 = *(DXGDEVICE **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v8->hDevice;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
    v16 = qword_1C0056840;
    v17 = (qword_1C0056840 & 2) == 0;
LABEL_11:
    if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v16, &EventProfilerExit, v15, 2117);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 24),
    *(struct DXGDEVICE **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), (__int64)v13, 0, v19, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 10));
  if ( v22 >= 0 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    PhysicalAdapterIndex = v8->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex >= *(_DWORD *)(v24 + 248) )
    {
      v26 = WdLogNewEntry5_WdWarning(v24, PhysicalAdapterIndex, v20, v21);
      *(_QWORD *)(v26 + 24) = v8->PhysicalAdapterIndex;
      WdLogEvent5_WdWarning(v26);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
      v17 = (qword_1C0056840 & 2) == 0;
      goto LABEL_11;
    }
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    PagingQueue = DXGDEVICE::CreatePagingQueue(v13, PhysicalAdapterIndex, v8->Priority, v3 + 1);
    if ( PagingQueue >= 0 )
    {
      v31 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v8->hSyncObject = *(_DWORD *)(*(_QWORD *)(v31 + 40) + 40LL);
      v8->FenceValueCPUVirtualAddress = *(void **)(*(_QWORD *)(v31 + 40) + 56LL);
      v8->hPagingQueue = *(_DWORD *)(v31 + 24);
      if ( a2 )
      {
        if ( (unsigned __int64)v5 >= MmUserProbeAddress )
          v5 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v5->hDevice = *(_OWORD *)&v8->hDevice;
        *(_OWORD *)&v5->FenceValueCPUVirtualAddress = *(_OWORD *)&v8->FenceValueCPUVirtualAddress;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
      v30 = (qword_1C0056840 & 2) == 0;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
      v29 = qword_1C0056840;
      v30 = (qword_1C0056840 & 2) == 0;
    }
    if ( !v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v29, &EventProfilerExit, v28, 2117);
    return (unsigned int)PagingQueue;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v23, 2117);
    return (unsigned int)v22;
  }
}
