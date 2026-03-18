/*
 * XREFs of ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214
 * Callers:
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005C154 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C006B51C (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C006D5D8 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C006D670 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00855BC (--1DXGCONTEXT@@QEAA@XZ.c)
 *     DxgkDestroyContext @ 0x1C008AE10 (DxgkDestroyContext.c)
 *     DxgkDestroyDevice @ 0x1C008B4D0 (DxgkDestroyDevice.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ @ 0x1C008BB20 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C008D280 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0093D30 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00B0EE0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     DxgkCreateAllocation @ 0x1C00B5600 (DxgkCreateAllocation.c)
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00C079C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C0148DC0 (DxgkDestroyOverlay.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C014C074 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01569AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
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

  v2 = (struct DXGPROCESS *)((char *)a2 + 192) == 0LL;
  v3 = (struct _KTHREAD **)((char *)a2 + 192);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = v3;
  if ( !v2 && v3[1] == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v9 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *(unsigned int *)(v5 + 16);
      if ( (_DWORD)v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v6, &EventBlockThread, v7, v10);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
