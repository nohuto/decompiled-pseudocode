/*
 * XREFs of NtGdiGetBitmapBits @ 0x1C00FBE70
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBits @ 0x1C00FBF74 (GreGetBitmapBits.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiGetBitmapBits(HSURF a1, unsigned int a2, volatile void *a3)
{
  unsigned int v6; // edi
  void *v7; // rbx
  unsigned int BitmapBits; // eax
  HANDLE v9; // rax

  v6 = 1;
  v7 = 0LL;
  BitmapBits = GreGetBitmapBits(a1);
  if ( a2 > BitmapBits )
    a2 = BitmapBits;
  if ( a3 )
  {
    ProbeForWrite(a3, a2, 1u);
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v9 = (HANDLE)GrepSecureVirtualMemory(a3, a2, 4LL);
    else
      v9 = MmSecureVirtualMemory((PVOID)a3, a2, 4u);
    v7 = v9;
    v6 = v9 != 0LL;
  }
  if ( v6 )
    v6 = GreGetBitmapBits(a1);
  if ( v7 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v7);
    else
      MmUnsecureVirtualMemory(v7);
  }
  return v6;
}
