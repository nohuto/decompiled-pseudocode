/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x180093884
 * Callers:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180092418 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180092B18 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x180093090 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18009354C (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotifi.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800526F8 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  CCriticalSection::Init((LPCRITICAL_SECTION)this);
  return this;
}
