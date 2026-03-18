/*
 * XREFs of ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C039C
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C002498C (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00CB060 (GrepUnsecureVirtualMemory.c)
 */

void __fastcall HmgFreeAllocateSecureUserMemory(void *a1, void *a2)
{
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a1;
  RegionSize = 4096LL;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
    GrepUnsecureVirtualMemory(a2);
  else
    MmUnsecureVirtualMemory(a2);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}
