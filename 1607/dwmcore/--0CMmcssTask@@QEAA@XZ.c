/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800A8014
 * Callers:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180036FA0 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180043998 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAVCConnectio.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800A7AE8 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A9DE0 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18 (-Init@CCriticalSection@@QEAAJXZ.c)
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
