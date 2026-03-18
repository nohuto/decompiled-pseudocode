/*
 * XREFs of ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001D090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiCalibrateGpuClock(
        struct ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  return ADAPTER_RENDER::DdiCalibrateGpuClock(this, a2, a3, a4);
}
