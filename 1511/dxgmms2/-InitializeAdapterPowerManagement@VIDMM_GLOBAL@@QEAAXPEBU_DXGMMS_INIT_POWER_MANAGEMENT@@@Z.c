/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C006DE44
 * Callers:
 *     ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C0016D40 (-VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *((_OWORD *)this + 2496) = *(_OWORD *)a2;
  *((_OWORD *)this + 2497) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2498) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 2499) = *((_OWORD *)a2 + 3);
}
