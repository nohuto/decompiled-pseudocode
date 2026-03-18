/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C0044DB0
 * Callers:
 *     ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C0008640 (-VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *(_OWORD *)((char *)this + 39880) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 39896) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 39912) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 39928) = *((_OWORD *)a2 + 3);
}
