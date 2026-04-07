/*
 * XREFs of GetStaticImmersiveColorPriv @ 0x18009EBCC
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800252C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x18009B584 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStaticImmersiveColorPriv(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  BOOL v3; // eax
  int v4; // ecx
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
      v4 = g_ImmersiveHighContrastMappings[v1];
      if ( v4 != 31 )
        return GetSysColor(v4) | 0xFF000000;
    }
    else
    {
      return *(unsigned int *)&aMetroghostwind[2 * v1 + 14];
    }
  }
  return v2;
}
