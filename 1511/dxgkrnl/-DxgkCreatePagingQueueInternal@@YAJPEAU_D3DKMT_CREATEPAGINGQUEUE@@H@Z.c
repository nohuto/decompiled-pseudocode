/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280
 * Callers:
 *     DxgkCreatePagingQueue @ 0x1C008D650 (DxgkCreatePagingQueue.c)
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00C6B80 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00040A8 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C006CE10 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@@Z @ 0x1C006E370 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct DXGPAGINGQUEUE **v3; // rbp
  struct _D3DKMT_CREATEPAGINGQUEUE *v5; // r15
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v7; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v16; // r8
  __int64 v17; // r9
  int PagingQueue; // r12d
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  struct DXGPAGINGQUEUE *v29; // rdx
  struct DXGPAGINGQUEUE *v30; // [rsp+60h] [rbp+0h] BYREF

  v3 = (struct DXGPAGINGQUEUE **)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2117);
  memset(v3 + 14, 0, 0x20uLL);
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  if ( a2 )
  {
    p_hDevice = &v5->hDevice;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *p_hDevice;
    *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = p_hDevice[1];
    v7 = (struct _D3DKMT_CREATEPAGINGQUEUE *)(v3 + 14);
    *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 112;
  }
  else
  {
    v7 = v5;
    *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1), v7->hDevice, Current, v3 + 2);
  v10 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v7->hDevice;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v13 = qword_1C00467F0;
    v14 = (qword_1C00467F0 & 2) == 0;
LABEL_11:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, 2117);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 24),
    *(struct DXGDEVICE **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(v3 + 7),
    *(struct DXGADAPTER *const *)(*(_QWORD *)(v10 + 16) + 16LL),
    0LL);
  PagingQueue = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 7));
  if ( PagingQueue < 0 )
    goto LABEL_16;
  v22 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  PhysicalAdapterIndex = v7->PhysicalAdapterIndex;
  if ( (unsigned int)PhysicalAdapterIndex >= *(_DWORD *)(v22 + 232) )
  {
    v24 = WdLogNewEntry5_WdWarning(v22, PhysicalAdapterIndex, v16, v17);
    *(_QWORD *)(v24 + 24) = v7->PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v24);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 7));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v14 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_11;
  }
  *v3 = 0LL;
  PagingQueue = DXGDEVICE::CreatePagingQueue(
                  (PERESOURCE *)v10,
                  PhysicalAdapterIndex,
                  v7->Priority,
                  (struct DXGPAGINGQUEUE **)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( PagingQueue < 0 )
  {
LABEL_16:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 7));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v20 = qword_1C00467F0;
    v21 = (qword_1C00467F0 & 2) == 0;
LABEL_30:
    if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v20, &EventProfilerExit, v19, 2117);
    return (unsigned int)PagingQueue;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 18),
    *(struct DXGPROCESS **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
  v25 = HMGRTABLE::AllocHandle(*(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 216LL, *v3, 10LL);
  v7->hPagingQueue = v25;
  *((_DWORD *)*v3 + 6) = v25;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 18));
  if ( v7->hPagingQueue )
  {
    v29 = *v3;
    v7->hSyncObject = *(_DWORD *)(*((_QWORD *)*v3 + 5) + 40LL);
    v7->FenceValueCPUVirtualAddress = *(void **)(*((_QWORD *)v29 + 5) + 56LL);
    if ( a2 )
    {
      if ( (unsigned __int64)v5 >= MmUserProbeAddress )
        v5 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
      *(_OWORD *)&v5->hDevice = *(_OWORD *)&v7->hDevice;
      *(_OWORD *)&v5->FenceValueCPUVirtualAddress = *(_OWORD *)&v7->FenceValueCPUVirtualAddress;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 7));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
    v21 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_30;
  }
  v27 = WdLogNewEntry5_WdError(v26);
  *(_QWORD *)(v27 + 24) = v10;
  *(_QWORD *)(v27 + 32) = -1073741801LL;
  WdLogEvent5_WdError(v27);
  DXGDEVICE::DestroyPagingQueue((PERESOURCE *)v10, *v3);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 7));
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 1));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v28, 2117);
  return 3221225495LL;
}
