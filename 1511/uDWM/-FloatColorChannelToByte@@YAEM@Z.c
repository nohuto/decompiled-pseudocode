/*
 * XREFs of ?FloatColorChannelToByte@@YAEM@Z @ 0x18003EDF0
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002AB90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     DwmpCalculateColorizationColor @ 0x1800457FC (DwmpCalculateColorizationColor.c)
 * Callees:
 *     floorf_0 @ 0x18004FF36 (floorf_0.c)
 */

__int64 __fastcall FloatColorChannelToByte(float a1)
{
  float v1; // xmm0_4

  v1 = floorf_0((float)(a1 * 255.0) + 0.5);
  if ( v1 >= 255.0 )
    v1 = FLOAT_255_0;
  return (unsigned int)(int)v1;
}
