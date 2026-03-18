/*
 * XREFs of ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005BF2C
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C002498C (HmgAllocateDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB050 (GrepSecureVirtualMemory.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00CB060 (GrepUnsecureVirtualMemory.c)
 */

PVOID __fastcall HmgAllocateSecureUserMemory(void **a1)
{
  HANDLE v2; // rax
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp+18h] BYREF
  HANDLE SecureHandle; // [rsp+58h] [rbp+20h]

  Address = 0LL;
  Size = 4096LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u) >= 0 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v2 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
    else
      v2 = MmSecureVirtualMemory(Address, Size, 4u);
    SecureHandle = v2;
    *a1 = v2;
    if ( v2 )
    {
      memset(Address, 0, Size);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
      return 0LL;
    }
  }
  return Address;
}
