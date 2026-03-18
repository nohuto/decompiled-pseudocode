/*
 * XREFs of NtGdiEngCreatePalette @ 0x1C02AD6E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02ABF70 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02ABFC4 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 */

HPALETTE __fastcall NtGdiEngCreatePalette(int a1, ULONG a2, char *a3, FLONG a4, FLONG flGreen, FLONG flBlue)
{
  HANDLE v10; // rsi
  int Bits; // eax
  HPALETTE Palette; // rdi
  ULONG *v14; // r8
  HANDLE SecureHandle; // [rsp+30h] [rbp-468h] BYREF
  ULONG pulColors[256]; // [rsp+40h] [rbp-458h] BYREF

  memset(pulColors, 0, sizeof(pulColors));
  v10 = 0LL;
  SecureHandle = 0LL;
  if ( a2 > 0x10000 )
    return 0LL;
  if ( (a1 & 0xFFFF7FFF) != 1
    || !a2
    || (a2 <= 0x100
      ? (HANDLE)(Bits = bSafeReadBits(pulColors, a3, 4 * a2))
      : (Bits = bSecureBits(a3, 4 * a2, &SecureHandle), v10 = SecureHandle),
        (Palette = (HPALETTE)Bits) != 0LL) )
  {
    v14 = (ULONG *)a3;
    if ( a2 <= 0x100 )
      v14 = pulColors;
    Palette = EngCreatePalette(a1 | 0x8000u, a2, v14, a4, flGreen, flBlue);
  }
  if ( v10 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v10);
    else
      MmUnsecureVirtualMemory(v10);
  }
  return Palette;
}
