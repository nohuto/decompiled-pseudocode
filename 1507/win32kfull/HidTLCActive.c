/*
 * XREFs of HidTLCActive @ 0x1C01D3AB0
 * Callers:
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C0078C78 (-HidDeviceStartStop@@YAXXZ.c)
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
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
