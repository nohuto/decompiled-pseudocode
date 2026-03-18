/*
 * XREFs of ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C0016D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmInitializeAdapterPowerManagement(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  VIDMM_GLOBAL::InitializeAdapterPowerManagement(a1, a2);
}
