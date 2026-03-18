/*
 * XREFs of ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180092738
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x180094E24 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 * Callees:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18009354C (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotifi.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::CCrossThreadComposition(
        CCrossThreadComposition *this,
        struct CKernelTransport *a2,
        struct CPartitionVerticalBlankScheduler *a3,
        struct IMilNotificationTransport *a4,
        struct CDebugFrameCounter *a5,
        struct CoRenderHost *a6)
{
  CComposition::CComposition(this, a2, a3, a4, a5, a6);
  *(_QWORD *)this = &CCrossThreadComposition::`vftable';
  *((_QWORD *)this + 149) = *((_QWORD *)a3 + 32);
  *((_DWORD *)this + 300) = 0;
  *((_QWORD *)this + 151) = 0LL;
  if ( g_pMediaControl && *((_DWORD *)this + 76) )
    QueryPerformanceCounter((LARGE_INTEGER *)this + 151);
  return this;
}
