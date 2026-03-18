/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C001C168
 * Callers:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00057EC (-ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::Acquire(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned __int8 v4; // si
  __int64 v5; // r8

  if ( *(_QWORD *)this )
  {
    v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( !KeReadStateEvent((PRKEVENT)(v2 + 56)) )
      KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 80), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 80LL));
      v4 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v5, 40);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 80), 1u);
      if ( v4 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
      ADAPTER_RENDER::ReleasePowerTransitionLockShared(*(ADAPTER_RENDER **)(v3 + 16));
    }
    *((_BYTE *)this + 8) = 1;
  }
}
