/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180090F20
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800B4508 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CAnimationTracking@@QEAA@XZ @ 0x180028438 (--0CAnimationTracking@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800AFD6C (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CKernelTransport *a2,
        struct CConnection *a3,
        struct IDWMCoRenderEngine *a4)
{
  __int64 v8; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  *((_QWORD *)this + 10) = 1LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 23) = 0x100000000LL;
  *(_QWORD *)((char *)this + 220) = 0x100000000LL;
  *((_QWORD *)this + 31) = 1LL;
  `vector constructor iterator'(
    (CPartitionVerticalBlankScheduler *)((char *)this + 272),
    1376LL,
    16,
    (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))CFrameInfo::CFrameInfo);
  CAnimationTracking::CAnimationTracking((CPartitionVerticalBlankScheduler *)((char *)this + 22664));
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 23248));
  *((_QWORD *)this + 3177) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3177) = &CDebugFrameCounter::`vftable';
  *((_DWORD *)this + 6356) = 0;
  *((_QWORD *)this + 3759) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3759) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 7520) = 0;
  *((_DWORD *)this + 7395) = -1;
  *((_DWORD *)this + 7394) = -1;
  *((_DWORD *)this + 6359) = -1;
  *((_DWORD *)this + 6358) = -1;
  *((_DWORD *)this + 7393) = 1;
  *((_DWORD *)this + 7392) = 1;
  v8 = 1376LL * *((unsigned int *)this + 5572);
  *((_DWORD *)this + 5573) = 15;
  *((_DWORD *)this + 5574) = -1;
  *((_QWORD *)this + 2788) = (char *)this + v8 + 272;
  *((_QWORD *)this + 2789) = (char *)this + 20912;
  *((_DWORD *)this + 5575) = -1;
  *((_BYTE *)this + 22660) = 1;
  *((_DWORD *)this + 5663) = -1;
  *((_QWORD *)this + 17) = a2;
  *((_QWORD *)this + 18) = a3;
  *((_QWORD *)this + 19) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
