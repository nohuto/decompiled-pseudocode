/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAUIDWMCoRenderEngine@@@Z @ 0x180047238
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800A9E74 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 * Callees:
 *     ??0CAnimationTracking@@QEAA@XZ @ 0x1800A1040 (--0CAnimationTracking@@QEAA@XZ.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800A1BC4 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CKernelTransport *a2,
        struct CConnection *a3,
        struct IDWMCoRenderEngine *a4)
{
  unsigned __int64 *v8; // rsi
  ULONGLONG TickCount64; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  *((_QWORD *)this + 10) = 1LL;
  *((_QWORD *)this + 24) = 0x100000000LL;
  *(_QWORD *)((char *)this + 228) = 0x100000000LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 32) = 1LL;
  `vector constructor iterator'(
    (CPartitionVerticalBlankScheduler *)((char *)this + 280),
    0x548uLL,
    0x10uLL,
    (void *(*)(void *))CFrameInfo::CFrameInfo);
  CAnimationTracking::CAnimationTracking((CPartitionVerticalBlankScheduler *)((char *)this + 22288));
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 22872));
  v8 = (unsigned __int64 *)((char *)this + 24760);
  TickCount64 = GetTickCount64();
  v10 = 0LL;
  *((_QWORD *)this + 3161) = TickCount64 + 3600000;
  *((_DWORD *)this + 6318) = 0;
  v11 = 64LL;
  *((_QWORD *)this + 3160) = (char *)this + 24760;
  *((_DWORD *)this + 6319) = 2048;
  if ( (char *)this + 24760 >= (char *)this + 25272 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      ++v10;
      *v8++ = ((unsigned __int64)this + 25272) | 1;
    }
    while ( v10 < v11 );
  }
  *((_QWORD *)this + 3198) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3198) = &CDebugFrameCounter::`vftable';
  *((_DWORD *)this + 6398) = 0;
  *((_QWORD *)this + 3780) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3780) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 7562) = 0;
  *((_DWORD *)this + 7437) = -1;
  *((_DWORD *)this + 7436) = -1;
  *((_DWORD *)this + 6401) = -1;
  *((_DWORD *)this + 6400) = -1;
  *((_DWORD *)this + 7435) = 1;
  *((_DWORD *)this + 7434) = 1;
  v12 = 1352LL * *((unsigned int *)this + 5478);
  *((_DWORD *)this + 5479) = 15;
  *((_DWORD *)this + 5480) = -1;
  *((_QWORD *)this + 2741) = (char *)this + v12 + 280;
  *((_QWORD *)this + 2742) = (char *)this + 20560;
  *((_DWORD *)this + 5481) = -1;
  *((_BYTE *)this + 22284) = 1;
  *((_DWORD *)this + 5569) = -1;
  *((_QWORD *)this + 18) = a2;
  *((_QWORD *)this + 19) = a3;
  *((_QWORD *)this + 20) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
