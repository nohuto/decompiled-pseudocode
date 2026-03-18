/*
 * XREFs of ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18008307C
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800B4614 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 * Callees:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18009DD60 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotifi.c)
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
  *((_QWORD *)this + 146) = *((_QWORD *)a3 + 33);
  *((_DWORD *)this + 294) = 0;
  *((_QWORD *)this + 148) = 0LL;
  if ( g_pMediaControl && *((_DWORD *)this + 76) )
    QueryPerformanceCounter((LARGE_INTEGER *)this + 148);
  return this;
}
