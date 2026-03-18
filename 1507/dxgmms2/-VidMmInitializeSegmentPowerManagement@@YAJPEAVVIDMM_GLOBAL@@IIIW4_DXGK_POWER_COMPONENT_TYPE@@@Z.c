/*
 * XREFs of ?VidMmInitializeSegmentPowerManagement@@YAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C000E280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmInitializeSegmentPowerManagement(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _DXGK_POWER_COMPONENT_TYPE a5)
{
  return VIDMM_GLOBAL::InitializeSegmentPowerManagement(a1, a2, a3, a4, a5);
}
