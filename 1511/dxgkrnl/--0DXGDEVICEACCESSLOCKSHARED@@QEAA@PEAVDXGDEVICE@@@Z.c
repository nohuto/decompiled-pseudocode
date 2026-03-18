/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BEA0
 * Callers:
 *     DxgkGetContextSchedulingPriority @ 0x1C005CA40 (DxgkGetContextSchedulingPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C00BB470 (DxgkQueryAllocationResidency.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00BB5D0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C00BB840 (DxgkQueryResourceInfo.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0135050 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C013D020 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C0149510 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C014BE9C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0152950 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  struct _KEVENT *v4; // rsi
  unsigned __int8 v6; // si
  __int64 v7; // r8

  *(_QWORD *)this = a2;
  if ( a2 )
  {
    v4 = (struct _KEVENT *)(*((_QWORD *)a2 + 2) + 56LL);
    if ( !KeReadStateEvent(v4) )
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)a2 + 10), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 80LL));
      v6 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v7, 40LL);
      ExAcquireResourceSharedLite(*((PERESOURCE *)a2 + 10), 1u);
      if ( v6 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return this;
}
