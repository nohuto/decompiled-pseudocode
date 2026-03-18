/*
 * XREFs of NtGdiCreateBitmap @ 0x1C0108DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?noOverflowCJSCANW@@YAKKGGK@Z @ 0x1C02A6D6C (-noOverflowCJSCANW@@YAKKGGK@Z.c)
 */

__int64 __fastcall NtGdiCreateBitmap(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, char *Address)
{
  __int64 Bitmap; // rdi
  void *v10; // rbx
  signed int v11; // eax
  SIZE_T v12; // rbx
  HANDLE v13; // rax

  Bitmap = 1LL;
  v10 = 0LL;
  if ( Address )
  {
    v11 = noOverflowCJSCANW(a1, a3, a4, a2);
    Bitmap = -(__int64)(v11 != 0) & 1;
    if ( v11 )
    {
      v12 = v11;
      if ( (unsigned __int64)&Address[v11] > W32UserProbeAddress || &Address[v11] < Address )
        *W32UserProbeAddress = 0;
      if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
        v13 = (HANDLE)GrepSecureVirtualMemory(Address, v12, 2LL);
      else
        v13 = MmSecureVirtualMemory(Address, v12, 2u);
      v10 = v13;
      Bitmap &= -(__int64)(v13 != 0LL);
    }
  }
  if ( Bitmap )
    Bitmap = GreCreateBitmap(a1, a2, a3, a4, Address);
  if ( v10 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v10);
    else
      MmUnsecureVirtualMemory(v10);
  }
  return Bitmap;
}
