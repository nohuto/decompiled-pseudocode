/*
 * XREFs of ?VidSchIsVSyncAvailable@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0005A2C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00DF6E8 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchIsVSyncAvailable(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD))(*((_QWORD *)this + 1) + 448LL))(a2, a3);
}
