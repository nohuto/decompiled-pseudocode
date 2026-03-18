/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800A4E04
 * Callers:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x18006CB80 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18009DD60 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotifi.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800A6E08 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8B74 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538 (-Init@CCriticalSection@@QEAAJXZ.c)
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
