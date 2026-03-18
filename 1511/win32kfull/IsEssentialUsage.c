/*
 * XREFs of IsEssentialUsage @ 0x1C01CDB68
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     ?_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z @ 0x1C01DE948 (-_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsEssentialUsage(unsigned __int16 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 <= 0x4D30u )
  {
    if ( a1 != 19760
      && (a1 < 0x1130u
       || a1 > 0x1131u && a1 != 7472 && (a1 <= 0x1D3Cu || a1 > 0x1D3Eu && a1 != 7489 && (a1 <= 0x412Fu || a1 > 0x4131u))) )
    {
      return v1;
    }
    return 1;
  }
  if ( a1 == 19775
    || a1 > 0x4D47u
    && (a1 <= 0x4D49u || a1 > 0x512Fu && (a1 <= 0x5131u || a1 == 23856 || (unsigned int)a1 - 23880 <= 1)) )
  {
    return 1;
  }
  return v1;
}
