/*
 * XREFs of EngSecureMem @ 0x1C00CADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB050 (GrepSecureVirtualMemory.c)
 */

HANDLE __stdcall EngSecureMem(PVOID Address, ULONG cjLength)
{
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
    return (HANDLE)GrepSecureVirtualMemory(Address, cjLength, 4LL);
  else
    return MmSecureVirtualMemory(Address, cjLength, 4u);
}
