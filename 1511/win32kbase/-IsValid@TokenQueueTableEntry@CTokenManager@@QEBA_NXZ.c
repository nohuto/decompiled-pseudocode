/*
 * XREFs of ?IsValid@TokenQueueTableEntry@CTokenManager@@QEBA_NXZ @ 0x1C00A8F2C
 * Callers:
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E2308 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E262C (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C00A8928 (-HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z.c)
 */

char __fastcall CTokenManager::TokenQueueTableEntry::IsValid(CompositionSurfaceObject **this)
{
  char v1; // bl
  CompositionSurfaceObject *v2; // rcx
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  if ( *(CompositionSurfaceObject **)this[1] == this[1] )
  {
    v2 = *this;
    v4 = 0;
    if ( (int)CompositionSurfaceObject::HasActiveBinding(v2, &v4) < 0 || !v4 )
      return 0;
  }
  return v1;
}
