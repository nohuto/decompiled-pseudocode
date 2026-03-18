/*
 * XREFs of ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964
 * Callers:
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C006F7BC (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C0072F00 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     DxgkCreateAllocation @ 0x1C0076DD0 (DxgkCreateAllocation.c)
 *     DxgkDestroyDevice @ 0x1C00786C0 (DxgkDestroyDevice.c)
 *     DxgkDestroyContext @ 0x1C0078CD0 (DxgkDestroyContext.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008E68C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008ED3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0095C18 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009CDF8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A32F0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00B0C30 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00D7D7C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C015D370 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0167C5C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C016DAF0 (DxgkDestroyOverlay.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C9C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0171F50 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C01763A8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0177C70 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B4D0 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C018DAD4 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

DXGHANDLETABLELOCKEXCLUSIVE *__fastcall DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        DXGHANDLETABLELOCKEXCLUSIVE *this,
        struct DXGPROCESS *a2)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGHANDLETABLELOCKEXCLUSIVE *result; // rax
  __int64 v9; // rax
  __int64 v10; // r9

  v2 = (struct DXGPROCESS *)((char *)a2 + 184) == 0LL;
  v3 = (struct _KTHREAD **)((char *)a2 + 184);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = v3;
  if ( !v2 && v3[1] == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *(unsigned int *)(v5 + 16);
      if ( (_DWORD)v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v6, &EventBlockThread, v7, v10);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
