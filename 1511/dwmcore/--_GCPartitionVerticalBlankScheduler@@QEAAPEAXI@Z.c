/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800FF678
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800B4508 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800FFDB8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::`scalar deleting destructor'(
        CPartitionVerticalBlankScheduler *this)
{
  CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPartitionVerticalBlankScheduler *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
