/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180094C7C
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x180094480 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180094F08 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??0CAnimationTracking@@QEAA@XZ @ 0x180094FE4 (--0CAnimationTracking@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CKernelTransport *a2,
        struct CConnection *a3,
        struct IDWMCoRenderEngine *a4)
{
  __int64 v8; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  *((_QWORD *)this + 9) = 1LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 22) = 0x100000000LL;
  *(_QWORD *)((char *)this + 212) = 0x100000000LL;
  *((_QWORD *)this + 30) = 1LL;
  `vector constructor iterator'(
    (CPartitionVerticalBlankScheduler *)((char *)this + 264),
    1376LL,
    16,
    (void (__fastcall *)(Mesh::MeshLine *))CFrameInfo::CFrameInfo);
  CAnimationTracking::CAnimationTracking((CPartitionVerticalBlankScheduler *)((char *)this + 22656));
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 23240));
  *((_QWORD *)this + 3161) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3161) = &CDebugFrameCounter::`vftable';
  *((_DWORD *)this + 6324) = 0;
  *((_QWORD *)this + 3743) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3743) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 7488) = 0;
  *((_DWORD *)this + 7363) = -1;
  *((_DWORD *)this + 7362) = -1;
  *((_DWORD *)this + 6327) = -1;
  *((_DWORD *)this + 6326) = -1;
  *((_DWORD *)this + 7361) = 1;
  *((_DWORD *)this + 7360) = 1;
  v8 = 1376LL * *((unsigned int *)this + 5570);
  *((_DWORD *)this + 5571) = 15;
  *((_DWORD *)this + 5572) = -1;
  *((_QWORD *)this + 2787) = (char *)this + v8 + 264;
  *((_QWORD *)this + 2788) = (char *)this + 20904;
  *((_DWORD *)this + 5573) = -1;
  *((_BYTE *)this + 22652) = 1;
  *((_DWORD *)this + 5661) = -1;
  *((_QWORD *)this + 16) = a2;
  *((_QWORD *)this + 17) = a3;
  *((_QWORD *)this + 18) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
