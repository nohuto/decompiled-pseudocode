/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001C3D8
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x1C000D420 (VidSchiProcessIsrVSync.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C0014AD8 (VidSchiUpdateCurrentIsrFrameTime.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        __int64 a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))DxgCoreInterface[47])(
           this,
           0LL,
           0LL,
           a4);
}
