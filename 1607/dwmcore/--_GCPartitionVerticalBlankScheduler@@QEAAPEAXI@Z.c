/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x180113860
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800A9E74 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801139A8 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
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
