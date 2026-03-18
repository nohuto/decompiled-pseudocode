/*
 * XREFs of ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C000E134
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C006E2A0 (-DeferredSetVprCallback@@YAXPEAX@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetVideoProtectedRegion(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  return ((__int64 (__fastcall **)(ADAPTER_RENDER *, struct _DXGKARG_SETVIDEOPROTECTEDREGION *))DxgCoreInterface)[45](
           this,
           a2);
}
