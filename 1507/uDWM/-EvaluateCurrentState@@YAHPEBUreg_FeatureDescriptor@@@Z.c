/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800783E8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180029DC0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  if ( *(_DWORD *)g_Feature_3403630905_59697452_FeatureDescriptorDetails )
    return *(_DWORD *)g_Feature_3403630905_59697452_FeatureDescriptorDetails != 1;
  else
    return EvaluateCurrentStateFromRegistry(59697452LL, 2LL);
}
