/*
 * XREFs of ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02ABFC4
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1C02AD6E0 (NtGdiEngCreatePalette.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall bSecureBits(char *Address, SIZE_T Size, void **a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // ebx
  char *v7; // rcx
  HANDLE v8; // rax

  v4 = (unsigned int)Size;
  v6 = 1;
  *a3 = 0LL;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      v7 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v7 > W32UserProbeAddress || v7 < Address )
        *W32UserProbeAddress = 0;
    }
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v8 = (HANDLE)GrepSecureVirtualMemory(Address, v4, 2LL);
    else
      v8 = MmSecureVirtualMemory(Address, v4, 2u);
    *a3 = v8;
    return v8 != 0LL;
  }
  return v6;
}
