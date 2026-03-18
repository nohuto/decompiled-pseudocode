/*
 * XREFs of ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C0055F30
 * Callers:
 *     VidMmTerminateCompanionContext @ 0x1C000E8A0 (VidMmTerminateCompanionContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VIDMM_GLOBAL::VidMmTerminateCompanionContext(struct VIDMM_COMPANION_CONTEXT *a1)
{
  operator delete(a1);
}
