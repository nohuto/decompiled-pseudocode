/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004584
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C006E2C4 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     DxgkCreateContextVirtual @ 0x1C0093FE0 (DxgkCreateContextVirtual.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0095C18 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C015D370 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned __int8 v4; // si
  __int64 v5; // r8
  void *v6; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 304LL) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v2 + 80)) )
      goto LABEL_3;
    v6 = (void *)(v2 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v2 + 56)) )
      goto LABEL_3;
    v6 = (void *)(v2 + 56);
  }
  KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
LABEL_3:
  v3 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL));
    v4 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v5, 40LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 80), 1u);
    if ( v4 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 1;
}
