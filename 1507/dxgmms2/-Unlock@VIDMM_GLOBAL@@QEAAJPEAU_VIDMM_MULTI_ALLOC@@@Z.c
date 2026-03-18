/*
 * XREFs of ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0053D34
 * Callers:
 *     ?VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000E4A0 (-VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VIDMM_GLOBAL::Unlock(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::UnlockInternal(this, a2);
}
