/*
 * XREFs of NtGdiSetBitmapBits @ 0x1C00FC210
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapBits @ 0x1C00FC310 (GreSetBitmapBits.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(HSURF a1, SIZE_T Size, char *Address)
{
  SIZE_T v4; // rsi
  HANDLE v6; // rax
  void *v7; // rdi
  unsigned int v8; // ebx

  v4 = (unsigned int)Size;
  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > W32UserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *W32UserProbeAddress = 0;
  }
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
    v6 = (HANDLE)GrepSecureVirtualMemory(Address, v4, 2LL);
  else
    v6 = MmSecureVirtualMemory(Address, v4, 2u);
  v7 = v6;
  v8 = v6 != 0LL;
  if ( v8 )
    v8 = GreSetBitmapBits(a1);
  if ( v7 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v7);
    else
      MmUnsecureVirtualMemory(v7);
  }
  return v8;
}
