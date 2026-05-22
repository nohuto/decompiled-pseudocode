/*
 * XREFs of ?ExistsValueForKey@?$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z @ 0x180073B84
 * Callers:
 *     ?OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z @ 0x180073700 (-OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800737D0 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z @ 0x180073EF0 (-OnDeviceRemoval@TouchDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073FC0 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x180074560 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074630 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DynamicSizeMap<unsigned long,InputInfoSanitizer *,1>::ExistsValueForKey(__int64 a1, int *a2)
{
  int v2; // r8d
  unsigned int v4; // edx
  unsigned int v5; // ecx

  v2 = *a2;
  if ( *a2 == *(_DWORD *)(a1 + 16) )
    return 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( !v4 )
    return 0;
  while ( *(_DWORD *)(16LL * v5 + *(_QWORD *)a1) != v2 )
  {
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
