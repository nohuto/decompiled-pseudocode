/*
 * XREFs of GetStaticImmersiveColorPriv @ 0x180012A8C
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002AB90 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x18009CC54 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStaticImmersiveColorPriv(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  BOOL v3; // eax
  int v5; // ecx
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v1 = a1;
  v2 = -65281;
  if ( (unsigned int)(a1 - 209) <= 0x3F0 )
  {
    pvParam = 16;
    v7 = 0LL;
    v8 = 0;
    v3 = SystemParametersInfoA(0x42u, 0x10u, &pvParam, 0);
    v2 = 0;
    if ( v3 && (v7 & 1) != 0 )
    {
      v5 = g_ImmersiveHighContrastMappings[v1];
      if ( v5 != 31 )
        return GetSysColor(v5) | 0xFF000000;
    }
    else
    {
      return *(unsigned int *)&aShellLightdism[2 * v1 + 18];
    }
  }
  return v2;
}
