/*
 * XREFs of memset_0 @ 0x140003F02
 * Callers:
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140001E90 (--0CDwmAppHost@@QEAA@XZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400021C0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002310 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     McGenControlCallbackV2 @ 0x140002C00 (McGenControlCallbackV2.c)
 *     ?QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z @ 0x140004BCC (-QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140004FC0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140005480 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
