/*
 * XREFs of ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C0144610
 * Callers:
 *     ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C0131530 (-DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z.c)
 *     DxgkCreatePagingQueue @ 0x1C0145BA0 (DxgkCreatePagingQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C013531C (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueueInternal(struct _D3DKMT_CREATEPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  struct _D3DKMT_CREATEPAGINGQUEUE *v5; // r15
  ULONG64 v6; // rcx
  _OWORD *p_hDevice; // rax
  struct _D3DKMT_CREATEPAGINGQUEUE *v8; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  DXGDEVICE *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  int PagingQueue; // r12d
  __int64 v21; // rcx
  __int64 PhysicalAdapterIndex; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL);
  v5 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2117);
  memset(v3 + 5, 0, 0x20uLL);
  *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    p_hDevice = &v5->hDevice;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *p_hDevice;
    *(_OWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = p_hDevice[1];
    v8 = (struct _D3DKMT_CREATEPAGINGQUEUE *)(v3 + 5);
    *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 40;
  }
  else
  {
    v8 = v5;
    *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v5;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL),
    v8->hDevice,
    Current,
    v3 + 1);
  v11 = *(DXGDEVICE **)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v8->hDevice;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL));
    v14 = qword_1C00467F0;
    v15 = (qword_1C00467F0 & 2) == 0;
LABEL_11:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v14, &EventProfilerExit, v13, 2117);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), (__int64)v11, 0, v17, 0);
  PagingQueue = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 10));
  if ( PagingQueue >= 0 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    PhysicalAdapterIndex = v8->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex >= *(_DWORD *)(v21 + 232) )
    {
      v23 = WdLogNewEntry5_WdWarning(v21, PhysicalAdapterIndex, v18, v19);
      *(_QWORD *)(v23 + 24) = v8->PhysicalAdapterIndex;
      WdLogEvent5_WdWarning(v23);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
      if ( *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL));
      v15 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_11;
    }
    *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    PagingQueue = DXGDEVICE::CreatePagingQueue(v11, PhysicalAdapterIndex, v8->Priority, v3 + 1);
    if ( PagingQueue >= 0 )
    {
      v24 = *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v8->hSyncObject = *(_DWORD *)(*(_QWORD *)(v24 + 40) + 40LL);
      v8->FenceValueCPUVirtualAddress = *(void **)(*(_QWORD *)(v24 + 40) + 56LL);
      v8->hPagingQueue = *(_DWORD *)(v24 + 24);
      if ( a2 )
      {
        if ( (unsigned __int64)v5 >= MmUserProbeAddress )
          v5 = (struct _D3DKMT_CREATEPAGINGQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v5->hDevice = *(_OWORD *)&v8->hDevice;
        *(_OWORD *)&v5->FenceValueCPUVirtualAddress = *(_OWORD *)&v8->FenceValueCPUVirtualAddress;
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
  if ( *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 2117);
  return (unsigned int)PagingQueue;
}
