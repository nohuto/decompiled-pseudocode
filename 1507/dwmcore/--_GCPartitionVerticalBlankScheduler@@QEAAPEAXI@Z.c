/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800E0F58
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x180094480 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800E10C0 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800E16A8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
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
