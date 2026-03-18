/*
 * XREFs of HidTLCActive @ 0x1C01D5530
 * Callers:
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C0089F88 (-HidDeviceStartStop@@YAXXZ.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidTLCActive(_DWORD *a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1[6] || a1[7] > (unsigned int)(a1[8] - a1[9]) )
    return 1;
  return v1;
}
