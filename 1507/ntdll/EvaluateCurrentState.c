/*
 * XREFs of EvaluateCurrentState @ 0x1800F67A8
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180083478 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

char EvaluateCurrentState()
{
  if ( *(_DWORD *)g_Feature_3375152443_57873836_FeatureDescriptorDetails )
    return *(_DWORD *)g_Feature_3375152443_57873836_FeatureDescriptorDetails != 1;
  else
    return EvaluateCurrentStateFromRegistry(57873836LL, 2LL);
}
